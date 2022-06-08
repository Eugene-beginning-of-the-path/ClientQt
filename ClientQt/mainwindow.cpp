#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket;
    connect(socket, &QTcpSocket::readyRead, this, &MainWindow::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, this, &MainWindow::slotDisconnect);
    //слот slotReadyRead срабатывает, когда срабатывает сигнал readyRead, который исходит от сокета,
    //как только он получает какую то инфу на прием от сервера (sendToClient)
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    socket->connectToHost("127.0.0.1", 2323);
}

void MainWindow::slotReadyRead()
{
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_2);
    if (in.status() == QDataStream::Ok)
    {
        data.clear();
        QString message;
        in >> message;
        ui->textBrowser->append(message);
    }
}

void MainWindow::slotDisconnect()
{
    socket->deleteLater();
}



void MainWindow::on_pushButton_2_clicked()
{

}

