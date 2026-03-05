/********************************************************************************
** Form generated from reading UI file 'kundeeinzel.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KUNDEEINZEL_H
#define UI_KUNDEEINZEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KundeEinzel
{
public:
    QAction *actionGanz_nach_vorne;
    QAction *actionEinen_nach_vorne;
    QAction *actionEinen_nach_hinten;
    QAction *actionGanz_nach_hinten;
    QAction *actionL_schen;
    QWidget *centralwidget;
    QLineEdit *lineEditName;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label;
    QLineEdit *lineEditPLZ;
    QLineEdit *lineEditStrasse;
    QLineEdit *lineEditID;
    QLineEdit *lineEditOrt;
    QLineEdit *lineEditVorname;
    QLabel *label_6;
    QLabel *label_2;
    QLineEdit *lineEditTelefon;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KundeEinzel)
    {
        if (KundeEinzel->objectName().isEmpty())
            KundeEinzel->setObjectName("KundeEinzel");
        KundeEinzel->setWindowModality(Qt::WindowModality::ApplicationModal);
        KundeEinzel->resize(218, 266);
        actionGanz_nach_vorne = new QAction(KundeEinzel);
        actionGanz_nach_vorne->setObjectName("actionGanz_nach_vorne");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/symbole/ganzvorne.xpm"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionGanz_nach_vorne->setIcon(icon);
        actionEinen_nach_vorne = new QAction(KundeEinzel);
        actionEinen_nach_vorne->setObjectName("actionEinen_nach_vorne");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/symbole/vorne.xpm"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionEinen_nach_vorne->setIcon(icon1);
        actionEinen_nach_hinten = new QAction(KundeEinzel);
        actionEinen_nach_hinten->setObjectName("actionEinen_nach_hinten");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/symbole/hinten.xpm"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionEinen_nach_hinten->setIcon(icon2);
        actionGanz_nach_hinten = new QAction(KundeEinzel);
        actionGanz_nach_hinten->setObjectName("actionGanz_nach_hinten");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/symbole/ganzhinten.xpm"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionGanz_nach_hinten->setIcon(icon3);
        actionL_schen = new QAction(KundeEinzel);
        actionL_schen->setObjectName("actionL_schen");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/symbole/loeschen.xpm"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionL_schen->setIcon(icon4);
        centralwidget = new QWidget(KundeEinzel);
        centralwidget->setObjectName("centralwidget");
        lineEditName = new QLineEdit(centralwidget);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setGeometry(QRect(80, 40, 113, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 64, 41, 20));
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 190, 41, 14));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 130, 41, 14));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 100, 41, 14));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 41, 14));
        lineEditPLZ = new QLineEdit(centralwidget);
        lineEditPLZ->setObjectName("lineEditPLZ");
        lineEditPLZ->setGeometry(QRect(80, 130, 113, 24));
        lineEditStrasse = new QLineEdit(centralwidget);
        lineEditStrasse->setObjectName("lineEditStrasse");
        lineEditStrasse->setGeometry(QRect(80, 100, 113, 24));
        lineEditID = new QLineEdit(centralwidget);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setEnabled(true);
        lineEditID->setGeometry(QRect(80, 10, 113, 24));
        lineEditID->setDragEnabled(false);
        lineEditID->setReadOnly(true);
        lineEditOrt = new QLineEdit(centralwidget);
        lineEditOrt->setObjectName("lineEditOrt");
        lineEditOrt->setGeometry(QRect(80, 160, 113, 24));
        lineEditVorname = new QLineEdit(centralwidget);
        lineEditVorname->setObjectName("lineEditVorname");
        lineEditVorname->setGeometry(QRect(80, 70, 113, 24));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 160, 41, 14));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 41, 14));
        lineEditTelefon = new QLineEdit(centralwidget);
        lineEditTelefon->setObjectName("lineEditTelefon");
        lineEditTelefon->setGeometry(QRect(80, 190, 113, 24));
        KundeEinzel->setCentralWidget(centralwidget);
        toolBar = new QToolBar(KundeEinzel);
        toolBar->setObjectName("toolBar");
        KundeEinzel->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(KundeEinzel);
        statusBar->setObjectName("statusBar");
        KundeEinzel->setStatusBar(statusBar);

        toolBar->addAction(actionGanz_nach_vorne);
        toolBar->addAction(actionEinen_nach_vorne);
        toolBar->addAction(actionEinen_nach_hinten);
        toolBar->addAction(actionGanz_nach_hinten);
        toolBar->addAction(actionL_schen);

        retranslateUi(KundeEinzel);

        QMetaObject::connectSlotsByName(KundeEinzel);
    } // setupUi

    void retranslateUi(QMainWindow *KundeEinzel)
    {
        KundeEinzel->setWindowTitle(QCoreApplication::translate("KundeEinzel", "Einzelanzeige Kunden", nullptr));
        actionGanz_nach_vorne->setText(QCoreApplication::translate("KundeEinzel", "Ganz nach vorne", nullptr));
        actionEinen_nach_vorne->setText(QCoreApplication::translate("KundeEinzel", "Einen nach vorne", nullptr));
        actionEinen_nach_hinten->setText(QCoreApplication::translate("KundeEinzel", "Einen nach hinten", nullptr));
        actionGanz_nach_hinten->setText(QCoreApplication::translate("KundeEinzel", "Ganz nach hinten", nullptr));
        actionL_schen->setText(QCoreApplication::translate("KundeEinzel", "L\303\266schen", nullptr));
        label_3->setText(QCoreApplication::translate("KundeEinzel", "Vorname", nullptr));
        label_7->setText(QCoreApplication::translate("KundeEinzel", "Telefon", nullptr));
        label_5->setText(QCoreApplication::translate("KundeEinzel", "PLZ", nullptr));
        label_4->setText(QCoreApplication::translate("KundeEinzel", "Strasse", nullptr));
        label->setText(QCoreApplication::translate("KundeEinzel", "ID", nullptr));
        label_6->setText(QCoreApplication::translate("KundeEinzel", "Ort", nullptr));
        label_2->setText(QCoreApplication::translate("KundeEinzel", "Name", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("KundeEinzel", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KundeEinzel: public Ui_KundeEinzel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KUNDEEINZEL_H
