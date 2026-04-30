
#include "include/toolbar.h"
#include <QStringList>

QString ToolBar::getDefaultToolBarString() const
{
    QStringList list;

    list << ui->actionNew->objectName();
    list << ui->actionOpen->objectName();
    list << ui->actionSave->objectName();
    list << ui->actionSave_All->objectName();
    list << ui->actionClose->objectName();
    list << ui->actionClose_All->objectName();
    list << "Separator";
    list << ui->actionCut->objectName();
    list << ui->actionCopy->objectName();
    list << ui->actionPaste->objectName();
    list << "Separator";
    list << ui->actionUndo->objectName();
    list << ui->actionRedo->objectName();
    list << "Separator";
    list << ui->actionZoom_In->objectName();
    list << ui->actionZoom_Out->objectName();
    list << "Separator";
    list << ui->actionWord_wrap->objectName();
    list << ui->actionShow_All_Characters->objectName();

    return list.join('|');
}
