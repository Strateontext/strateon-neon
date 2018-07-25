#ifndef LAYOUT_H
#define LAYOUT_H

#include <QApplication>
#include <QtWidgets>
#include "TextEdit.h"
#include "LineNumber.h"

namespace Strateon {

class Layout : public QHBoxLayout{

public:
    Layout(QWidget *parent);
    ~Layout();

private:

    TextEdit *m_Editor;
    TableWidget *m_LineNumber;

    };
}
#endif
