#ifndef EDITOR_H
#define EDITOR_H

#include <QApplication>
#include <QtWidgets>
#include "TextEdit.h"
#include "LineNumber.h"
#include "Layout.h"

namespace Strateon {

class Editor : public QWidget{

public:
    Editor(QWidget *parent);
    ~Editor();

private:


    QHBoxLayout *m_EditorLayout;
    TextEdit *m_Editor;
    TableWidget *m_LineNumber;
    };
}
#endif
