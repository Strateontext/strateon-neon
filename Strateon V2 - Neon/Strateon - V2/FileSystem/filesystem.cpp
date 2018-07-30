#include <QApplication>
#include <QtWidgets>
#include "filesystem.h"

namespace Strateon {

TreeFileBrowser::TreeFileBrowser(QWidget *parent) : QTreeView(parent){

    QString mPath = "Desktop/";

    m_Model = new QFileSystemModel;
    m_Model->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs | QDir::Files);
    m_Model->setRootPath(mPath);

    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    verticalScrollBar()->hide();
    verticalScrollBar()->resize(0, 0);
    setHorizontalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
    horizontalScrollBar()->hide();
    horizontalScrollBar()->resize(0, 0);


    setModel(m_Model);
    hideColumn(1);
    hideColumn(2);
    hideColumn(3);
    header()->hide();


    }



}


