#ifndef EDITOR_H
#define EDITOR_H

#include <QApplication>
#include <QtWidgets>
#include "TextEdit.h"
#include "LineNumber.h"

namespace Strateon {



class Editor : public QWidget{

public:
    Editor(QWidget *parent);
    ~Editor();
    void setWindowOpacity(int);

private:


    QMessageBox *m_ErrorMessage;
    QHBoxLayout *m_EditorLayout;
    TextEdit *m_Editor;
    TableWidget *m_LineNumber;
    };
}
#endif
