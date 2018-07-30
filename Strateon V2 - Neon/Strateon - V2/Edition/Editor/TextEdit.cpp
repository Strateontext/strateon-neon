#include <QApplication>
#include <QtWidgets>
#include "TextEdit.h"

namespace Strateon {

TextEdit::TextEdit() : QPlainTextEdit(){
    setStyleSheet("background: rgba(255, 255, 255, 100); border: hidden;");

    }

}


