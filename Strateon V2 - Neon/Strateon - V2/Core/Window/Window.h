#ifndef WINDOW_H
#define WINDOW_H

#include <QApplication>
#include <QtWidgets>
#include "../EditorsArea/EditorArea.h"
#include "../Bar/ToolBar/ToolBar.h"
#include "../Bar/StatusBar/StatusBar.h"
#include "../Bar/MenuBar/MenuBar.h"
#include "../../FileSystem/filesystem.h"


namespace Strateon {



class Window : public QMainWindow{

public:
    Window();
    void NewSubwindow();
    void SavingFile();
    void OpenFile();
    void PrintFile();

    void SetBold();
    void SetNormal();
    void SetColor();
    void SetUnderline();
    void SetItalic();
    void SetSize(int);



private:

    TreeFileBrowser *m_FileSystem;
    StatusBar *m_StatusBar;
    EditorArea *m_EditorArea;
    MenuBar *m_MenuBar;
    ToolBar *m_ToolBar;
    QDockWidget *m_Dock;
    };
}
#endif
