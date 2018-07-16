#include <QApplication>
#include <QtWidgets>
#include "EditorArea.h"

namespace Strateon {

EditorArea::EditorArea(){

    setBackground(QColor(49,51,52));
    m_textzone = new Editor();
    addSubWindow(m_textzone);

    }
}
