/********************************************************************************
** Form generated from reading UI file 'fahrzeugneu.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAHRZEUGNEU_H
#define UI_FAHRZEUGNEU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FahrzeugNeu
{
public:
    QLineEdit *lineEditPreisProTag;
    QLineEdit *lineEditBezeichnung;
    QLabel *label_4;
    QPushButton *buttonOK;
    QLabel *label_3;
    QLineEdit *lineEditKennzeichen;
    QLabel *label_2;
    QLineEdit *lineEditTyp;
    QPushButton *buttonBeenden;
    QLabel *label;

    void setupUi(QWidget *FahrzeugNeu)
    {
        if (FahrzeugNeu->objectName().isEmpty())
            FahrzeugNeu->setObjectName("FahrzeugNeu");
        FahrzeugNeu->setWindowModality(Qt::ApplicationModal);
        FahrzeugNeu->resize(303, 183);
        lineEditPreisProTag = new QLineEdit(FahrzeugNeu);
        lineEditPreisProTag->setObjectName("lineEditPreisProTag");
        lineEditPreisProTag->setGeometry(QRect(120, 70, 161, 28));
        lineEditBezeichnung = new QLineEdit(FahrzeugNeu);
        lineEditBezeichnung->setObjectName("lineEditBezeichnung");
        lineEditBezeichnung->setGeometry(QRect(120, 10, 161, 28));
        label_4 = new QLabel(FahrzeugNeu);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 110, 81, 18));
        buttonOK = new QPushButton(FahrzeugNeu);
        buttonOK->setObjectName("buttonOK");
        buttonOK->setGeometry(QRect(20, 140, 95, 27));
        label_3 = new QLabel(FahrzeugNeu);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 80, 81, 18));
        lineEditKennzeichen = new QLineEdit(FahrzeugNeu);
        lineEditKennzeichen->setObjectName("lineEditKennzeichen");
        lineEditKennzeichen->setGeometry(QRect(120, 40, 161, 28));
        label_2 = new QLabel(FahrzeugNeu);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 50, 81, 18));
        lineEditTyp = new QLineEdit(FahrzeugNeu);
        lineEditTyp->setObjectName("lineEditTyp");
        lineEditTyp->setGeometry(QRect(120, 100, 161, 28));
        buttonBeenden = new QPushButton(FahrzeugNeu);
        buttonBeenden->setObjectName("buttonBeenden");
        buttonBeenden->setGeometry(QRect(180, 140, 95, 27));
        label = new QLabel(FahrzeugNeu);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 81, 18));
        QWidget::setTabOrder(lineEditBezeichnung, lineEditKennzeichen);
        QWidget::setTabOrder(lineEditKennzeichen, lineEditPreisProTag);
        QWidget::setTabOrder(lineEditPreisProTag, lineEditTyp);
        QWidget::setTabOrder(lineEditTyp, buttonOK);
        QWidget::setTabOrder(buttonOK, buttonBeenden);

        retranslateUi(FahrzeugNeu);

        QMetaObject::connectSlotsByName(FahrzeugNeu);
    } // setupUi

    void retranslateUi(QWidget *FahrzeugNeu)
    {
        FahrzeugNeu->setWindowTitle(QCoreApplication::translate("FahrzeugNeu", "Neues Fahrzeug", nullptr));
        label_4->setText(QCoreApplication::translate("FahrzeugNeu", "Typ:", nullptr));
        buttonOK->setText(QCoreApplication::translate("FahrzeugNeu", "OK", nullptr));
        label_3->setText(QCoreApplication::translate("FahrzeugNeu", "Preis pro Tag:", nullptr));
        label_2->setText(QCoreApplication::translate("FahrzeugNeu", "Kennzeichen:", nullptr));
        buttonBeenden->setText(QCoreApplication::translate("FahrzeugNeu", "Beenden", nullptr));
        label->setText(QCoreApplication::translate("FahrzeugNeu", "Bezeichnung:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FahrzeugNeu: public Ui_FahrzeugNeu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAHRZEUGNEU_H
