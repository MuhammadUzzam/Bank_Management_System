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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signupwindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_3;
    QPushButton *backbtn;
    QLabel *label_4;
    QLineEdit *firstname;
    QLineEdit *confirmpassword;
    QLineEdit *password;
    QLineEdit *email;
    QLineEdit *initialbalance;
    QComboBox *acctype;
    QPushButton *createbtn;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *city;
    QLineEdit *postalcode;
    QLabel *label_10;
    QLineEdit *cnic;
    QLineEdit *street;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *phone;
    QLabel *label_13;
    QLabel *label_15;
    QLabel *label_2;
    QLineEdit *lastname;
    QLabel *label_14;
    QLineEdit *branch;
    QLabel *label_16;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *signupwindow)
    {
        if (signupwindow->objectName().isEmpty())
            signupwindow->setObjectName("signupwindow");
        signupwindow->resize(731, 571);
        centralwidget = new QWidget(signupwindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-4, -9, 741, 561));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background:qlineargradient(x1:1,y1:0,x2:0,y2:1,stop:0#0b2f3b,stop:1#38aacf);\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 10, 711, 511));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font.setPointSize(14);
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:white;\n"
"border-radius:10px;\n"
"}\n"
""));
        backbtn = new QPushButton(centralwidget);
        backbtn->setObjectName("backbtn");
        backbtn->setGeometry(QRect(620, 480, 81, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft Sans Serif")});
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
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
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(320, 20, 161, 21));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:white;\n"
"font: 700 20pt \"Arial\";\n"
"color:BLACK;}"));
        firstname = new QLineEdit(centralwidget);
        firstname->setObjectName("firstname");
        firstname->setGeometry(QRect(30, 140, 321, 41));
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
        confirmpassword = new QLineEdit(centralwidget);
        confirmpassword->setObjectName("confirmpassword");
        confirmpassword->setGeometry(QRect(30, 380, 321, 41));
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
        password = new QLineEdit(centralwidget);
        password->setObjectName("password");
        password->setGeometry(QRect(30, 320, 321, 41));
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
        email = new QLineEdit(centralwidget);
        email->setObjectName("email");
        email->setGeometry(QRect(30, 260, 321, 41));
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
        initialbalance = new QLineEdit(centralwidget);
        initialbalance->setObjectName("initialbalance");
        initialbalance->setGeometry(QRect(380, 80, 321, 41));
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
        acctype = new QComboBox(centralwidget);
        acctype->addItem(QString());
        acctype->addItem(QString());
        acctype->setObjectName("acctype");
        acctype->setGeometry(QRect(30, 80, 321, 41));
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
        createbtn = new QPushButton(centralwidget);
        createbtn->setObjectName("createbtn");
        createbtn->setGeometry(QRect(540, 430, 161, 31));
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
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 150, 21, 21));
        label_5->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_username_icon.png")));
        label_5->setScaledContents(true);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(40, 270, 21, 21));
        label_6->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_email_icon.png")));
        label_6->setScaledContents(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(40, 330, 20, 20));
        label_7->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_password_icon.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(40, 390, 21, 21));
        label_8->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_confirm_pass_icon.png")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(390, 90, 21, 21));
        label_9->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_balance_icon.png")));
        label_9->setScaledContents(true);
        city = new QLineEdit(centralwidget);
        city->setObjectName("city");
        city->setGeometry(QRect(380, 320, 321, 41));
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
        postalcode = new QLineEdit(centralwidget);
        postalcode->setObjectName("postalcode");
        postalcode->setGeometry(QRect(380, 380, 321, 41));
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
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(390, 210, 20, 20));
        label_10->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_password_icon.png")));
        label_10->setScaledContents(true);
        cnic = new QLineEdit(centralwidget);
        cnic->setObjectName("cnic");
        cnic->setGeometry(QRect(380, 140, 321, 41));
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
        street = new QLineEdit(centralwidget);
        street->setObjectName("street");
        street->setGeometry(QRect(380, 260, 321, 41));
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
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(390, 330, 21, 21));
        label_11->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_city_icon.png")));
        label_11->setScaledContents(true);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(390, 390, 21, 21));
        label_12->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_postal_code_icon.png")));
        label_12->setScaledContents(true);
        phone = new QLineEdit(centralwidget);
        phone->setObjectName("phone");
        phone->setGeometry(QRect(380, 200, 321, 41));
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
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(390, 210, 21, 21));
        label_13->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_call_no_icon.png")));
        label_13->setScaledContents(true);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(390, 270, 20, 20));
        label_15->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_15->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_street_icon.png")));
        label_15->setScaledContents(true);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(390, 150, 21, 21));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_cnic_icon.png")));
        label_2->setScaledContents(true);
        lastname = new QLineEdit(centralwidget);
        lastname->setObjectName("lastname");
        lastname->setGeometry(QRect(30, 200, 321, 41));
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
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(40, 210, 21, 21));
        label_14->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_14->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_username_icon.png")));
        label_14->setScaledContents(true);
        branch = new QLineEdit(centralwidget);
        branch->setObjectName("branch");
        branch->setGeometry(QRect(30, 440, 321, 41));
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
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(40, 450, 21, 21));
        label_16->setStyleSheet(QString::fromUtf8("background-color:none;"));
        label_16->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/images/signup_branch_icon.png")));
        label_16->setScaledContents(true);
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
        label->setText(QString());
        label_3->setText(QString());
        backbtn->setText(QCoreApplication::translate("signupwindow", "back", nullptr));
        label_4->setText(QCoreApplication::translate("signupwindow", "SIGN UP", nullptr));
        firstname->setText(QString());
        firstname->setPlaceholderText(QCoreApplication::translate("signupwindow", "First Name", nullptr));
        confirmpassword->setText(QString());
        confirmpassword->setPlaceholderText(QCoreApplication::translate("signupwindow", "Confirm Password", nullptr));
        password->setText(QString());
        password->setPlaceholderText(QCoreApplication::translate("signupwindow", "Password", nullptr));
        email->setText(QString());
        email->setPlaceholderText(QCoreApplication::translate("signupwindow", "Email", nullptr));
        initialbalance->setText(QString());
        initialbalance->setPlaceholderText(QCoreApplication::translate("signupwindow", "Initial Balance", nullptr));
        acctype->setItemText(0, QCoreApplication::translate("signupwindow", "Saving Account", nullptr));
        acctype->setItemText(1, QCoreApplication::translate("signupwindow", "Checking Account", nullptr));

        createbtn->setText(QCoreApplication::translate("signupwindow", "create account", nullptr));
        label_5->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QString());
        city->setText(QString());
        city->setPlaceholderText(QCoreApplication::translate("signupwindow", "City", nullptr));
        postalcode->setText(QString());
        postalcode->setPlaceholderText(QCoreApplication::translate("signupwindow", "Postal Code", nullptr));
        label_10->setText(QString());
        cnic->setText(QString());
        cnic->setPlaceholderText(QCoreApplication::translate("signupwindow", "Cnic", nullptr));
        street->setText(QString());
        street->setPlaceholderText(QCoreApplication::translate("signupwindow", "Street", nullptr));
        label_11->setText(QString());
        label_12->setText(QString());
        phone->setText(QString());
        phone->setPlaceholderText(QCoreApplication::translate("signupwindow", "Phone", nullptr));
        label_13->setText(QString());
        label_15->setText(QString());
        label_2->setText(QString());
        lastname->setText(QString());
        lastname->setPlaceholderText(QCoreApplication::translate("signupwindow", "Last Name", nullptr));
        label_14->setText(QString());
        branch->setText(QString());
        branch->setPlaceholderText(QCoreApplication::translate("signupwindow", "Branch ID", nullptr));
        label_16->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class signupwindow: public Ui_signupwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWINDOW_H
