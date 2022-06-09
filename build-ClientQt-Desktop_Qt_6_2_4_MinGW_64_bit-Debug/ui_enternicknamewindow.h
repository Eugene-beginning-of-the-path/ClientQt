/********************************************************************************
** Form generated from reading UI file 'enternicknamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTERNICKNAMEWINDOW_H
#define UI_ENTERNICKNAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_EnterNicknameWindow
{
public:

    void setupUi(QDialog *EnterNicknameWindow)
    {
        if (EnterNicknameWindow->objectName().isEmpty())
            EnterNicknameWindow->setObjectName(QString::fromUtf8("EnterNicknameWindow"));
        EnterNicknameWindow->resize(270, 159);

        retranslateUi(EnterNicknameWindow);

        QMetaObject::connectSlotsByName(EnterNicknameWindow);
    } // setupUi

    void retranslateUi(QDialog *EnterNicknameWindow)
    {
        EnterNicknameWindow->setWindowTitle(QCoreApplication::translate("EnterNicknameWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnterNicknameWindow: public Ui_EnterNicknameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTERNICKNAMEWINDOW_H
