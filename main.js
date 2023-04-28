const { BrowserWindow, app, ipcMain, dialog, Notification } = require('electron');
const path = require('path');
const fs = require('fs');
const {exec} = require('child_process');


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
    fs.writeFile(filePath,content,error => {
        if(error){
            notify('error', error);
        }else{
            notify('success', 'File saved successfully');
        }
    })
});

ipcMain.on('compile-file-triggered',(_,{filePath,content}) => {


    fs.writeFile(filePath,content,err => {
        if(err){
            notify('error', "Verify that file exists");
        }else{
            
            const command = "compiler/exemple < " + filePath;
            exec(command,(error,stdout, stderr) => {
                if(error){
                    console.log(error[0], error[-1]);
                    notify('error', stderr);
                }else{
                    notify("success", "Compiled Successfully")
                }
            })
            fs.readFile(filePath, "utf8",(error, content) => {
                if(error){
                    notify('error',error);
                }else{
                    mainWindow.webContents.send('document-opened', {filePath, content});
                }
            })

        }
    })
});


