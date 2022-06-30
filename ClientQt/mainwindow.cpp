#include "mainwindow.h"
#include "ui_mainwindow.h"

//int MainWindow::counter = 0;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tabWidget->tabBar()->hide(); //чтобы спрятать tab bar'ы у виджета
    ui->tabWidget->setCurrentIndex(0);
    socket = new QTcpSocket;
    connect(socket, &QTcpSocket::readyRead, this, &MainWindow::slotReadyRead);
    connect(socket, &QTcpSocket::disconnected, this, &MainWindow::slotDisconnect);
    //слот slotReadyRead срабатывает, когда срабатывает сигнал readyRead, который исходит от сокета,
    //как только он получает какую то инфу на прием от сервера (sendToClient)

    //while (socket->waitForConnected(30000))
    socket->connectToHost("127.0.0.1", 2323);
    //ui->textBrowser->append(QTime::currentTime().toString());
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

    //вот здесь должна быть запись в БД

    message = nickname + ": " + message;
    out << message;
    socket->write(data);

}

void MainWindow::slotReadyRead()
{
    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_2);
    if (in.status() == QDataStream::Ok)
    {
        data.clear();
        QString message;
        QTime time = QTime::currentTime();

        in >> time >> message;
        qDebug() << message;
        //in >> message;
        ui->textBrowser->append("\n" + time.toString() + "\n" + message);
        //ui->textBrowser->append(time.toString() + " - " + nickname + '\n' + message);
        //ui->textBrowser->append(time.toString() + ' ' + message);
        //ui->textBrowser->append((QString)' ');
    }
    else
    {
        //Error in log
    }
}

void MainWindow::slotDisconnect()
{
    qDebug() << QTime::currentTime().toString();
    socket->deleteLater();
}

void MainWindow::on_pushButton_2_clicked()
{
    if (ui->lineEdit->text() == ' ' || ui->lineEdit->text().size() == 0)
    {
        ui->lineEdit->clear();
        return;
    }
    sendToServer(ui->lineEdit->text());
    ui->lineEdit->clear();
}

void MainWindow::on_lineEdit_returnPressed()
{
    if (ui->lineEdit->text() == ' ' || ui->lineEdit->text().isEmpty() == true)
    {
        ui->lineEdit->clear();
        return;
    }
    sendToServer(ui->lineEdit->text());
    ui->lineEdit->clear();
}


void MainWindow::on_signIn_clicked()
{
    if (!ui->login->text().isEmpty())
        ui->nickName->setText(ui->login->text());

    nickname = ui->login->text();
    ui->tabWidget->setCurrentIndex(1);
}

//тест коммита на ветке x
