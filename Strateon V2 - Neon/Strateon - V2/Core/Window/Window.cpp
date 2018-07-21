#include <QApplication>
#include <QtWidgets>
#include "Window.h"

namespace Strateon {

Window::Window() : QMainWindow(){

    setUnifiedTitleAndToolBarOnMac(true);

    m_EditorArea = new EditorArea(this);
    setCentralWidget(m_EditorArea);

    m_StatusBar = new StatusBar(this);
    setStatusBar(m_StatusBar);

    m_MenuBar = new MenuBar(this);
    setMenuBar(m_MenuBar);

    m_ToolBar = new ToolBar(this);
    addToolBar(m_ToolBar);

    }
}


