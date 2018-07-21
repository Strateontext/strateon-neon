#include <QApplication>
#include <QtWidgets>
#include "MenuBar.h"

namespace Strateon {

MenuBar::MenuBar(QWidget *parent) : QMenuBar(parent) {

    m_menuEdit = addMenu("Edit");
        m_menuEdit->addAction("Size");
        m_menuEdit->addAction("Underline");
        m_menuEdit->addAction("Font");

    }
}
