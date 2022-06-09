#include "mainwindow.h"
#include "ui_mainwindow.h"

//int MainWindow::counter = 0;

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

    socket->connectToHost("127.0.0.1", 2323);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::sendToServer(QString message)
{
    data.clear();
    QDataStream out(&data, QDataStream::WriteOnly);
    out.setVersion(QDataStream::Qt_6_2);

    out << QTime::currentTime() << message;
    socket->write(data);
    ui->lineEdit->clear();
}

void MainWindow::slotReadyRead()
{
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_2);
    if (in.status() == QDataStream::Ok)
    {
        data.clear();
        QString message;
        QTime time;

        in >> time >> message;
//        ui->textBrowser->append(time.toString());
//        ui->textBrowser->append("\n");
//        ui->textBrowser->append("111");
        ui->textBrowser->append(time.toString() + '\n' + message);
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

