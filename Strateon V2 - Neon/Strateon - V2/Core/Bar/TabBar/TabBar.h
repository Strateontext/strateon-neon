#ifndef TABBAR_H
#define TABBAR_H

#include <QApplication>
#include <QtWidgets>
#include "../../Widgets/TabWidgets/TabWidgets.h"
#include "../../EditorsArea/EditorArea.h"
#include "../ToolBar/ToolBar.h"
#include "../StatusBar/StatusBar.h"
#include "../MenuBar/MenuBar.h"
#include "../TabBar/TabBar.h"

namespace Strateon {

class TabBar: public QTabWidget {

public:
        TabBar();

private:

signals:

    };
}
#endif
