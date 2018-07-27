#include <QApplication>
#include <QtWidgets>
#include "WebRender.h"


namespace Strateon {

WebRender::WebRender(QWidget *parent) : QWidget(parent){

    m_WebRenderLayout = new WebLayout(this);
    setLayout(m_WebRenderLayout);

    }


}


