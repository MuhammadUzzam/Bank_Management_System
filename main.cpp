#include "mainwindowofbank.h"
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    qApp->setStyleSheet(R"(
        QMessageBox {
            background-color: #ffffff;
            border: 2px solid #2c5aa0;
            border-radius: 10px;
        }
        QMessageBox QLabel {
            color: #1f3b5c;
            font-size: 14px;
            padding: 10px;
            margin: 10px;
        }
        QMessageBox QPushButton {
            background-color: #2d8cf0;
            color: white;
            border: none;
            border-radius: 6px;
            padding: 7px 16px;
            min-width: 90px;
            font-size: 13px;
        }
        QMessageBox QPushButton:hover {
            background-color: #1b6fd1;
        }
        QMessageBox QPushButton:pressed {
            background-color: #144f9c;
        }
        QMessageBox QDialogButtonBox {
            margin-top: 8px;
        }
    )");
    MainWindowofBANK w;
    w.show();
    return a.exec();
}
