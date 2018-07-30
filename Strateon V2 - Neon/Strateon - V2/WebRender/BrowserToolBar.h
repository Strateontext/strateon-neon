#ifndef BROWSERTOOLBAR_H
#define BROWSERTOOLBAR_H

#include <QApplication>
#include <QtWidgets>
#include "urlinput.h"


namespace Strateon {



class BrowserToolBar : public QWidget{

public:
    BrowserToolBar(QWidget *parent);

private:

    QHBoxLayout *m_ToolBarLayout;
    UrlInput *m_UrlInput;


    };
}

#endif

