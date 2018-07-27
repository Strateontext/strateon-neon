#ifndef WEBLAYOUT_H
#define WEBLAYOUT_H

#include <QApplication>
#include <QtWidgets>
#include "WebRender/WebEngine.h"

namespace Strateon {

class WebLayout : public QHBoxLayout{

public:
    WebLayout();


private: 

    WebEngine *m_WebEngine;

    };
}
#endif
