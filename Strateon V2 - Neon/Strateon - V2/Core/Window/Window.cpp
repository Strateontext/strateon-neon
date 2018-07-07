#include <QApplication>
#include <QtWidgets>
#include "Window.h"

namespace Strateon {

Window::Window(){
	setCentralWidget(m_EditorArea);
    m_EditorArea = new EditorArea;
    m_ToolBar = new QToolBar;
    m_StatusBar = new QStatusBar;
    m_MenuBar = new QMenuBar;
    }
}


