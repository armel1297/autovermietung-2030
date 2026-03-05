/********************************************************************************
** Form generated from reading UI file 'kundensuchergebnis.ui'
**
** Created by: Qt User Interface Compiler version 6.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KUNDENSUCHERGEBNIS_H
#define UI_KUNDENSUCHERGEBNIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_kundensuchergebnis
{
public:
    QGridLayout *gridLayout;
    QTableView *tableViewErgebnis;

    void setupUi(QWidget *kundensuchergebnis)
    {
        if (kundensuchergebnis->objectName().isEmpty())
            kundensuchergebnis->setObjectName("kundensuchergebnis");
        kundensuchergebnis->resize(400, 300);
        gridLayout = new QGridLayout(kundensuchergebnis);
        gridLayout->setObjectName("gridLayout");
        tableViewErgebnis = new QTableView(kundensuchergebnis);
        tableViewErgebnis->setObjectName("tableViewErgebnis");

        gridLayout->addWidget(tableViewErgebnis, 0, 0, 1, 1);


        retranslateUi(kundensuchergebnis);

        QMetaObject::connectSlotsByName(kundensuchergebnis);
    } // setupUi

    void retranslateUi(QWidget *kundensuchergebnis)
    {
        kundensuchergebnis->setWindowTitle(QCoreApplication::translate("kundensuchergebnis", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kundensuchergebnis: public Ui_kundensuchergebnis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KUNDENSUCHERGEBNIS_H
