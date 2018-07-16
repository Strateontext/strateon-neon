QT += widgets
QT += gui

SOURCES += \
    Main.cpp\
    Core/Application/Application.cpp\
    Core/EditorsArea/EditorArea.cpp\
    Core/Bar/MenuBar/MenuBar.cpp\
    Core/Bar/StatusBar/StatusBar.cpp\
    Core/Bar/ToolBar/ToolBar.cpp\
    Core/Window/Window.cpp\
    Core/Bar/TabBar/TabBar.cpp \
    Core/Widgets/TabWidgets/TabWidgets.cpp\
    Edition/Editor/Editor.cpp\

HEADERS += \
    Core/Application/Application.h\
    Core/EditorsArea/EditorArea.h\
    Core/Bar/MenuBar/MenuBar.h\
    Core/Bar/StatusBar/StatusBar.h\
    Core/Bar/ToolBar/ToolBar.h\
    Core/Window/Window.h\
    Core/Bar/TabBar/TabBar.h \
    Core/Widgets/TabWidgets/TabWidgets.h\
    Edition/Editor/Editor.h\


FORMS +=

RESOURCES += \
    Ressources/Ressource.qrc\
