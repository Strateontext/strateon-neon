#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QApplication>
#include <QtWidgets>

namespace Strateon {

class ToolBar: public QToolBar {

public:
        ToolBar(QWidget *parent);

private:
        QPushButton * button;

signals:

    };
}
#endif
