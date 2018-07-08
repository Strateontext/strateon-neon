#include <QApplication>
#include <QtWidgets>
#include "Application.h"
#include "../Window/Window.h"

namespace Strateon {

Application::Application(int argc, char** argv) : QApplication(argc, argv){

    m_windows = new Window();
    m_windows->show();

    }
}
