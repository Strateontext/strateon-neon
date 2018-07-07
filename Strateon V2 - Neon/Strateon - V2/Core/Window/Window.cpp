#include <QApplication>
#include <QtWidgets>
#include "Window.h"

namespace Strateon {

Window::Window(){
	setCentralWidget(m_EditorArea);
    m_EditorArea = new EditorArea;
    m_ToolBar = new ToolBar;
    m_StatusBar = new StatusBar;
    m_MenuBar = new MenuBar;
    }
}


