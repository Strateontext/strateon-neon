#include <QApplication>
#include <QtWidgets>
#include "StatusBar.h"

namespace Strateon {

StatusBar::StatusBar(QWidget *parent) : QStatusBar(parent){

    showMessage(tr("Ready"));
    setStyleSheet("background-color: rgb(49,51,52); color: rgb(196,196,196);");
    }
}
