#ifndef STATUSBAR_H
#define STATUSBAR_H

#include <QApplication>
#include <QtWidgets>



namespace Strateon {



class StatusBar: public QStatusBar {

Q_OBJECT

public:
    StatusBar(QWidget *parent);

private:
    QSlider *m_Opacity;

public slots:
    void OpacityChangeSlot(int value);

signals:
    void SignalOpacityChanged(int);

    };

}
#endif
