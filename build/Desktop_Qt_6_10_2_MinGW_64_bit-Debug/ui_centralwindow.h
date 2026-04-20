/********************************************************************************
** Form generated from reading UI file 'centralwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTRALWINDOW_H
#define UI_CENTRALWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Centralwindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *acc_type_label;
    QLabel *balance_label;
    QLabel *email_label;
    QLabel *account_no_label;
    QLabel *username_label;
    QWidget *widget;
    QPushButton *transferbtn;
    QPushButton *transactionbtn;
    QPushButton *depositbtn;
    QPushButton *withdrawbtn;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Centralwindow)
    {
        if (Centralwindow->objectName().isEmpty())
            Centralwindow->setObjectName("Centralwindow");
        Centralwindow->resize(723, 570);
        Centralwindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(Centralwindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:white;\n"
"font: 700 20pt \"Arial\";\n"
"color:#2b547d;\n"
"\n"
"}"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 2);

        acc_type_label = new QLabel(centralwidget);
        acc_type_label->setObjectName("acc_type_label");
        acc_type_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 14pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"}\n"
"QLabel:hover {\n"
"    border: 2px solid rgb(0, 120, 215); /* Light blue */\n"
"	background-color: rgb(240, 248, 255);\n"
"}\n"
"\n"
"/* Change border and background when focused (clicked) */\n"
"QLabel:focus {\n"
"    border: 2px solid rgb(0, 150, 255); /* Brighter blue */\n"
"    background-color: rgb(230, 247, 255); /* Light blue background */\n"
"}\n"
""));

        gridLayout->addWidget(acc_type_label, 4, 1, 1, 2);

        balance_label = new QLabel(centralwidget);
        balance_label->setObjectName("balance_label");
        balance_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 14pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"}\n"
"QLabel:hover {\n"
"    border: 2px solid rgb(0, 120, 215); /* Light blue */\n"
"	background-color: rgb(240, 248, 255);\n"
"}\n"
"\n"
"/* Change border and background when focused (clicked) */\n"
"QLabel:focus {\n"
"    border: 2px solid rgb(0, 150, 255); /* Brighter blue */\n"
"    background-color: rgb(230, 247, 255); /* Light blue background */\n"
"}\n"
""));

        gridLayout->addWidget(balance_label, 5, 1, 1, 2);

        email_label = new QLabel(centralwidget);
        email_label->setObjectName("email_label");
        email_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 14pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"}\n"
"QLabel:hover {\n"
"    border: 2px solid rgb(0, 120, 215); /* Light blue */\n"
"	background-color: rgb(240, 248, 255);\n"
"}\n"
"\n"
"/* Change border and background when focused (clicked) */\n"
"QLabel:focus {\n"
"    border: 2px solid rgb(0, 150, 255); /* Brighter blue */\n"
"    background-color: rgb(230, 247, 255); /* Light blue background */\n"
"}\n"
""));

        gridLayout->addWidget(email_label, 2, 1, 1, 2);

        account_no_label = new QLabel(centralwidget);
        account_no_label->setObjectName("account_no_label");
        account_no_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 14pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"}\n"
"QLabel:hover {\n"
"    border: 2px solid rgb(0, 120, 215); /* Light blue */\n"
"	background-color: rgb(240, 248, 255);\n"
"}\n"
"\n"
"/* Change border and background when focused (clicked) */\n"
"QLabel:focus {\n"
"    border: 2px solid rgb(0, 150, 255); /* Brighter blue */\n"
"    background-color: rgb(230, 247, 255); /* Light blue background */\n"
"}\n"
""));

        gridLayout->addWidget(account_no_label, 3, 1, 1, 2);

        username_label = new QLabel(centralwidget);
        username_label->setObjectName("username_label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        username_label->setFont(font1);
        username_label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font: 14pt \"Microsoft Sans Serif\";\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"}\n"
"QLabel:hover {\n"
"    border: 2px solid rgb(0, 120, 215); /* Light blue */\n"
"	background-color: rgb(240, 248, 255);\n"
"}\n"
"\n"
"/* Change border and background when focused (clicked) */\n"
"QLabel:focus {\n"
"    border: 2px solid rgb(0, 150, 255); /* Brighter blue */\n"
"    background-color: rgb(230, 247, 255); /* Light blue background */\n"
"}\n"
""));

        gridLayout->addWidget(username_label, 1, 1, 1, 2);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        transferbtn = new QPushButton(widget);
        transferbtn->setObjectName("transferbtn");
        transferbtn->setGeometry(QRect(170, 10, 231, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(transferbtn->sizePolicy().hasHeightForWidth());
        transferbtn->setSizePolicy(sizePolicy1);
        transferbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 12pt \"Microsoft Sans Serif\";\n"
"background-color:#2b547d;\n"
"color:white;\n"
"border-radius:20px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(41, 128, 185);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(31, 97, 141);\n"
"}"));
        transactionbtn = new QPushButton(widget);
        transactionbtn->setObjectName("transactionbtn");
        transactionbtn->setGeometry(QRect(170, 90, 231, 41));
        sizePolicy1.setHeightForWidth(transactionbtn->sizePolicy().hasHeightForWidth());
        transactionbtn->setSizePolicy(sizePolicy1);
        transactionbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 12pt \"Microsoft Sans Serif\";\n"
"background-color:#2b547d;\n"
"color:white;\n"
"border-radius:20px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(41, 128, 185);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(31, 97, 141);\n"
"}"));
        depositbtn = new QPushButton(widget);
        depositbtn->setObjectName("depositbtn");
        depositbtn->setGeometry(QRect(10, 10, 151, 41));
        sizePolicy1.setHeightForWidth(depositbtn->sizePolicy().hasHeightForWidth());
        depositbtn->setSizePolicy(sizePolicy1);
        depositbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 12pt \"Microsoft Sans Serif\";\n"
"background-color:#2b547d;\n"
"color:white;\n"
"border-radius:20px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(41, 128, 185);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(31, 97, 141);\n"
"}"));
        withdrawbtn = new QPushButton(widget);
        withdrawbtn->setObjectName("withdrawbtn");
        withdrawbtn->setGeometry(QRect(10, 90, 151, 41));
        sizePolicy1.setHeightForWidth(withdrawbtn->sizePolicy().hasHeightForWidth());
        withdrawbtn->setSizePolicy(sizePolicy1);
        withdrawbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 12pt \"Microsoft Sans Serif\";\n"
"background-color:#2b547d;\n"
"color:white;\n"
"border-radius:20px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(41, 128, 185);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(31, 97, 141);\n"
"}"));

        gridLayout->addWidget(widget, 6, 1, 3, 2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("background-color:#2b547d;"));

        gridLayout->addWidget(label_3, 0, 0, 9, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        Centralwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Centralwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 723, 17));
        Centralwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(Centralwindow);
        statusbar->setObjectName("statusbar");
        Centralwindow->setStatusBar(statusbar);

        retranslateUi(Centralwindow);

        QMetaObject::connectSlotsByName(Centralwindow);
    } // setupUi

    void retranslateUi(QMainWindow *Centralwindow)
    {
        Centralwindow->setWindowTitle(QCoreApplication::translate("Centralwindow", "Account Details", nullptr));
        label->setText(QCoreApplication::translate("Centralwindow", " ACCOUNT DETAILS", nullptr));
        acc_type_label->setText(QCoreApplication::translate("Centralwindow", "Account Type: ", nullptr));
        balance_label->setText(QCoreApplication::translate("Centralwindow", "Balance:", nullptr));
        email_label->setText(QCoreApplication::translate("Centralwindow", "Email: ", nullptr));
        account_no_label->setText(QCoreApplication::translate("Centralwindow", "Account Number: ", nullptr));
        username_label->setText(QCoreApplication::translate("Centralwindow", "Username: ", nullptr));
        transferbtn->setText(QCoreApplication::translate("Centralwindow", "TRANSFER MONEY", nullptr));
        transactionbtn->setText(QCoreApplication::translate("Centralwindow", "TRANSACTION HISTORY", nullptr));
        depositbtn->setText(QCoreApplication::translate("Centralwindow", "DEPOSIT", nullptr));
        withdrawbtn->setText(QCoreApplication::translate("Centralwindow", "WITHDRAW", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Centralwindow: public Ui_Centralwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTRALWINDOW_H
