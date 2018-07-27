#include <QApplication>
#include <QtWidgets>
#include "Editor.h"
#include "TextEdit.h"
#include "LineNumber.h"


namespace Strateon {

Editor::Editor(QWidget *parent) : QWidget(parent){


    m_LineNumber = new TableWidget();
    m_Editor = new TextEdit();
    m_EditorLayout = new QHBoxLayout();
    m_EditorLayout->addWidget(m_LineNumber);
    m_EditorLayout->addWidget(m_Editor);
    m_EditorLayout->setContentsMargins(0, 0, 0, 0);
    m_EditorLayout->setSpacing(1);

    setLayout(m_EditorLayout);

    }
Editor::~Editor(){

    delete m_LineNumber;
    delete m_Editor;

    }
}


