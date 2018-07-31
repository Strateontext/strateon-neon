#include <QApplication>
#include <QtWidgets>
#include "buttonsclass.h"

namespace Strateon {

ButtonEditor::ButtonEditor(QWidget *parent) : QPushButton(parent){


    setStyleSheet("background: white; border: 1px solid grey; border-radius: 4px; padding: 3px; margin: 10px ");
    setIconSize(QSize(25, 25));
    }
}
