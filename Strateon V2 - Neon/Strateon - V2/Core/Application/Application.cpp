#include <QApplication>
#include <QtWidgets>
#include "Application.h"
#include "../Window/Window.h"

namespace Strateon {

Application::Application(int argc, char** argv) : QApplication(argc, argv){

    m_window = new Window();
    m_window->show();

    }
Application::~Application(){

    delete m_window;

}


QString readFile(const QString& filename)
{
    QFile file{filename};

    if (!filename.isEmpty() && file.open(QFile::ReadOnly)) {
        const QByteArray array{file.readAll()};

        file.close();

        return QString::fromUtf8(array);
    }

    return QString();

    }
}
