#include <QApplication>
#include <QtWidgets>
#include "EditorArea.h"

namespace Strateon {

EditorArea::EditorArea(QWidget *parent) : QMdiArea(parent){

    setBackground(QColor(49,51,52));
    m_textzone = new Editor(this);
    addSubWindow(m_textzone);

    }
}
