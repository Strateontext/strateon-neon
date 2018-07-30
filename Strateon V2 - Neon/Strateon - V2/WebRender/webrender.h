#ifndef WEBRENDER_H
#define WEBRENDER_H

#include <QApplication>
#include <QtWidgets>
#include "UrlInput.h"
#include "BrowserToolBar.h"
#include "webengine.h"

namespace Strateon {



class WebRender : public QWidget{

public:
    WebRender();
    ~WebRender();

private:

    BrowserToolBar *m_BrowserToolBar;
    QVBoxLayout *m_WebRenderLayout;
    WebEngine *m_WebEngine;

    };
}
#endif
