QT += widgets


SOURCES += \
    Main.cpp\
    Core/Application/Application.cpp\
    Core/EditorsArea/EditorArea.cpp\
    Core/Bar/MenuBar/MenuBar.cpp\
    Core/Bar/StatusBar/StatusBar.cpp\
    Core/Bar/ToolBar/ToolBar.cpp\
    Core/Window/Window.cpp\
    Core/Widgets/TabWidgets/TabWidgets.cpp\
    Edition/Editor/Editor.cpp\
    Edition/Editor/TextEdit.cpp \
    Edition/Editor/LineNumber.cpp \
    Edition/Editor/Layout.cpp

HEADERS += \
    Core/Application/Application.h\
    Core/EditorsArea/EditorArea.h\
    Core/Bar/MenuBar/MenuBar.h\
    Core/Bar/StatusBar/StatusBar.h\
    Core/Bar/ToolBar/ToolBar.h\
    Core/Window/Window.h\
    Core/Widgets/TabWidgets/TabWidgets.h\
    Edition/Editor/Editor.h\
    Edition/Editor/TextEdit.h \
    Edition/Editor/LineNumber.h \
    Edition/Editor/Layout.h

FORMS +=

RESOURCES += \
    Ressources/Ressource.qrc\
