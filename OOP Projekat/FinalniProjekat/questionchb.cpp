#include "questionchb.h"
#include "ui_questionchb.h"

QuestionCHb::QuestionCHb(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuestionCHb)
{
    ui->setupUi(this);
}

QuestionCHb::~QuestionCHb()
{
    delete ui;
}
QString QuestionCHb::tacodg="start";
QuestionCHb::QuestionCHb(QString strchb):

    ui(new Ui::QuestionCHb)
{
    ui->setupUi(this);

    mydbchb=QSqlDatabase::addDatabase("QSQLITE");
    mydbchb.setDatabaseName("C:/Users/User/Desktop/op zadaca/FINAL/KVIZ.db");

    QSqlQuery qrya;

    if(!mydbchb.open()){
        ui->label->setText("NOT CONNECTED");
    }

    if(qrya.exec("select Pitanje from Pitanja where Odgovor1='"+strchb+"'")){
        qrya.next();
        ui->label->setText(qrya.value(0).toString());

    }
    QSqlQuery odg1;
    QSqlQuery odg2;
    QSqlQuery odg3;
    QSqlQuery odg4;
    QSqlQuery odg5;

    odg1.exec("select Odgovor1 from Pitanja where Odgovor1='"+strchb+"'");
    odg1.next();
    ui->checkBox->setText(odg1.value(0).toString());

    odg2.exec("select Odgovor2 from Pitanja where Odgovor1='"+strchb+"'");
    odg2.next();
    ui->checkBox_2->setText(odg2.value(0).toString());

    odg3.exec("select Odgovor3 from Pitanja where Odgovor1='"+strchb+"'");
    odg3.next();
    ui->checkBox_3->setText(odg3.value(0).toString());

    odg4.exec("select Odgovor4 from Pitanja where Odgovor1='"+strchb+"'");
    odg4.next();
    ui->checkBox_4->setText(odg4.value(0).toString());

    odg5.exec("select Odgovor5 from Pitanja where Odgovor1='"+strchb+"'");
    odg5.next();
    ui->checkBox_5->setText(odg5.value(0).toString());

    tacodg=strchb;






}

void QuestionCHb::on_pushButton_clicked()
{
    QSqlQuery todg;
    QSqlQuery todg2;
    QSqlQuery todg3;
int flag=0;


    todg.exec("select tOdg1 from Pitanja where Odgovor1='"+tacodg+"'");
    todg.next();

    todg2.exec("select tOdg2 from Pitanja where Odgovor1='"+tacodg+"'");
    todg2.next();

    todg3.exec("select tOdg3 from Pitanja where Odgovor1='"+tacodg+"'");
    todg3.next();


    QString chbodg=ui->checkBox->text();
    QString chbodg2=ui->checkBox_2->text();
    QString chbodg3=ui->checkBox_3->text();
    QString chbodg4=ui->checkBox_4->text();
    QString chbodg5=ui->checkBox_5->text();


    if(todg3.value(0)!="")
        {

        if((chbodg==todg.value(0).toString() || chbodg==todg2.value(0).toString() || chbodg==todg3.value(0).toString()) &&
         ui->checkBox->isChecked())
        {
            flag++;
        }

        if((chbodg2==todg.value(0).toString() || chbodg2==todg2.value(0).toString() || chbodg2==todg3.value(0).toString()) &&
         ui->checkBox_2->isChecked())
        {
            flag++;
        }

        if((chbodg3==todg.value(0).toString() || chbodg3==todg2.value(0).toString() || chbodg3==todg3.value(0).toString()) &&
         ui->checkBox_3->isChecked())
        {
            flag++;
        }

        if((chbodg4==todg.value(0).toString() || chbodg4==todg2.value(0).toString() || chbodg4==todg3.value(0).toString()) &&
         ui->checkBox_4->isChecked())
        {
            flag++;
        }

        if((chbodg5==todg.value(0).toString() || chbodg5==todg2.value(0).toString() || chbodg5==todg3.value(0).toString()) &&
         ui->checkBox_5->isChecked())
        {
            flag++;
        }

        if(flag==3){
            emit questionchbsignal();
        }

    }

    else {

        if((chbodg==todg.value(0).toString() || chbodg==todg2.value(0).toString() || chbodg==todg3.value(0).toString()) &&
         ui->checkBox->isChecked())
        {
            flag++;
        }

        if((chbodg2==todg.value(0).toString() || chbodg2==todg2.value(0).toString() || chbodg2==todg3.value(0).toString()) &&
         ui->checkBox_2->isChecked())
        {
            flag++;
        }

        if((chbodg3==todg.value(0).toString() || chbodg3==todg2.value(0).toString() || chbodg3==todg3.value(0).toString()) &&
         ui->checkBox_3->isChecked())
        {
            flag++;
        }

        if((chbodg4==todg.value(0).toString() || chbodg4==todg2.value(0).toString() || chbodg4==todg3.value(0).toString()) &&
         ui->checkBox_4->isChecked())
        {
            flag++;
        }

        if((chbodg5==todg.value(0).toString() || chbodg5==todg2.value(0).toString() || chbodg5==todg3.value(0).toString()) &&
         ui->checkBox_5->isChecked())
        {
            flag++;
        }



        if(flag>1){
            emit questionchbsignal();
        }


    }


    this->close();



}
