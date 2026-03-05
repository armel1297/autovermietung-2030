#include "kundensuchergebnis.h"
#include "ui_kundensuchergebnis.h"
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>

/*Aufgabe 2: Konstruktor für die Anzeige der Suchergebnisse*/
kundensuchergebnis::kundensuchergebnis(QString nachname,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::kundensuchergebnis)
{
    ui->setupUi(this);

    //den Fenstertitel setzen
    setWindowTitle("Gesuchte Kunden");

    model = new QSqlQueryModel(this);

    QSqlQuery query;
    query.prepare("SELECT * FROM kunden WHERE nachname LIKE :name COLLATE NOCASE");
    query.bindValue(":name", "%" + nachname + "%");
    if (!query.exec())
    {
        qDebug() << "SQL-Fehler:" << query.lastError().text();
    }

    model->setQuery(query);

    ui->tableViewErgebnis->setModel(model);
}

kundensuchergebnis::~kundensuchergebnis()
{
    delete ui;
}
