/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *signIn;
    QPushButton *signUp;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *image;
    QLabel *label;
    QLineEdit *login;
    QLabel *label_2;
    QLineEdit *password;
    QSpacerItem *verticalSpacer;
    QWidget *tab;
    QGridLayout *gridLayout_4;
    QLabel *nickName;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(317, 444);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(317, 444));
        MainWindow->setMaximumSize(QSize(386, 500));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        signIn = new QPushButton(tab_2);
        signIn->setObjectName(QString::fromUtf8("signIn"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(signIn->sizePolicy().hasHeightForWidth());
        signIn->setSizePolicy(sizePolicy1);
        signIn->setMinimumSize(QSize(108, 24));
        signIn->setMaximumSize(QSize(115, 33));

        horizontalLayout->addWidget(signIn);

        signUp = new QPushButton(tab_2);
        signUp->setObjectName(QString::fromUtf8("signUp"));
        sizePolicy1.setHeightForWidth(signUp->sizePolicy().hasHeightForWidth());
        signUp->setSizePolicy(sizePolicy1);
        signUp->setMinimumSize(QSize(108, 25));
        signUp->setMaximumSize(QSize(115, 33));

        horizontalLayout->addWidget(signUp);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 3, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(221, 81));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        image = new QLabel(groupBox_2);
        image->setObjectName(QString::fromUtf8("image"));
        image->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(image->sizePolicy().hasHeightForWidth());
        image->setSizePolicy(sizePolicy2);
        image->setMinimumSize(QSize(64, 64));
        image->setMaximumSize(QSize(117, 117));
        image->setFrameShape(QFrame::NoFrame);
        image->setFrameShadow(QFrame::Plain);
        image->setTextFormat(Qt::AutoText);
        image->setPixmap(QPixmap(QString::fromUtf8(":/resourses/iconOfApp.png")));
        image->setScaledContents(true);
        image->setAlignment(Qt::AlignCenter);
        image->setWordWrap(false);

        gridLayout_3->addWidget(image, 0, 1, 1, 1);

        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);
        label->setMinimumSize(QSize(56, 0));
        label->setFrameShape(QFrame::NoFrame);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label->setWordWrap(false);

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        login = new QLineEdit(groupBox_2);
        login->setObjectName(QString::fromUtf8("login"));
        login->setMaximumSize(QSize(230, 30));

        gridLayout_3->addWidget(login, 1, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_2, 2, 0, 1, 1);

        password = new QLineEdit(groupBox_2);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMaximumSize(QSize(230, 30));

        gridLayout_3->addWidget(password, 2, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);


        gridLayout->addLayout(verticalLayout_2, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 160, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(verticalSpacer, 4, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_4 = new QGridLayout(tab);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        nickName = new QLabel(tab);
        nickName->setObjectName(QString::fromUtf8("nickName"));
        nickName->setMinimumSize(QSize(80, 0));
        QFont font;
        font.setBold(true);
        nickName->setFont(font);
        nickName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(nickName, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setEnabled(false);
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 170, 127);"));

        gridLayout_4->addWidget(pushButton_4, 0, 2, 1, 1);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setMaximumSize(QSize(40, 16777215));

        gridLayout_4->addWidget(pushButton, 0, 0, 1, 1);

        textBrowser = new QTextBrowser(tab);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(textBrowser->sizePolicy().hasHeightForWidth());
        textBrowser->setSizePolicy(sizePolicy4);
        textBrowser->setMinimumSize(QSize(0, 250));
        textBrowser->setMaximumSize(QSize(16777215, 1000));
        textBrowser->setLayoutDirection(Qt::LeftToRight);

        gridLayout_4->addWidget(textBrowser, 2, 0, 2, 3);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy5);
        lineEdit->setMinimumSize(QSize(160, 20));
        lineEdit->setMaximumSize(QSize(16777215, 20));
        lineEdit->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_4->addWidget(lineEdit, 4, 0, 1, 1);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        QSizePolicy sizePolicy6(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy6);
        pushButton_2->setMinimumSize(QSize(45, 25));
        pushButton_2->setMaximumSize(QSize(100, 25));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setUnderline(false);
        font1.setStrikeOut(false);
        font1.setKerning(true);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 127);"));

        gridLayout_4->addWidget(pushButton_2, 4, 2, 1, 1);

        tabWidget->addTab(tab, QString());

        gridLayout_2->addWidget(tabWidget, 0, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        signIn->setText(QCoreApplication::translate("MainWindow", "Sign In", nullptr));
        signUp->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
        groupBox_2->setTitle(QString());
        image->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Login: ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password: ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        nickName->setText(QCoreApplication::translate("MainWindow", "NickName", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Online", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "* * *", nullptr));
        pushButton_2->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
