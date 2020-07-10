#include "login.h"
#include "ui_login.h"
#include <QDebug>

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("C:/Users/User/Desktop/op zadaca/FINAL/KVIZ.db");

if(!mydb.open()){

    ui->label_3->setText("nije konektovano na bazu");

}
else
    ui->label_3->setText("");



}

Login::~Login()
{
    delete ui;
}

QString Login::mwuser="start";
QString Login::mwprez="prez";

void Login::on_pushButton_clicked()
{
    QString korisnik;
    QString password;


    korisnik=ui->lineEdit->text();
    password=ui->lineEdit_2->text();
    QSqlQuery sql;
    QSqlQuery query;
    QSqlQuery query2;

    if(sql.exec("select *from Studenti where Username='"+korisnik+"' AND Password='"+password+"';")){

        int count = 0;
        while(sql.next()){
            count++;

        }


       if(count==1){  msgBox.setText("Username i password su tacni");
           query.exec("select Ime from Studenti where Username='"+korisnik+"'");
           query.next();
           query2.exec("select Prezime from Studenti where Username='"+korisnik+"'");
           query2.next();

           msgBox.exec();
           mwuser=query.value(0).toString();
           mwprez=query2.value(0).toString();
           emit signalformw();
       this->hide();
       }
       if(count<1) {  msgBox.setText("username i password nisu tacni"); msgBox.exec();}

    }









}


