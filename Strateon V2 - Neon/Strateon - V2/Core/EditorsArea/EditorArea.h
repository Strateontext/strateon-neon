#ifndef EDITORAREA_H
#define EDITORAREA_H

#include <QApplication>
#include <QtWidgets>
#include "../../Edition/Editor/Editor.h"
#include "../../WebRender/webrender.h"

namespace Strateon {

class EditorArea: public QMdiArea {

public:
        EditorArea(QWidget *parent);

private:
        Editor *m_TextZone;
        WebRender *m_WebRender;

signals:

    };
}
#endif
