QT += widgets
QT += webenginewidgets

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
    WebRender/WebRender.cpp \
    WebRender/WebEngine.cpp \
    WebRender/UrlInput.cpp \
    WebRender/BrowserToolBar.cpp \
    FileSystem/filesystem.cpp \
    Edition/Editor/buttonsclass.cpp

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
    WebRender/WebRender.h \
    WebRender/WebEngine.h \
    WebRender/UrlInput.h \
    WebRender/BrowserToolBar.h \
    FileSystem/filesystem.h \
    Edition/Editor/buttonsclass.h

FORMS +=

RESOURCES += \
    Ressources/Ressource.qrc\
