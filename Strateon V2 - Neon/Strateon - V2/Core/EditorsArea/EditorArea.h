#ifndef EDITORAREA_H
#define EDITORAREA_H

#include <QApplication>
#include <QtWidgets>

namespace Strateon {

class EditorArea: public QMdiArea {

public:
        EditorArea();

private:
        QMdiArea *m_EditorArea;

signals:

    };
}
#endif
