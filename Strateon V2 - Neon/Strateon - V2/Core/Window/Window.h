#ifndef WINDOW_H
#define WINDOW_H

#include <QApplication>
#include <QtWidgets>
#include "../EditorsArea/EditorArea.h"
#include "../ToolBar/ToolBar.h"
#include "../StatusBar/StatusBar.h"
#include "../MenuBar/MenuBar.h"

namespace Strateon {

class Window : public QMainWindow{

public:
    Window();


private:
    QToolBar *m_ToolBar;
    QStatusBar *m_StatusBar;
    QMenuBar *m_MenuBar;
    EditorArea *m_EditorArea;

    };
}
#endif
