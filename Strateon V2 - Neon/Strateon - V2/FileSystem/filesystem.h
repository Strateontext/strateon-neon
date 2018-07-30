#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <QApplication>
#include <QtWidgets>

namespace Strateon {



class TreeFileBrowser : public QTreeView{

public:
    TreeFileBrowser(QWidget *parent);

private:
    QFileSystemModel *m_Model;


    };
}

#endif

