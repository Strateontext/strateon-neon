#include <QApplication>
#include <QtWidgets>
#include "Core/Application/Application.h"
#include "Core/Window/Window.h"


int main(int argc, char** argv)
{
    Strateon::Application app(argc, argv);
    return app.exec();
}
