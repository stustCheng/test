#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qt.h"

class qt : public QMainWindow
{
    Q_OBJECT

public:
    qt(QWidget *parent = Q_NULLPTR);

private:
    Ui::qtClass ui;


private slots:
    void trigger(void);
};
