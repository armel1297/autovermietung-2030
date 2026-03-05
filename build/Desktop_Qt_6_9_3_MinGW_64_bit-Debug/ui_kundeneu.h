/********************************************************************************
** Form generated from reading UI file 'kundeneu.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KUNDENEU_H
#define UI_KUNDENEU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KundeNeu
{
public:
    QLabel *label_3;
    QLineEdit *lineEditOrt;
    QLineEdit *lineEditPLZ;
    QLineEdit *lineEditName;
    QLabel *label_4;
    QLineEdit *lineEditVorname;
    QLabel *label_5;
    QPushButton *buttonBeenden;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditTelefon;
    QPushButton *buttonOK;
    QLineEdit *lineEditStrasse;

    void setupUi(QWidget *KundeNeu)
    {
        if (KundeNeu->objectName().isEmpty())
            KundeNeu->setObjectName("KundeNeu");
        KundeNeu->setWindowModality(Qt::ApplicationModal);
        KundeNeu->resize(270, 250);
        label_3 = new QLabel(KundeNeu);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 80, 54, 18));
        lineEditOrt = new QLineEdit(KundeNeu);
        lineEditOrt->setObjectName("lineEditOrt");
        lineEditOrt->setGeometry(QRect(90, 130, 161, 28));
        lineEditPLZ = new QLineEdit(KundeNeu);
        lineEditPLZ->setObjectName("lineEditPLZ");
        lineEditPLZ->setGeometry(QRect(90, 100, 161, 28));
        lineEditName = new QLineEdit(KundeNeu);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(90, 10, 161, 28));
        label_4 = new QLabel(KundeNeu);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 110, 54, 18));
        lineEditVorname = new QLineEdit(KundeNeu);
        lineEditVorname->setObjectName("lineEditVorname");
        lineEditVorname->setGeometry(QRect(90, 40, 161, 28));
        label_5 = new QLabel(KundeNeu);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 140, 54, 18));
        buttonBeenden = new QPushButton(KundeNeu);
        buttonBeenden->setObjectName("buttonBeenden");
        buttonBeenden->setGeometry(QRect(160, 210, 95, 27));
        label_6 = new QLabel(KundeNeu);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 170, 54, 18));
        label = new QLabel(KundeNeu);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 54, 18));
        label_2 = new QLabel(KundeNeu);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 50, 54, 18));
        lineEditTelefon = new QLineEdit(KundeNeu);
        lineEditTelefon->setObjectName("lineEditTelefon");
        lineEditTelefon->setGeometry(QRect(90, 160, 161, 28));
        buttonOK = new QPushButton(KundeNeu);
        buttonOK->setObjectName("buttonOK");
        buttonOK->setGeometry(QRect(20, 210, 95, 27));
        lineEditStrasse = new QLineEdit(KundeNeu);
        lineEditStrasse->setObjectName("lineEditStrasse");
        lineEditStrasse->setGeometry(QRect(90, 70, 161, 28));
        QWidget::setTabOrder(lineEditName, lineEditVorname);
        QWidget::setTabOrder(lineEditVorname, lineEditStrasse);
        QWidget::setTabOrder(lineEditStrasse, lineEditPLZ);
        QWidget::setTabOrder(lineEditPLZ, lineEditOrt);
        QWidget::setTabOrder(lineEditOrt, lineEditTelefon);
        QWidget::setTabOrder(lineEditTelefon, buttonOK);
        QWidget::setTabOrder(buttonOK, buttonBeenden);

        retranslateUi(KundeNeu);

        QMetaObject::connectSlotsByName(KundeNeu);
    } // setupUi

    void retranslateUi(QWidget *KundeNeu)
    {
        KundeNeu->setWindowTitle(QCoreApplication::translate("KundeNeu", "Neuer Kunde", nullptr));
        label_3->setText(QCoreApplication::translate("KundeNeu", "Stra\303\237e:", nullptr));
        label_4->setText(QCoreApplication::translate("KundeNeu", "PLZ:", nullptr));
        label_5->setText(QCoreApplication::translate("KundeNeu", "Ort:", nullptr));
        buttonBeenden->setText(QCoreApplication::translate("KundeNeu", "Beenden", nullptr));
        label_6->setText(QCoreApplication::translate("KundeNeu", "Telefon:", nullptr));
        label->setText(QCoreApplication::translate("KundeNeu", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("KundeNeu", "Vorname:", nullptr));
        buttonOK->setText(QCoreApplication::translate("KundeNeu", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KundeNeu: public Ui_KundeNeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KUNDENEU_H
