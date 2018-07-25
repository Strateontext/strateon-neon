#include <QApplication>
#include <QtWidgets>
#include "Editor.h"
#include "TextEdit.h"
#include "LineNumber.h"

namespace Strateon {

Editor::Editor(QWidget *parent) : QWidget(parent){

    m_EditorLayout = new Layout(this);
    setLayout(m_EditorLayout);

    }


}


