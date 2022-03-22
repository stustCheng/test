#include "qt.h"
#include <qmessagebox.h>


qt::qt(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void qt::trigger()
{
    QMessageBox::warning(NULL, "Y", "YUYUY");
}
