#include <QApplication>
#include <QtWidgets>
#include "Window.h"

namespace Strateon {

Window::Window(){

    m_EditorArea = new EditorArea();
    setCentralWidget(m_EditorArea);

    m_StatusBar = new StatusBar();
    setStatusBar(m_StatusBar);

    m_MenuBar = new MenuBar();
    setMenuBar(m_MenuBar);

    m_ToolBar = new ToolBar();
    addToolBar(m_ToolBar);

    }
}


