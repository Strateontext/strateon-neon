#include <QApplication>
#include <QtWidgets>
#include "WebRender.h"
#include "WebEngine.h"


namespace Strateon {

WebRender::WebRender() : QWidget(){

    m_WebEngine = new WebEngine();
    m_WebRenderLayout = new QHBoxLayout();
    m_WebRenderLayout->addWidget(m_WebEngine);
    m_WebRenderLayout->setContentsMargins(0, 0, 0, 0);
    setLayout(m_WebRenderLayout);

    }
WebRender::~WebRender(){

    delete m_WebEngine;

    }

}


