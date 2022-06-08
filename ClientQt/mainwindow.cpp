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

void MainWindow::sendToServer(QString message)
{
    data.clear();
    QDataStream in(&data, QDataStream::WriteOnly);
    in.setVersion(QDataStream::Qt_6_2);
    in << message;
    socket->write(data);
    ui->lineEdit->clear();
}


void MainWindow::on_pushButton_clicked()
{
    socket->connectToHost("127.0.0.1", 2323);
    //sendToServer("Message from Client to Server");
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
    else
    {
        //Error in log
    }
}

void MainWindow::slotDisconnect()
{
    socket->deleteLater();
}



void MainWindow::on_pushButton_2_clicked()
{
    sendToServer(ui->lineEdit->text());
}


void MainWindow::on_lineEdit_returnPressed()
{
    sendToServer(ui->lineEdit->text());
}

