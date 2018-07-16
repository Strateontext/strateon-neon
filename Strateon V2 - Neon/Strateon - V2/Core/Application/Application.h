#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>
#include <QtWidgets>
#include "../Window/Window.h"

namespace Strateon {

class Application: public QApplication {

public:
    Application(int argc, char** argv);

private:
    Window *m_windows;

    };
}
#endif