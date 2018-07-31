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

    m_ButtonDefault = new ButtonEditor(this);
    m_ButtonBold = new ButtonEditor(this);
    m_ButtonItalic = new ButtonEditor(this);
    m_ButtonUnderline = new ButtonEditor(this);
    m_SliderSize = new QSlider(this);
    m_ButtonColor = new ButtonEditor(this);
    m_ToolBar = new QWidget(this);

    m_EditorLayoutPrinc = new QVBoxLayout(this);
    m_EditorLayoutTool = new QHBoxLayout(this);
    m_EditorLayoutWidgets = new QHBoxLayout(this);

    m_ToolBar->setLayout(m_EditorLayoutTool);
    m_ToolBar->setFixedHeight(40);
    m_ToolBar->setContentsMargins(1, 1, 1, 1);

    m_EditorLayoutPrinc->addWidget(m_ToolBar);
    m_EditorLayoutPrinc->addLayout(m_EditorLayoutWidgets);

    m_EditorLayoutTool->addWidget(m_ButtonDefault);
    m_EditorLayoutTool->addWidget(m_ButtonBold);
    m_EditorLayoutTool->addWidget(m_ButtonItalic);
    m_EditorLayoutTool->addWidget(m_ButtonUnderline);
    m_EditorLayoutTool->addWidget(m_SliderSize);
    m_EditorLayoutTool->addWidget(m_ButtonColor);

    m_EditorLayoutWidgets->addWidget(m_LineNumber);
    m_EditorLayoutWidgets->addWidget(m_Editor);
    m_EditorLayoutTool->setContentsMargins(0, 0, 0, 0);
    m_EditorLayoutPrinc->setContentsMargins(0, 0, 0, 0);
    m_EditorLayoutPrinc->setSpacing(2);


    setLayout(m_EditorLayoutPrinc);



    }
Editor::~Editor(){

    delete m_LineNumber;
    delete m_Editor;

    }



}


