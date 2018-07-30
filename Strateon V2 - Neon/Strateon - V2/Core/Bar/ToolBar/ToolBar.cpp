#include <QApplication>
#include <QtWidgets>
#include "ToolBar.h"

namespace Strateon {

ToolBar::ToolBar(QWidget *parent) : QToolBar(parent){

    button = new QPushButton();
    addWidget(ToolBar::button);
    button->setStyleSheet("background: #e7e5e7; border: 1px solid grey; border-radius: 7px; padding: 3px; margin: 10px ");
    button->setFixedSize(50,50);
    setStyleSheet("background: rgb(49,51,52); border: none; padding: 2px;");
    setMinimumHeight(40);
    setMovable(false);
    }

}
