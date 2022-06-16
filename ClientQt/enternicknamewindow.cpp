#include "enternicknamewindow.h"
#include "ui_enternicknamewindow.h"

EnterNicknameWindow::EnterNicknameWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EnterNicknameWindow)
{
    ui->setupUi(this);
}

EnterNicknameWindow::~EnterNicknameWindow()
{
    delete ui;
}
