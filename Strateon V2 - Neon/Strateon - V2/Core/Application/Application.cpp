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
