/********************************************************************************
** Form generated from reading UI file 'signupwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWINDOW_H
#define UI_SIGNUPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signupwindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLineEdit *postalcode;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QLineEdit *initialbalance;
    QLineEdit *firstname;
    QLineEdit *city;
    QLineEdit *email;
    QComboBox *acctype;
    QLineEdit *street;
    QLineEdit *confirmpassword;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lastname;
    QLineEdit *phone;
    QLineEdit *cnic;
    QLineEdit *password;
    QLineEdit *branch;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget;
    QPushButton *createbtn;
    QPushButton *backbtn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signupwindow)
    {
        if (signupwindow->objectName().isEmpty())
            signupwindow->setObjectName("signupwindow");
        signupwindow->resize(731, 571);
        centralwidget = new QWidget(signupwindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color:white;\n"
""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:white;\n"
"font: 700 20pt \"Arial\";\n"
"color:BLACK;}\n"
""));

        gridLayout->addWidget(label_4, 0, 1, 1, 3);

        postalcode = new QLineEdit(centralwidget);
        postalcode->setObjectName("postalcode");
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font.setPointSize(14);
        postalcode->setFont(font);
        postalcode->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"padding-left:45px;\n"
"border-radius:6px;\n"
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

        gridLayout->addWidget(postalcode, 6, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 8, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        initialbalance = new QLineEdit(centralwidget);
        initialbalance->setObjectName("initialbalance");
        initialbalance->setFont(font);
        initialbalance->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"padding-left:45px;\n"
"border-radius:6px;\n"
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

        gridLayout->addWidget(initialbalance, 1, 3, 1, 1);

        firstname = new QLineEdit(centralwidget);
        firstname->setObjectName("firstname");
        firstname->setFont(font);
        firstname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
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

        gridLayout->addWidget(firstname, 2, 0, 1, 1);

        city = new QLineEdit(centralwidget);
        city->setObjectName("city");
        city->setFont(font);
        city->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
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
        city->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(city, 5, 3, 1, 1);

        email = new QLineEdit(centralwidget);
        email->setObjectName("email");
        email->setFont(font);
        email->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
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

        gridLayout->addWidget(email, 4, 0, 1, 1);

        acctype = new QComboBox(centralwidget);
        acctype->addItem(QString());
        acctype->addItem(QString());
        acctype->setObjectName("acctype");
        acctype->setFont(font);
        acctype->setAutoFillBackground(false);
        acctype->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    background: #1e1e1e;\n"
"    border: 2px solid #2c5aa0;\n"
"    border-radius: 6px;\n"
"    padding: 5px 8px;\n"
"    color: #ffffff;\n"
"}\n"
"\n"
"QComboBox:hover {\n"
"    border-color: #1b6fd1;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    border: 0;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView {\n"
"    background: #1e1e1e;\n"
"    border: 1px solid #2c5aa0;\n"
"    selection-background-color: #2d8cf0;\n"
"    selection-color: white;\n"
"    color: white;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QComboBox QAbstractItemView::item {\n"
"    padding: 6px 10px;\n"
"}"));

        gridLayout->addWidget(acctype, 1, 0, 1, 1);

        street = new QLineEdit(centralwidget);
        street->setObjectName("street");
        street->setFont(font);
        street->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
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
        street->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(street, 4, 3, 1, 1);

        confirmpassword = new QLineEdit(centralwidget);
        confirmpassword->setObjectName("confirmpassword");
        confirmpassword->setFont(font);
        confirmpassword->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
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
        confirmpassword->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(confirmpassword, 6, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 2, 1, 1, 1);

        lastname = new QLineEdit(centralwidget);
        lastname->setObjectName("lastname");
        lastname->setFont(font);
        lastname->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
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

        gridLayout->addWidget(lastname, 3, 0, 1, 1);

        phone = new QLineEdit(centralwidget);
        phone->setObjectName("phone");
        phone->setFont(font);
        phone->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
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

        gridLayout->addWidget(phone, 3, 3, 1, 1);

        cnic = new QLineEdit(centralwidget);
        cnic->setObjectName("cnic");
        cnic->setFont(font);
        cnic->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
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

        gridLayout->addWidget(cnic, 2, 3, 1, 1);

        password = new QLineEdit(centralwidget);
        password->setObjectName("password");
        password->setFont(font);
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
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
        password->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(password, 5, 0, 1, 1);

        branch = new QLineEdit(centralwidget);
        branch->setObjectName("branch");
        branch->setFont(font);
        branch->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"color:rgb(43, 84, 125);\n"
"border:2px solid rgb(43, 84, 125);\n"
"padding:5px;\n"
"border-radius:6px;\n"
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
        branch->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(branch, 7, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer_2, 0, 0, 1, 1);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        createbtn = new QPushButton(widget);
        createbtn->setObjectName("createbtn");
        createbtn->setGeometry(QRect(0, 0, 161, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        createbtn->setFont(font1);
        createbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 10pt \"Microsoft Sans Serif\";\n"
"background-color:BLACK;\n"
"color:white;\n"
"border-radius:14px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:grey;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:grey;\n"
"}"));
        backbtn = new QPushButton(widget);
        backbtn->setObjectName("backbtn");
        backbtn->setGeometry(QRect(40, 50, 81, 31));
        backbtn->setFont(font1);
        backbtn->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 10pt \"Microsoft Sans Serif\";\n"
"background-color:#3499db;\n"
"color:white;\n"
"border-radius:14px;\n"
"padding:7px 14px;\n"
"}\n"
"QPushButton:hover{\n"
"background-color:rgb(41, 128, 185);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(31, 97, 141);\n"
"}"));

        gridLayout->addWidget(widget, 7, 3, 2, 1);


        verticalLayout->addLayout(gridLayout);

        signupwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(signupwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 731, 17));
        signupwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(signupwindow);
        statusbar->setObjectName("statusbar");
        signupwindow->setStatusBar(statusbar);

        retranslateUi(signupwindow);

        QMetaObject::connectSlotsByName(signupwindow);
    } // setupUi

    void retranslateUi(QMainWindow *signupwindow)
    {
        signupwindow->setWindowTitle(QCoreApplication::translate("signupwindow", "Signup ", nullptr));
        label_4->setText(QCoreApplication::translate("signupwindow", "SIGN UP", nullptr));
        postalcode->setText(QString());
        postalcode->setPlaceholderText(QCoreApplication::translate("signupwindow", "Postal Code", nullptr));
        initialbalance->setText(QString());
        initialbalance->setPlaceholderText(QCoreApplication::translate("signupwindow", "Initial Balance", nullptr));
        firstname->setText(QString());
        firstname->setPlaceholderText(QCoreApplication::translate("signupwindow", "First Name", nullptr));
        city->setText(QString());
        city->setPlaceholderText(QCoreApplication::translate("signupwindow", "City", nullptr));
        email->setText(QString());
        email->setPlaceholderText(QCoreApplication::translate("signupwindow", "Email", nullptr));
        acctype->setItemText(0, QCoreApplication::translate("signupwindow", "Saving Account", nullptr));
        acctype->setItemText(1, QCoreApplication::translate("signupwindow", "Checking Account", nullptr));

        street->setText(QString());
        street->setPlaceholderText(QCoreApplication::translate("signupwindow", "Street", nullptr));
        confirmpassword->setText(QString());
        confirmpassword->setPlaceholderText(QCoreApplication::translate("signupwindow", "Confirm Password", nullptr));
        lastname->setText(QString());
        lastname->setPlaceholderText(QCoreApplication::translate("signupwindow", "Last Name", nullptr));
        phone->setText(QString());
        phone->setPlaceholderText(QCoreApplication::translate("signupwindow", "Phone", nullptr));
        cnic->setText(QString());
        cnic->setPlaceholderText(QCoreApplication::translate("signupwindow", "CNIC", nullptr));
        password->setText(QString());
        password->setPlaceholderText(QCoreApplication::translate("signupwindow", "Password", nullptr));
        branch->setText(QString());
        branch->setPlaceholderText(QCoreApplication::translate("signupwindow", "Branch ID", nullptr));
        createbtn->setText(QCoreApplication::translate("signupwindow", "CREATE ACCOUNT", nullptr));
        backbtn->setText(QCoreApplication::translate("signupwindow", "BACK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signupwindow: public Ui_signupwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
