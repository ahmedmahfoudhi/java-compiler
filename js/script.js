const {ipcRenderer} = require('electron');
const path = require('path')

window.addEventListener('DOMContentLoaded', () => {
    const panel = {
        openDoc : document.querySelector("#open"),
        saveDoc: document.querySelector("#save"),
        compile: document.querySelector("#compile"),
    };
    const fileNameContainer = document.querySelector('.file-name');
    const textArea = document.querySelector(".editor");
    const notification = {
        notifContainer: document.querySelector('.notification-container'),
        notif: document.querySelector('.notification'),
        body: document.querySelector('.notification p')
    }

    let curFilePath;
    
    const handleSaveDocument = () => {
        if(!curFilePath) return;
        ipcRenderer.send('save-document-triggered',{filePath: curFilePath, content:textArea.value})
    }

    const handleOpenDocument = () => {
        console.log('clicked');
        ipcRenderer.send('open-document-triggered');
    }

    const handleCompile = () => {
        if(!curFilePath) return;
        ipcRenderer.send('compile-file-triggered',{filePath: curFilePath, content: textArea.value});
    }

    panel.openDoc.addEventListener('click',handleOpenDocument);
    panel.saveDoc.addEventListener('click',handleSaveDocument);
    panel.compile.addEventListener('click',handleCompile);

    const handleDocumentChange = (filePath, content='') => {
        curFilePath = filePath;
        let fileName = path.parse(filePath).base;
        fileNameContainer.textContent = fileName;
        fileNameContainer.classList.remove('display-none');
        textArea.removeAttribute('disabled');
        textArea.value = content;
        textArea.focus();
        panel.saveDoc.classList.remove('disabled');
        panel.compile.classList.remove('disabled');
    }

    ipcRenderer.on("document-opened", (_,{filePath,content}) =>{
        handleDocumentChange(filePath,content);
    });

    ipcRenderer.on("notification-triggered",(_,{type,content}) => {
        showNotification(type,content);
    })


    const showNotification = (type="success", content="") => {
        notification.notifContainer.classList.remove('display-none');
        notification.body.textContent = content;
        notification.notif.classList.add(type);
        setTimeout(() => removeNotification(type), 900000000);
    }

    const removeNotification = (type) => {
        notification.notifContainer.classList.add('display-none');
        notification.notif.classList.remove(type);
        notification.body.textContent = "";

    }
});



