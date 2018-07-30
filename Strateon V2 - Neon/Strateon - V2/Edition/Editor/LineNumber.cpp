#include <QApplication>
#include <QtWidgets>
#include "LineNumber.h"

namespace Strateon {

TableWidget::TableWidget() : QTableWidget(){

    setFixedWidth(40);
    setStyleSheet("background: rgba(255, 255, 255, 100); border: hidden;");

    }

}


