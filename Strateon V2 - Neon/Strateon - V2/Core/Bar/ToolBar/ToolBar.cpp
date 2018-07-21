#include <QApplication>
#include <QtWidgets>
#include "ToolBar.h"

namespace Strateon {

ToolBar::ToolBar(QWidget *parent) : QToolBar(parent){

    //button = new QPushButton;
    //addWidget(ToolBar::button);
    //button->setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    setMovable(false);
    }

}
