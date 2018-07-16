#include <QApplication>
#include <QtWidgets>
#include "StatusBar.h"

namespace Strateon {

StatusBar::StatusBar(){

    showMessage(tr("Ready"));
    setStyleSheet("background-color: rgb(35,35,36); color: rgb(196,196,196);");
    }
}
