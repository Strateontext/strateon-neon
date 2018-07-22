#include <QApplication>
#include <QtWidgets>

#include "Layout.h"
#include "TextEdit.h"
#include "LineNumber.h"

namespace Strateon {

Layout::Layout(QWidget *parent) : QHBoxLayout(parent){

    m_Editor = new TextEdit(this);
    m_LineNumber = new TableWidget(this);
    addWidget(m_Editor);
    addWidget(m_LineNumber);
    setContentsMargins(0, 0, 0, 0);
    setSpacing(1);

    }

}


