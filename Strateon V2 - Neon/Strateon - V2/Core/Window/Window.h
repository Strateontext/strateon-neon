#ifndef WINDOW_H
#define WINDOW_H

#include <QApplication>
#include <QtWidgets>
#include "../EditorsArea/EditorArea.h"
#include "../Bar/ToolBar/ToolBar.h"
#include "../Bar/StatusBar/StatusBar.h"
#include "../Bar/MenuBar/MenuBar.h"
#include "../Bar/TabBar/TabBar.h"


namespace Strateon {

class Window : public QMainWindow{

public:
    Window();


private:

    StatusBar *m_StatusBar;
    EditorArea *m_EditorArea;
    MenuBar *m_MenuBar;
    TabBar *m_TabBar;
    ToolBar *m_ToolBar;
    };
}
#endif
