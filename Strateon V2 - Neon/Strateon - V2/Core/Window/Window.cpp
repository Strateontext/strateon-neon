#include <QApplication>
#include <QtWidgets>
#include "Window.h"
#include "../EditorsArea/EditorArea.h"

namespace Strateon {

Window::Window() : QMainWindow(){

    setUnifiedTitleAndToolBarOnMac(false);

    m_EditorArea = new EditorArea(this);
    setCentralWidget(m_EditorArea);

    m_StatusBar = new StatusBar(this);
    setStatusBar(m_StatusBar);

    m_MenuBar = new MenuBar(this);
    setMenuBar(m_MenuBar);

    m_ToolBar = new ToolBar(this);
    addToolBar(m_ToolBar);

    m_FileSystem = new TreeFileBrowser(this);
    m_Dock = new QDockWidget(this);
    m_Dock->setTitleBarWidget(new QWidget());
    m_Dock->setWidget(m_FileSystem);
    m_Dock->setStyleSheet("background: rgb(49,51,52); color: white;");
    addDockWidget(Qt::LeftDockWidgetArea, m_Dock);

    connect(m_StatusBar, &StatusBar::SignalOpacityChanged, this, &Window::setEditorAreaOpacity);
    }

void Window::setEditorAreaOpacity(int value){
    m_EditorArea->setEditorOpacity(value);

    }

}


