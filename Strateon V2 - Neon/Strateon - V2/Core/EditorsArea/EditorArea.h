#ifndef EDITORAREA_H
#define EDITORAREA_H

#include <QApplication>
#include <QtWidgets>
#include "../../Edition/Editor/Editor.h"

namespace Strateon {

class EditorArea: public QMdiArea {

public:
        EditorArea();

private:
        Editor *m_textzone;

signals:

    };
}
#endif
