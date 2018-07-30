#include <QApplication>
#include <QtWidgets>
#include "UrlInput.h"

namespace Strateon {

UrlInput::UrlInput(QWidget *parent) : QLineEdit(parent){

    setStyleSheet("border-radius: 5px;");
    setMinimumHeight(20);
    }

}


