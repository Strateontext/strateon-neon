#include <QApplication>
#include <QtWidgets>
#include "EditorArea.h"

namespace Strateon {

EditorArea::EditorArea(QWidget *parent) : QMdiArea(parent){

    setBackground(QColor(49,51,52));
    m_TextZone = new Editor(this);
    addSubWindow(m_TextZone)->move(50,50);
    m_WebRender = new WebRender();
    addSubWindow(m_WebRender)->move(800,50);


    }
}
