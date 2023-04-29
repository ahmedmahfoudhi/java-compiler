const { BrowserWindow, app, ipcMain, dialog, Notification } = require('electron');
const path = require('path');
const fs = require('fs');
const {exec, spawn} = require('child_process');


require("electron-reloader")(module);

let mainWindow;

const notify = (type,content) => {
    mainWindow.webContents.send('notification-triggered',{type,content});
}

const createWindow = () => {
    mainWindow = new BrowserWindow({
        width: 900,
        height: 700,
        webPreferences:{
            nodeIntegration: true,
            contextIsolation: false,
            preload: path.join(app.getAppPath(), 'js/script.js'),
        },
        autoHideMenuBar: true,
    })

    mainWindow.webContents.openDevTools();
    mainWindow.loadFile('index.html');
    mainWindow.on('closed', function() {
        mainWindow = null;
    });
}

app.whenReady().then(createWindow)
app.commandLine.appendSwitch('disable-web-security');

ipcMain.on("open-document-triggered", () => {
    dialog.showOpenDialog({
        properties: ['openFile'],
        filters: [
            {name: 'Text Files', extensions: ['txt']},
            {name: 'Java Files', extensions: ['java']},
        ]
    }).then(result => {
        if(!result.canceled){
            const filePath = result.filePaths[0];
            fs.readFile(filePath, "utf8",(error, content) => {
                if(error){
                    notify('error',error);
                }else{
                    mainWindow.webContents.send('document-opened', {filePath, content});
                }
            })
            
        }
    }).catch(err => {
        notify('error', err);
    }); 
});

ipcMain.on("save-document-triggered", (_,{filePath, content}) => {
    if(!filePath){
        notify("error", "No file to save");
        return;
    }
    console.log(filePath, content);
    fs.writeFile(filePath,content,error => {
        if(error){
            notify('error', error);
        }else{
            notify('success', 'File saved successfully');
        }
    })
});

ipcMain.on('compile-file-triggered',(_,{filePath,content}) => {

    fs.writeFile(filePath, content, err => {
        if(err){
            notify("error", err);
            return;
        }
        const programPath = 'compiler/a.out';
        const command = `${programPath} < ${filePath}`;
        exec(command,(error, stdout, stderr) => {
            console.log(error);
            console.log(stdout);
            console.log(stderr);
            if(stderr){
                notify('error', stderr);
            }else{
                notify('success', "Compiled Successfully")
            }
        })
        
    })
    
});


