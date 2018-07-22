#include <QApplication>
#include <QtWidgets>

#include "Layout.h"
#include "TextEdit.h"
#include "LineNumber.h"

namespace Strateon {

Layout::Layout(QWidget *parent) : QHBoxLayout(parent){

    m_LineNumber = new TableWidget();
    m_Editor = new TextEdit();
    addWidget(m_LineNumber);
    addWidget(m_Editor);
    setContentsMargins(0, 0, 0, 0);
    setSpacing(1);

    }

}


