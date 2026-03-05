/********************************************************************************
** Form generated from reading UI file 'fahrzeugeinzel.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FAHRZEUGEINZEL_H
#define UI_FAHRZEUGEINZEL_H

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

class Ui_FahrzeugEinzel
{
public:
    QAction *actionGanz_nach_vorne;
    QAction *actionEinen_nach_vorne;
    QAction *actionEinen_nach_hinten;
    QAction *actionGanz_nach_hinten;
    QAction *actionL_schen;
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *lineEditID;
    QLineEdit *lineEditTyp;
    QLineEdit *lineEditKennzeichen;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *lineEditPreisProTag;
    QLabel *label_3;
    QLineEdit *lineEditBezeichnung;
    QLabel *label_5;
    QToolBar *toolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *FahrzeugEinzel)
    {
        if (FahrzeugEinzel->objectName().isEmpty())
            FahrzeugEinzel->setObjectName("FahrzeugEinzel");
        FahrzeugEinzel->setWindowModality(Qt::WindowModality::ApplicationModal);
        FahrzeugEinzel->resize(295, 208);
        actionGanz_nach_vorne = new QAction(FahrzeugEinzel);
        actionGanz_nach_vorne->setObjectName("actionGanz_nach_vorne");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/symbole/ganzvorne.xpm"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionGanz_nach_vorne->setIcon(icon);
        actionEinen_nach_vorne = new QAction(FahrzeugEinzel);
        actionEinen_nach_vorne->setObjectName("actionEinen_nach_vorne");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/symbole/vorne.xpm"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionEinen_nach_vorne->setIcon(icon1);
        actionEinen_nach_hinten = new QAction(FahrzeugEinzel);
        actionEinen_nach_hinten->setObjectName("actionEinen_nach_hinten");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/symbole/hinten.xpm"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionEinen_nach_hinten->setIcon(icon2);
        actionGanz_nach_hinten = new QAction(FahrzeugEinzel);
        actionGanz_nach_hinten->setObjectName("actionGanz_nach_hinten");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/symbole/ganzhinten.xpm"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionGanz_nach_hinten->setIcon(icon3);
        actionL_schen = new QAction(FahrzeugEinzel);
        actionL_schen->setObjectName("actionL_schen");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/symbole/loeschen.xpm"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actionL_schen->setIcon(icon4);
        centralwidget = new QWidget(FahrzeugEinzel);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 41, 14));
        lineEditID = new QLineEdit(centralwidget);
        lineEditID->setObjectName("lineEditID");
        lineEditID->setEnabled(true);
        lineEditID->setGeometry(QRect(110, 10, 161, 24));
        lineEditID->setReadOnly(true);
        lineEditTyp = new QLineEdit(centralwidget);
        lineEditTyp->setObjectName("lineEditTyp");
        lineEditTyp->setGeometry(QRect(110, 130, 161, 28));
        lineEditKennzeichen = new QLineEdit(centralwidget);
        lineEditKennzeichen->setObjectName("lineEditKennzeichen");
        lineEditKennzeichen->setGeometry(QRect(110, 70, 161, 28));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 81, 18));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 130, 81, 18));
        lineEditPreisProTag = new QLineEdit(centralwidget);
        lineEditPreisProTag->setObjectName("lineEditPreisProTag");
        lineEditPreisProTag->setGeometry(QRect(110, 100, 161, 28));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 40, 81, 18));
        lineEditBezeichnung = new QLineEdit(centralwidget);
        lineEditBezeichnung->setObjectName("lineEditBezeichnung");
        lineEditBezeichnung->setGeometry(QRect(110, 40, 161, 28));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 100, 81, 18));
        FahrzeugEinzel->setCentralWidget(centralwidget);
        toolBar = new QToolBar(FahrzeugEinzel);
        toolBar->setObjectName("toolBar");
        FahrzeugEinzel->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);
        statusBar = new QStatusBar(FahrzeugEinzel);
        statusBar->setObjectName("statusBar");
        FahrzeugEinzel->setStatusBar(statusBar);
        QWidget::setTabOrder(lineEditID, lineEditBezeichnung);
        QWidget::setTabOrder(lineEditBezeichnung, lineEditKennzeichen);
        QWidget::setTabOrder(lineEditKennzeichen, lineEditPreisProTag);
        QWidget::setTabOrder(lineEditPreisProTag, lineEditTyp);

        toolBar->addAction(actionGanz_nach_vorne);
        toolBar->addAction(actionEinen_nach_vorne);
        toolBar->addAction(actionEinen_nach_hinten);
        toolBar->addAction(actionGanz_nach_hinten);
        toolBar->addAction(actionL_schen);

        retranslateUi(FahrzeugEinzel);

        QMetaObject::connectSlotsByName(FahrzeugEinzel);
    } // setupUi

    void retranslateUi(QMainWindow *FahrzeugEinzel)
    {
        FahrzeugEinzel->setWindowTitle(QCoreApplication::translate("FahrzeugEinzel", "Fahrzeug Einzelanzeige", nullptr));
        actionGanz_nach_vorne->setText(QCoreApplication::translate("FahrzeugEinzel", "Ganz nach vorne", nullptr));
        actionEinen_nach_vorne->setText(QCoreApplication::translate("FahrzeugEinzel", "Einen nach vorne", nullptr));
        actionEinen_nach_hinten->setText(QCoreApplication::translate("FahrzeugEinzel", "Einen nach hinten", nullptr));
        actionGanz_nach_hinten->setText(QCoreApplication::translate("FahrzeugEinzel", "Ganz nach hinten", nullptr));
        actionL_schen->setText(QCoreApplication::translate("FahrzeugEinzel", "L\303\266schen", nullptr));
        label->setText(QCoreApplication::translate("FahrzeugEinzel", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("FahrzeugEinzel", "Kennzeichen:", nullptr));
        label_4->setText(QCoreApplication::translate("FahrzeugEinzel", "Typ:", nullptr));
        label_3->setText(QCoreApplication::translate("FahrzeugEinzel", "Bezeichnung:", nullptr));
        label_5->setText(QCoreApplication::translate("FahrzeugEinzel", "Preis pro Tag:", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("FahrzeugEinzel", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FahrzeugEinzel: public Ui_FahrzeugEinzel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FAHRZEUGEINZEL_H
