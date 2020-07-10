#include "question.h"
#include "ui_question.h"

Question::Question(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Question)
{
    ui->setupUi(this);


}

Question::~Question()
{
    delete ui;
}
QString Question::odgs="st";
int Question::statbar=0;
Question::Question(QString stri) :

    ui(new Ui::Question)
{


    ui->setupUi(this);
    mydba=QSqlDatabase::addDatabase("QSQLITE");
    mydba.setDatabaseName("C:/Users/User/Desktop/op zadaca/FINAL/KVIZ.db");
    if(!mydba.open()){
        ui->label_2->setText("NOT CONNECTED");



    }
    else{
        ui->label_2->setText(" ");
    }
    QSqlQuery qrya;

    if(qrya.exec("select Pitanje from Pitanja where Odgovor1='"+stri+"'")){
        qrya.next();
        ui->label->setText(qrya.value(0).toString());

    }
    QSqlQuery odg1;
    QSqlQuery odg2;
    QSqlQuery odg3;
    QSqlQuery odg4;
    QSqlQuery odg5;

    odg1.exec("select Odgovor1 from Pitanja where Odgovor1='"+stri+"'");
    odg1.next();
    ui->radioButton->setText(odg1.value(0).toString());

    odg2.exec("select Odgovor2 from Pitanja where Odgovor1='"+stri+"'");
    odg2.next();
    ui->radioButton_2->setText(odg2.value(0).toString());

    odg3.exec("select Odgovor3 from Pitanja where Odgovor1='"+stri+"'");
    odg3.next();
    ui->radioButton_3->setText(odg3.value(0).toString());

    odg4.exec("select Odgovor4 from Pitanja where Odgovor1='"+stri+"'");
    odg4.next();
    ui->radioButton_4->setText(odg4.value(0).toString());

    odg5.exec("select Odgovor5 from Pitanja where Odgovor1='"+stri+"'");
    odg5.next();
    ui->radioButton_5->setText(odg5.value(0).toString());







odgs=stri;










}

void Question::on_pushButton_clicked()
{
    QString g1=ui->radioButton->text();
    QString g2=ui->radioButton_2->text();
    QString g3=ui->radioButton_3->text();
    QString g4=ui->radioButton_4->text();
    QString g5=ui->radioButton_5->text();


    QSqlQuery todg;
    todg.exec("select tOdg1 from Pitanja where Odgovor1='"+odgs+"'");
    todg.next();
    QString tacan=todg.value(0).toString();
//ui->radioButton->isChecked();

if(g1==tacan && ui->radioButton->isChecked())
    {

    emit progresssbar();

}
if(g2==tacan && ui->radioButton_2->isChecked())
    {
   emit progresssbar();
}
if(g3==tacan && ui->radioButton_3->isChecked())
    {
    emit progresssbar();
}
if(g4==tacan && ui->radioButton_4->isChecked())
    {
   emit progresssbar();
}
if(g5==tacan && ui->radioButton_5->isChecked())
    {
    emit progresssbar();
}


this->close();








}
