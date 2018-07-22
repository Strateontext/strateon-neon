#include <QApplication>
#include <QtWidgets>
#include "TextEdit.h"

namespace Strateon {

TextEdit::TextEdit(QWidget *parent) : QTextEdit(parent){
    setStyleSheet("background: white; border: hidden;");

    }

}


