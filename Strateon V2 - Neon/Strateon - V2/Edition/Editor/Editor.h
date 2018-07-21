#ifndef EDITOR_H
#define EDITOR_H

#include <QApplication>
#include <QtWidgets>

namespace Strateon {

class Editor : public QWidget{

public:
    Editor(QWidget *parent);


private:

    QTextEdit *m_Editor;
    //QTableWidget *m_LineNumber;
    QHBoxLayout *m_EditorLayout;
    };
}
#endif
