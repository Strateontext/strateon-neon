#include <QApplication>
#include <QtWidgets>
#include "EditorArea.h"

namespace Strateon {

EditorArea::EditorArea(QWidget *parent) : QMdiArea(parent){

    setBackground(QColor(49,51,52));
    m_TextZone = new Editor(this);
    addSubWindow(m_TextZone)->move(50,50);
    m_WebRender = new WebRender();
    m_WebRender->setMinimumSize(400,400);
    addSubWindow(m_WebRender)->move(800,50);


    }

void EditorArea::setEditorOpacity(int value){

    m_TextZone->setWindowOpacity(value);
    }

}
