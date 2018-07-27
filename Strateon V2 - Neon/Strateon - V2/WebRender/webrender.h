#ifndef WEBRENDER_H
#define WEBRENDER_H

#include <QApplication>
#include <QtWidgets>
#include "WebLayout.h"

namespace Strateon {

class WebRender : public QWidget{

public:
    WebRender();
    ~WebRender();

private:

    QHBoxLayout *m_WebRenderLayout;
    WebEngine *m_WebEngine;

    };
}
#endif
