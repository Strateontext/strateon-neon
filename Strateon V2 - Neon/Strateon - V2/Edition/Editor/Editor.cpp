#include <QApplication>
#include <QtWidgets>
#include "Editor.h"

namespace Strateon {

Editor::Editor(){

    m_Editor = new QTextEdit();
    //m_LineNumber = new QTableWidget();

    m_EditorLayout = new QHBoxLayout();
    m_EditorLayout->addWidget(m_Editor);
    //m_EditorLayout->addWidget(m_LineNumber);
    setLayout(m_EditorLayout);
    m_EditorLayout->setContentsMargins(0, 0, 0, 0);
    }

}


