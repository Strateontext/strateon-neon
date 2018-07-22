#include <QApplication>
#include <QtWidgets>
#include "LineNumber.h"

namespace Strateon {

TableWidget::TableWidget(QWidget *parent) : QTableWidget(parent){

    setFixedWidth(40);
    setStyleSheet("background: white; border: hidden;");

    }

}


