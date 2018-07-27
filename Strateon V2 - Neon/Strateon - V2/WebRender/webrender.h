#ifndef WEBRENDER_H
#define WEBRENDER_H

#include <QApplication>
#include <QtWidgets>
#include "WebLayout.h"

namespace Strateon {

class WebRender : public QWidget{

public:
    WebRender(QWidget *parent);

private:

    WebLayout *m_WebRenderLayout;

    };
}
#endif
