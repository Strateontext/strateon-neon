#include <QApplication>
#include <QtWidgets>
#include "BrowserToolBar.h"
#include "urlinput.h"
#include "webengine.h"

namespace Strateon {

BrowserToolBar::BrowserToolBar(QWidget *parent) : QWidget(parent){

    m_UrlInput = new UrlInput(this);
    m_ToolBarLayout = new QHBoxLayout(this);
    m_ToolBarLayout->addWidget(m_UrlInput, Qt::AlignCenter);
    setMaximumHeight(30);
    m_ToolBarLayout->setContentsMargins(10, 10, 10, 1);
    setLayout(m_ToolBarLayout);


    }

}


