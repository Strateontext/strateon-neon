#ifndef TEXTEDIT_H
#define TEXTEDIT_H

#include <QApplication>
#include <QtWidgets>

namespace Strateon {



class TextEdit : public QPlainTextEdit{

public:
    TextEdit();
    void SetStyleSheetOpacity(int);

private:

    };
}
#endif
