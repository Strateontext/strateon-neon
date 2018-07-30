#include <QApplication>
#include <QtWidgets>
#include "Editor.h"
#include "TextEdit.h"
#include "LineNumber.h"
#include "../../Core/Bar/StatusBar/StatusBar.h"
#include "../../Core/EditorsArea/EditorArea.h"
#include "buttonsclass.h"

namespace Strateon {

Editor::Editor(QWidget *parent) : QWidget(parent){


    m_LineNumber = new TableWidget();
    m_Editor = new TextEdit();
    m_EditorLayout = new QGridLayout(this);
    m_ButtonColor = new ButtonEditor(this);
    m_EditorLayout->addWidget(m_ButtonColor,1,1);

    m_EditorLayout->addWidget(m_LineNumber,2,1);
    m_EditorLayout->addWidget(m_Editor,2,2);
    m_EditorLayout->setContentsMargins(0, 0, 0, 0);
    m_EditorLayout->setSpacing(0);

    setLayout(m_EditorLayout);



    }
Editor::~Editor(){

    delete m_LineNumber;
    delete m_Editor;

    }



}


