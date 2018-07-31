#ifndef EDITOR_H
#define EDITOR_H

#include <QApplication>
#include <QtWidgets>
#include "TextEdit.h"
#include "LineNumber.h"
#include "buttonsclass.h"

namespace Strateon {



class Editor : public QWidget{

public:
    Editor(QWidget *parent);
    ~Editor();

private:

    QWidget *m_ToolBar;

    QVBoxLayout *m_EditorLayoutPrinc;
    QHBoxLayout *m_EditorLayoutTool;
    QHBoxLayout *m_EditorLayoutWidgets;

    TextEdit *m_Editor;
    TableWidget *m_LineNumber;
    QMessageBox *m_ErrorMessage;

    ButtonEditor *m_ButtonDefault;
    ButtonEditor *m_ButtonBold;
    ButtonEditor *m_ButtonItalic;
    ButtonEditor *m_ButtonUnderline;
    QSlider *m_SliderSize;
    ButtonEditor *m_ButtonColor;

    };
}
#endif
