#include <QApplication>
#include <QtWidgets>
#include "LineNumber.h"

namespace Strateon {

TableWidget::TableWidget() : QTableWidget(){

    setFixedWidth(40);
    setStyleSheet("background: white; border: hidden;");

    }

}


