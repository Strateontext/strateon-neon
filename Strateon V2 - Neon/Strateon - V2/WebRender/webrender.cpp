#include <QApplication>
#include <QtWidgets>
#include "WebRender.h"
#include "WebEngine.h"
#include "UrlInput.h"
#include "BrowserToolBar.h"

namespace Strateon {

WebRender::WebRender() : QWidget(){

    m_BrowserToolBar = new BrowserToolBar(this);
    m_WebEngine = new WebEngine(this);
    m_WebRenderLayout = new QVBoxLayout(this);
    m_WebRenderLayout->addWidget(m_BrowserToolBar);
    m_WebRenderLayout->addWidget(m_WebEngine);
    m_WebRenderLayout->setContentsMargins(20, 0, 20, 0);
    setLayout(m_WebRenderLayout);

    }
WebRender::~WebRender(){

    delete m_WebEngine;

    }

}


