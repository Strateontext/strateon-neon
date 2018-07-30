#include <QApplication>
#include <QtWidgets>
#include "WebEngine.h"
#include <QWebEngineView>
#include "BrowserToolBar.h"

namespace Strateon {

WebEngine::WebEngine(QWidget *parent) : QWebEngineView(parent){


    setStyleSheet("border-radius: 5px;");
    load(QUrl("https://github.com/"));

    }

}


