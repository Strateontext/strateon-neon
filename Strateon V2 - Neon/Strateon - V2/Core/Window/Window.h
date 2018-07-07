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
    ToolBar *m_ToolBar;
    StatusBar *m_StatusBar;
    EditorArea *m_EditorArea;
    QMenuBar *m_MenuBar;

    };
}
#endif
