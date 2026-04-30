#ifndef TOOLBAR_H
#define TOOLBAR_H

#include "ui_mainwindow.h"

#include <QString>
#include <QToolBar>

class ToolBar: public QToolBar {
public:
    ToolBar(Ui::MainWindow* frmMainUi, const QString &title, QWidget* parent = nullptr) : QToolBar(title, parent), ui(frmMainUi) { }
    
    /**
    * @brief getDefaultToolBarString
    * @return Returns a string with all default toolbar actions and separators, split by a '|'
    */
    QString getDefaultToolBarString() const;

private:
    Ui::MainWindow* ui;
};

#endif // TOOLBAR_H