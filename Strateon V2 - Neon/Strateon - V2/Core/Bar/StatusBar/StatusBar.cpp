#include <QApplication>
#include <QtWidgets>
#include "StatusBar.h"
#include "../../Window/Window.h"

namespace Strateon {

StatusBar::StatusBar(QWidget *parent) : QStatusBar(parent){

    showMessage(tr("Ready"));
    setStyleSheet("background-color: rgb(49,51,52); color: rgb(196,196,196);");
    m_Opacity = new QSlider(Qt::Horizontal);
    //connect(m_Opacity, &QAbstractSlider::valueChanged, this, &Editor::setWindowOpacity);
    addWidget(m_Opacity);
    m_Opacity->show();
    }
}
