/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QPushButton *buttonListenAnzeigeKunde;
    QPushButton *buttonEinzelAnzeigeKunde;
    QPushButton *buttonNeuerEintragKunde;
    QGroupBox *groupBox_2;
    QPushButton *buttonListenAnzeigeFahrzeug;
    QPushButton *buttonEinzelAnzeigeFahrzeug;
    QPushButton *buttonNeuerEintragFahrzeug;
    QPushButton *buttonSucheKunde;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(316, 250);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 30, 120, 121));
        buttonListenAnzeigeKunde = new QPushButton(groupBox);
        buttonListenAnzeigeKunde->setObjectName("buttonListenAnzeigeKunde");
        buttonListenAnzeigeKunde->setGeometry(QRect(10, 20, 101, 23));
        buttonEinzelAnzeigeKunde = new QPushButton(groupBox);
        buttonEinzelAnzeigeKunde->setObjectName("buttonEinzelAnzeigeKunde");
        buttonEinzelAnzeigeKunde->setGeometry(QRect(10, 50, 101, 23));
        buttonNeuerEintragKunde = new QPushButton(groupBox);
        buttonNeuerEintragKunde->setObjectName("buttonNeuerEintragKunde");
        buttonNeuerEintragKunde->setGeometry(QRect(10, 80, 101, 23));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(170, 30, 120, 121));
        buttonListenAnzeigeFahrzeug = new QPushButton(groupBox_2);
        buttonListenAnzeigeFahrzeug->setObjectName("buttonListenAnzeigeFahrzeug");
        buttonListenAnzeigeFahrzeug->setGeometry(QRect(10, 20, 101, 23));
        buttonEinzelAnzeigeFahrzeug = new QPushButton(groupBox_2);
        buttonEinzelAnzeigeFahrzeug->setObjectName("buttonEinzelAnzeigeFahrzeug");
        buttonEinzelAnzeigeFahrzeug->setGeometry(QRect(10, 50, 101, 23));
        buttonNeuerEintragFahrzeug = new QPushButton(groupBox_2);
        buttonNeuerEintragFahrzeug->setObjectName("buttonNeuerEintragFahrzeug");
        buttonNeuerEintragFahrzeug->setGeometry(QRect(10, 80, 101, 23));
        buttonSucheKunde = new QPushButton(centralwidget);
        buttonSucheKunde->setObjectName("buttonSucheKunde");
        buttonSucheKunde->setGeometry(QRect(90, 170, 131, 21));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Autovermietung 2030", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Kunden", nullptr));
        buttonListenAnzeigeKunde->setText(QCoreApplication::translate("MainWindow", "Listenanzeige", nullptr));
        buttonEinzelAnzeigeKunde->setText(QCoreApplication::translate("MainWindow", "Einzelanzeige", nullptr));
        buttonNeuerEintragKunde->setText(QCoreApplication::translate("MainWindow", "Neuer Eintrag", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Fahrzeuge", nullptr));
        buttonListenAnzeigeFahrzeug->setText(QCoreApplication::translate("MainWindow", "Listenanzeige", nullptr));
        buttonEinzelAnzeigeFahrzeug->setText(QCoreApplication::translate("MainWindow", "Einzelanzeige", nullptr));
        buttonNeuerEintragFahrzeug->setText(QCoreApplication::translate("MainWindow", "Neuer Eintrag", nullptr));
        buttonSucheKunde->setText(QCoreApplication::translate("MainWindow", "Kunden Suchen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
