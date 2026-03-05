#include "mainwindow.h"
#include "ui_mainwindow.h"
//die Header-Datei für das Kundenformular
#include "kundeneu.h"
//die Header-Datei für die Kundenliste
#include "kundeliste.h"
//die Header-Datei für die Einzelanzeige der Kunden
#include "kundeeinzel.h"
//die Header-Datei für das Fahrzeugformular
#include "fahrzeugneu.h"
//die Header-Datei für die Fahrzeugliste
#include "fahrzeugliste.h"
//die Header-Datei für die Einzelanzeige der Fahrzeuge
#include "fahrzeugeinzel.h"
#include <QMessageBox>
//die Header-Datei für die Dialog
#include <QInputDialog>
//die Header-Datei für die Kunden Suche
#include "kundensuchergebnis.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dbVerbunden = dbVerbinden();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//die Methode stellt die Verbindung zur Datenbank her
bool MainWindow::dbVerbinden()
{
    bool gelungen = true;
    //die Verbindung zur Datenbank herstellen
    datenbank = QSqlDatabase::addDatabase("QSQLITE");
    datenbank.setDatabaseName("auto2030.db");
    //konnte die Datenbank geöffnet werden?
    //wenn nicht, geben wir eine Meldung aus
    if (datenbank.open() == false)
    {
        //den Fehler beschaffen wir uns im Klartext
        QString fehler = datenbank.lastError().text();
        QMessageBox::critical(this, "Fehler", "Die Datenbank konnte nicht geöffnet werden.\nGrund: " + fehler);
        gelungen = false;
    }
    return gelungen;
}

//die Slots
void MainWindow::on_buttonListenAnzeigeKunde_clicked()
{
    //wenn eine Verbindung zu Datenbank besteht
    if (dbVerbunden == true)
    {
        //den Dialog anzeigen
        KundeListe *formKundeListe = new KundeListe();
        formKundeListe->show();
    }
}

void MainWindow::on_buttonEinzelAnzeigeKunde_clicked()
{
    //wenn eine Verbindung zu Datenbank besteht
    if (dbVerbunden == true)
    {
        //das Formular anzeigen
        KundeEinzel *formKundeEinzel = new KundeEinzel();
        formKundeEinzel->show();
    }
}

void MainWindow::on_buttonNeuerEintragKunde_clicked()
{
    //wenn eine Verbindung zu Datenbank besteht
    if (dbVerbunden == true)
    {
        //das Formular anzeigen
        KundeNeu *formKundeNeu = new KundeNeu();
        formKundeNeu->show();
    }
}

void MainWindow::on_buttonListenAnzeigeFahrzeug_clicked()
{
    //wenn eine Verbindung zu Datenbank besteht
    if (dbVerbunden == true)
    {
        //den Dialog anzeigen
        FahrzeugListe *formFahrzeugListe = new FahrzeugListe();
        formFahrzeugListe->show();
    }
}

void MainWindow::on_buttonEinzelAnzeigeFahrzeug_clicked()
{
    //wenn eine Verbindung zu Datenbank besteht
    if (dbVerbunden == true)
    {
        //den Dialog anzeigen
        FahrzeugEinzel *formFahrzeugEinzel = new FahrzeugEinzel();
        formFahrzeugEinzel->show();
    }
}

void MainWindow::on_buttonNeuerEintragFahrzeug_clicked()
{
    //wenn eine Verbindung zu Datenbank besteht
    if (dbVerbunden == true)
    {
        //den Dialog anzeigen
        FahrzeugNeu *formFahrzeugNeu = new FahrzeugNeu();
        formFahrzeugNeu->show();
    }
}

//die überschriebene Methode beim Schließen des Fensters
void MainWindow::closeEvent(QCloseEvent *)
{
    //die Datenbankverbindung schließen
    datenbank.close();
}

//Aufgabe 2 : Suchfunktion für Kunden nach Nachname
void MainWindow::on_buttonSucheKunde_clicked()
{
    if (dbVerbunden == false)
        return;

    // Eingabedialog für den Nachnamen
    QString nachname = QInputDialog::getText(
        this,
        "Kundensuche",
        "Nachname eingeben:");

    if (nachname.isEmpty())
        return;
    // Ergebnisformular öffnen
    kundensuchergebnis *ergebnis = new kundensuchergebnis(nachname);
    ergebnis->show();

}

