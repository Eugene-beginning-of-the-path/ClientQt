#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QTime>
#include <QTabBar>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void sendToServer(QString message);

private slots:
    void on_pushButton_2_clicked();

    void on_lineEdit_returnPressed();

    void on_signIn_clicked();

private:
    Ui::MainWindow *ui;
    QTcpSocket* socket;
    QByteArray data;
    QString nickname;

public slots:
    void slotReadyRead();
    void slotDisconnect();



};
#endif // MAINWINDOW_H
