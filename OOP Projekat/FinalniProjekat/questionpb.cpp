#include "questionpb.h"
#include "ui_questionpb.h"

QuestionPB::QuestionPB(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuestionPB)
{
    ui->setupUi(this);
}

QuestionPB::~QuestionPB()
{
    delete ui;
}
QString QuestionPB::tacodg="start";
QuestionPB::QuestionPB(QString qpb) :

    ui(new Ui::QuestionPB)
{
    ui->setupUi(this);

    dbpb=QSqlDatabase::addDatabase("QSQLITE");
    dbpb.setDatabaseName("C:/Users/User/Desktop/op zadaca/FINAL/KVIZ.db");

    QSqlQuery qrya;

    if(!dbpb.open()){
        ui->label->setText("NOT CONNECTED");
    }

    if(qrya.exec("select Pitanje from Pitanja where Odgovor1='"+qpb+"'")){
        qrya.next();
        ui->label->setText(qrya.value(0).toString());

    }
    QSqlQuery odg1;
    QSqlQuery odg2;
    QSqlQuery odg3;
    QSqlQuery odg4;
    QSqlQuery odg5;


    odg1.exec("select Odgovor1 from Pitanja where Odgovor1='"+qpb+"'");
    odg1.next();
    ui->pushButton->setText(odg1.value(0).toString());

    odg2.exec("select Odgovor2 from Pitanja where Odgovor1='"+qpb+"'");
    odg2.next();
    ui->pushButton_2->setText(odg2.value(0).toString());

    odg3.exec("select Odgovor3 from Pitanja where Odgovor1='"+qpb+"'");
    odg3.next();
    ui->pushButton_3->setText(odg3.value(0).toString());

    odg4.exec("select Odgovor4 from Pitanja where Odgovor1='"+qpb+"'");
    odg4.next();
    ui->pushButton_4->setText(odg4.value(0).toString());

    odg5.exec("select Odgovor5 from Pitanja where Odgovor1='"+qpb+"'");
    odg5.next();
    ui->pushButton_5->setText(odg5.value(0).toString());

    tacodg=qpb;

}

void QuestionPB::on_pushButton_6_clicked()
{
   // nothing
}

void QuestionPB::on_pushButton_clicked()
{
    QString g1=ui->pushButton->text();
    QSqlQuery qr1;
    qr1.exec("select tOdg1 from Pitanja where Odgovor1='"+tacodg+"'");
    qr1.next();

    if(g1==qr1.value(0).toString()){
        emit qpubsignal();
    }
    this->close();
}

void QuestionPB::on_pushButton_2_clicked()
{
    QString g1=ui->pushButton_2->text();
    QSqlQuery qr1;
    qr1.exec("select tOdg1 from Pitanja where Odgovor1='"+tacodg+"'");
    qr1.next();

    if(g1==qr1.value(0).toString()){
        emit qpubsignal();
    }
    this->close();
}

void QuestionPB::on_pushButton_3_clicked()
{
    QString g1=ui->pushButton_3->text();
    QSqlQuery qr1;
    qr1.exec("select tOdg1 from Pitanja where Odgovor1='"+tacodg+"'");
    qr1.next();

    if(g1==qr1.value(0).toString()){
        emit qpubsignal();
    }
    this->close();
}

void QuestionPB::on_pushButton_4_clicked()
{
    QString g1=ui->pushButton_4->text();
    QSqlQuery qr1;
    qr1.exec("select tOdg1 from Pitanja where Odgovor1='"+tacodg+"'");
    qr1.next();

    if(g1==qr1.value(0).toString()){
        emit qpubsignal();
    }
    this->close();
}

void QuestionPB::on_pushButton_5_clicked()
{
    QString g1=ui->pushButton_5->text();
    QSqlQuery qr1;
    qr1.exec("select tOdg1 from Pitanja where Odgovor1='"+tacodg+"'");
    qr1.next();

    if(g1==qr1.value(0).toString()){
        emit qpubsignal();
    }
    this->close();
}
