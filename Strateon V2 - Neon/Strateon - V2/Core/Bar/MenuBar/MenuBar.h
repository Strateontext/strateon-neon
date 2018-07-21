#ifndef MENUBAR_H
#define MENUBAR_H

#include <QApplication>
#include <QtWidgets>

namespace Strateon {

class MenuBar: public QMenuBar {

public:
        MenuBar(QWidget *parent);

private:
    QMenu* m_menuEdit{};

signals:

    };
}
#endif
