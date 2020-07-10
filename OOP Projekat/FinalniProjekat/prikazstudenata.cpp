#include "prikazstudenata.h"
#include "ui_prikazstudenata.h"

Prikazstudenata::Prikazstudenata(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Prikazstudenata)
{
    ui->setupUi(this);

    QSqlQueryModel *model = new QSqlQueryModel();
    openbase();
    QSqlQuery *qry = new QSqlQuery(prdb);
    qry->prepare("select Ime,Prezime,Bodovi,Datum from Studenti");
    qry->exec();
    model->setQuery(*qry);
    ui->tableView->setModel(model);


}

Prikazstudenata::~Prikazstudenata()
{
    delete ui;
}
