#include <QApplication>
#include <QtWidgets>
#include "StatusBar.h"
#include "../../Window/Window.h"

namespace Strateon {

StatusBar::StatusBar(QWidget *parent) : QStatusBar(parent){

    setStyleSheet("background-color: rgb(49,51,52); color: rgb(196,196,196);");
    m_Opacity = new QSlider(Qt::Horizontal);
    addWidget(m_Opacity);
    m_Opacity->show();

    connect(m_Opacity, &QSlider::valueChanged, this, &StatusBar::OpacityChangeSlot);
    }

void StatusBar::OpacityChangeSlot(int value){

    emit SignalOpacityChanged(value);
    }
}
