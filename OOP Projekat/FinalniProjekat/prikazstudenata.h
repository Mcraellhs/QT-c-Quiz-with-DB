#ifndef PRIKAZSTUDENATA_H
#define PRIKAZSTUDENATA_H

#include <QDialog>
#include <QtSql>
#include <QtSql/QSqlDatabase>

namespace Ui {
class Prikazstudenata;
}

class Prikazstudenata : public QDialog
{
    Q_OBJECT

public:
    explicit Prikazstudenata(QWidget *parent = nullptr);
    ~Prikazstudenata();
    bool openbase(){

        prdb=QSqlDatabase::addDatabase("QSQLITE");
        prdb.setDatabaseName("C:/Users/User/Desktop/op zadaca/FINAL/KVIZ.db");

    if(!prdb.open()){

        return false;

    }
    else
        return true;

    }

private:
    Ui::Prikazstudenata *ui;
    QSqlDatabase prdb;

};

#endif // PRIKAZSTUDENATA_H
