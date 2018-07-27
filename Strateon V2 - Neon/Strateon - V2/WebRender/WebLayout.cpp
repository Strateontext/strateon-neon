#include <QApplication>
#include <QtWidgets>
#include "WebLayout.h"
#include "WebRender/WebEngine.h"

namespace Strateon {

WebLayout::WebLayout() : QHBoxLayout(){

    m_WebEngine = new WebEngine();
    addWidget(m_WebEngine);
    //setContentsMargins(0, 0, 0, 0);

    }
WebLayout::~WebLayout(){

    delete m_WebEngine;

    }
}


