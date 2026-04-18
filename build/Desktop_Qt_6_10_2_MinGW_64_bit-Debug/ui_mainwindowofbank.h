/********************************************************************************
** Form generated from reading UI file 'mainwindowofbank.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOWOFBANK_H
#define UI_MAINWINDOWOFBANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowofBANK
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLineEdit *gmail_input;
    QLabel *label_2;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QLineEdit *password_input;
    QWidget *widget_2;
    QPushButton *signup_btn;
    QWidget *widget_3;
    QPushButton *login_btn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindowofBANK)
    {
        if (MainWindowofBANK->objectName().isEmpty())
            MainWindowofBANK->setObjectName("MainWindowofBANK");
        MainWindowofBANK->resize(720, 562);
        MainWindowofBANK->setMinimumSize(QSize(720, 562));
        MainWindowofBANK->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:#2b547d;\n"
"}\n"
"QMessageBox QLabel {\n"
"    background-color: transparent; /* Makes text background transparent */\n"
"    color: black; /* Text color */\n"
"}"));
        centralwidget = new QWidget(MainWindowofBANK);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:white;"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(false);
        font.setItalic(false);
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:rgb(255, 255, 255);\n"
"	font: 12pt \"Arial\";\n"
"\n"
"color:#2b547d;}"));

        gridLayout->addWidget(label_7, 1, 2, 1, 1);

        gmail_input = new QLineEdit(centralwidget);
        gmail_input->setObjectName("gmail_input");
        QFont font1;
        font1.setPointSize(14);
        gmail_input->setFont(font1);
        gmail_input->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"padding-left:45px;\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid rgb(29, 61, 92);\n"
"background-color:rgb(226, 230, 235);\n"
"}\n"
"QLineEdit:focus{\n"
"border:2px solid rgb(0, 0, 119);\n"
"background-color:white;\n"
"outline:none;\n"
"}"));

        gridLayout->addWidget(gmail_input, 5, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setMinimumSize(QSize(300, 0));
        label_2->setStyleSheet(QString::fromUtf8("background-color:#3499db;"));

        gridLayout->addWidget(label_2, 0, 0, 13, 2);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:white;\n"
"font: 700 20pt \"Arial\";\n"
"color:#2b547d;}"));

        gridLayout->addWidget(label_6, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 3, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        gridLayout->addItem(verticalSpacer, 6, 2, 1, 1);

        password_input = new QLineEdit(centralwidget);
        password_input->setObjectName("password_input");
        password_input->setFont(font1);
        password_input->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"padding-left:45px;\n"
"}\n"
"QLineEdit:hover{\n"
"border:2px solid rgb(29, 61, 92);\n"
"background-color:rgb(226, 230, 235);\n"
"}\n"
"QLineEdit:focus{\n"
"border:2px solid rgb(0, 0, 119);\n"
"background-color:white;\n"
"outline:none;\n"
"}"));
        password_input->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(password_input, 7, 2, 1, 2);

        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        signup_btn = new QPushButton(widget_2);
        signup_btn->setObjectName("signup_btn");
        signup_btn->setGeometry(QRect(0, 0, 111, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        signup_btn->setFont(font2);
        signup_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#3499db;\n"
"color:white;\n"
"border-radius:15px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(41, 128, 185);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(31, 97, 141);\n"
"}"));

        gridLayout->addWidget(widget_2, 2, 2, 1, 1);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        login_btn = new QPushButton(widget_3);
        login_btn->setObjectName("login_btn");
        login_btn->setGeometry(QRect(0, 0, 101, 31));
        login_btn->setFont(font2);
        login_btn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color:#2b547d;\n"
"color:white;\n"
"border-radius:15px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(41, 128, 185);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(31, 97, 141);\n"
"}"));

        gridLayout->addWidget(widget_3, 9, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout);

        MainWindowofBANK->setCentralWidget(centralwidget);
        label_6->raise();
        label_7->raise();
        password_input->raise();
        gmail_input->raise();
        widget_2->raise();
        widget_3->raise();
        label_2->raise();
        menubar = new QMenuBar(MainWindowofBANK);
        menubar->setObjectName("menubar");
        menubar->setEnabled(false);
        menubar->setGeometry(QRect(0, 0, 720, 17));
        MainWindowofBANK->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindowofBANK);
        statusbar->setObjectName("statusbar");
        statusbar->setEnabled(false);
        QSizePolicy sizePolicy1(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statusbar->sizePolicy().hasHeightForWidth());
        statusbar->setSizePolicy(sizePolicy1);
        statusbar->setMaximumSize(QSize(0, 16777215));
        statusbar->setAcceptDrops(true);
        MainWindowofBANK->setStatusBar(statusbar);

        retranslateUi(MainWindowofBANK);

        QMetaObject::connectSlotsByName(MainWindowofBANK);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowofBANK)
    {
        MainWindowofBANK->setWindowTitle(QCoreApplication::translate("MainWindowofBANK", "Login ", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindowofBANK", "Don't Have an account yet?", nullptr));
        gmail_input->setPlaceholderText(QCoreApplication::translate("MainWindowofBANK", "Email", nullptr));
        label_2->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindowofBANK", "Welcome to Islamic Bank", nullptr));
        password_input->setPlaceholderText(QCoreApplication::translate("MainWindowofBANK", "Password", nullptr));
        signup_btn->setText(QCoreApplication::translate("MainWindowofBANK", "SIGN UP", nullptr));
        login_btn->setText(QCoreApplication::translate("MainWindowofBANK", "LOG IN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindowofBANK: public Ui_MainWindowofBANK {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOWOFBANK_H
