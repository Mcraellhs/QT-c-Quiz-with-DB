#include "questioncb.h"
#include "ui_questioncb.h"

questioncb::questioncb(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::questioncb)
{
    ui->setupUi(this);

}

questioncb::~questioncb()
{
    delete ui;
}
QString questioncb::tacodg="startna";
questioncb::questioncb(QString strcb) :

    ui(new Ui::questioncb)
{
    ui->setupUi(this);
    mydbcb=QSqlDatabase::addDatabase("QSQLITE");
    mydbcb.setDatabaseName("C:/Users/User/Desktop/op zadaca/FINAL/KVIZ.db");

    QSqlQuery qrya;

    if(!mydbcb.open()){
        ui->label->setText("NOT CONNECTED");
    }

    if(qrya.exec("select Pitanje from Pitanja where Odgovor1='"+strcb+"'")){
        qrya.next();
        ui->label->setText(qrya.value(0).toString());

    }
    QSqlQuery odg1;
    QSqlQuery odg2;
    QSqlQuery odg3;
    QSqlQuery odg4;
    QSqlQuery odg5;

    odg1.exec("select Odgovor1 from Pitanja where Odgovor1='"+strcb+"'");
    odg1.next();
    ui->comboBox->addItem(odg1.value(0).toString());

    odg2.exec("select Odgovor2 from Pitanja where Odgovor1='"+strcb+"'");
    odg2.next();
    ui->comboBox->addItem(odg2.value(0).toString());

    odg3.exec("select Odgovor3 from Pitanja where Odgovor1='"+strcb+"'");
    odg3.next();
    ui->comboBox->addItem(odg3.value(0).toString());

    odg4.exec("select Odgovor4 from Pitanja where Odgovor1='"+strcb+"'");
    odg4.next();
    ui->comboBox->addItem(odg4.value(0).toString());

    odg5.exec("select Odgovor5 from Pitanja where Odgovor1='"+strcb+"'");
    odg5.next();
    ui->comboBox->addItem(odg5.value(0).toString());


    tacodg=strcb;

}

void questioncb::on_pushButton_clicked()
{
    QSqlQuery todg;


    todg.exec("select tOdg1 from Pitanja where Odgovor1='"+tacodg+"'");
    todg.next();
    QString cbodg;

    cbodg=ui->comboBox->currentText();


    if(cbodg==todg.value(0).toString()){

        emit questioncbsignal();

    }

  this->close();

}
