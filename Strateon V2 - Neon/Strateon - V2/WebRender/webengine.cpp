#include <QApplication>
#include <QtWidgets>
#include "WebEngine.h"
#include <QWebEngineView>

namespace Strateon {

WebEngine::WebEngine() : QWebEngineView(){

    load(QUrl("https://www.google.com/"));
    }

}


