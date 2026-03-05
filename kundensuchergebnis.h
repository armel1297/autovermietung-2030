#ifndef KUNDENSUCHERGEBNIS_H
#define KUNDENSUCHERGEBNIS_H

#include <QWidget>
#include <QSqlQueryModel>

namespace Ui {
class kundensuchergebnis;
}

class kundensuchergebnis : public QWidget
{
    Q_OBJECT

public:
    explicit kundensuchergebnis(QString nachname, QWidget *parent = nullptr);
    ~kundensuchergebnis();

private:
    Ui::kundensuchergebnis *ui;
    //Aufgabe 2: Für Model
    QSqlQueryModel *model;
};

#endif // KUNDENSUCHERGEBNIS_H
