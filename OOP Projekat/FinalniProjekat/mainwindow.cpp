#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
ui->progressBar->setValue(0);
mwb=QSqlDatabase::addDatabase("QSQLITE");
mwb.setDatabaseName("C:/Users/User/Desktop/op zadaca/FINAL/KVIZ.db");
if(!mwb.open()){
 ui->statusbar->showMessage("Not connected");
 qDebug()<<"BAZA NIJE OTVORENA";
}
else
    ui->statusbar->showMessage("Konektovan na bazu podataka KVIZ");

}

MainWindow::~MainWindow()
{
    delete ui;
}
int MainWindow::value=0;
int MainWindow::brojac=0;

void MainWindow::loginslot()
{

   // ui->label->setText("Connected");

Login *loga;
ui->statusbar->showMessage(loga->mwuser+" "+loga->mwprez);


    ui->pushButton_21->setEnabled(true);
     ui->pushButton_22->setEnabled(true);
      ui->pushButton_23->setEnabled(true);
       ui->pushButton_24->setEnabled(true);
        ui->pushButton_25->setEnabled(true);
         ui->pushButton_26->setEnabled(true);
          ui->pushButton_27->setEnabled(true);
           ui->pushButton_28->setEnabled(true);
            ui->pushButton_29->setEnabled(true);
             ui->pushButton_30->setEnabled(true);
             ui->pushButton_31->setEnabled(true);
              ui->pushButton_32->setEnabled(true);
               ui->pushButton_33->setEnabled(true);
                ui->pushButton_34->setEnabled(true);
                 ui->pushButton_35->setEnabled(true);
                  ui->pushButton_36->setEnabled(true);
                   ui->pushButton_37->setEnabled(true);
                    ui->pushButton_38->setEnabled(true);
                     ui->pushButton_39->setEnabled(true);
                       ui->pushButton_40->setEnabled(true);
                     ui->pushButton_41->setEnabled(true);
                      ui->pushButton_42->setEnabled(true);
                       ui->pushButton_43->setEnabled(true);
                        ui->pushButton_44->setEnabled(true);
                         ui->pushButton_45->setEnabled(true);
                         ui->progressBar->setValue(0);
                         value=0;
                         brojac=0;

}

void MainWindow::progresssbarslot()
{
    value+=4;

    ui->progressBar->setValue(value);

}


void MainWindow::on_actionLog_triggered()
{

    //this->hide(); memory leak


Login *log = new Login();

connect(log,SIGNAL(signalformw()),this,SLOT(loginslot()));

log->show();




}

void MainWindow::on_pushButton_27_clicked()
{
    Question *quest= new Question("Khabib");

    quest->show();
    connect(quest,SIGNAL(progresssbar()),this,SLOT(progresssbarslot()));
    ui->pushButton_27->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_30_clicked()
{
    Question *quest= new Question("Jones");

    quest->show();
    connect(quest,SIGNAL(progresssbar()),this,SLOT(progresssbarslot()));
    ui->pushButton_30->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_29_clicked()
{
    Question *quest= new Question("Usman");

    quest->show();
    connect(quest,SIGNAL(progresssbar()),this,SLOT(progresssbarslot()));
    ui->pushButton_29->setEnabled(false);
    brojac++;

}


void MainWindow::on_pushButton_26_clicked()
{
    Question *quest= new Question("Fury");

    quest->show();
    connect(quest,SIGNAL(progresssbar()),this,SLOT(progresssbarslot()));
    ui->pushButton_26->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_28_clicked()
{
    Question *quest= new Question("Adesanya");

    quest->show();
    connect(quest,SIGNAL(progresssbar()),this,SLOT(progresssbarslot()));
    ui->pushButton_28->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_24_clicked()
{
questioncb *qcb = new questioncb("Stipe");
qcb->show();
connect(qcb,SIGNAL(questioncbsignal()),this,SLOT(progresssbarslot()));
ui->pushButton_24->setEnabled(false);
brojac++;
}

void MainWindow::on_pushButton_25_clicked()
{
    questioncb *qcb = new questioncb("Joshua");
    qcb->show();
    connect(qcb,SIGNAL(questioncbsignal()),this,SLOT(progresssbarslot()));
ui->pushButton_25->setEnabled(false);
brojac++;
}

void MainWindow::on_pushButton_23_clicked()
{
    questioncb *qcb = new questioncb("Usyk");
    qcb->show();
    connect(qcb,SIGNAL(questioncbsignal()),this,SLOT(progresssbarslot()));
    ui->pushButton_23->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_22_clicked()
{
    questioncb *qcb = new questioncb("Canelo");
    qcb->show();
    connect(qcb,SIGNAL(questioncbsignal()),this,SLOT(progresssbarslot()));
    ui->pushButton_22->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_21_clicked()
{
    questioncb *qcb = new questioncb("Golota");
    qcb->show();
    connect(qcb,SIGNAL(questioncbsignal()),this,SLOT(progresssbarslot()));
    ui->pushButton_21->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_42_clicked()
{
QuestionCHb *qchb = new QuestionCHb("Diaz");
qchb->show();
connect(qchb,SIGNAL(questionchbsignal()),this,SLOT(progresssbarslot()));
ui->pushButton_42->setEnabled(false);
brojac++;
}

void MainWindow::on_pushButton_45_clicked()
{
    QuestionCHb *qchb = new QuestionCHb("Welterweight");
    qchb->show();
    connect(qchb,SIGNAL(questionchbsignal()),this,SLOT(progresssbarslot()));
    ui->pushButton_45->setEnabled(false);
    brojac++;

}

void MainWindow::on_pushButton_44_clicked()
{
    QuestionCHb *qchb = new QuestionCHb("Wilder");
    qchb->show();
    connect(qchb,SIGNAL(questionchbsignal()),this,SLOT(progresssbarslot()));
    ui->pushButton_44->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_41_clicked()
{
    QuestionCHb *qchb = new QuestionCHb("Floyd");
    qchb->show();
    connect(qchb,SIGNAL(questionchbsignal()),this,SLOT(progresssbarslot()));
    ui->pushButton_41->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_43_clicked()
{
    QuestionCHb *qchb = new QuestionCHb("UK");
    qchb->show();
    connect(qchb,SIGNAL(questionchbsignal()),this,SLOT(progresssbarslot()));
    ui->pushButton_43->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_35_clicked()
{
    QuestionCHb *qchb = new QuestionCHb("Bantamweight");
    qchb->show();
    connect(qchb,SIGNAL(questionchbsignal()),this,SLOT(progresssbarslot()));
    ui->pushButton_35->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_32_clicked()
{
    QuestionCHb *qchb = new QuestionCHb("IBF");
    qchb->show();
    connect(qchb,SIGNAL(questionchbsignal()),this,SLOT(progresssbarslot()));
    ui->pushButton_32->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_31_clicked()
{
    QuestionCHb *qchb = new QuestionCHb("Saudi Arabia");
    qchb->show();
    connect(qchb,SIGNAL(questionchbsignal()),this,SLOT(progresssbarslot()));
    ui->pushButton_31->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_34_clicked()
{
    QuestionCHb *qchb = new QuestionCHb("Frazier");
    qchb->show();
    connect(qchb,SIGNAL(questionchbsignal()),this,SLOT(progresssbarslot()));
    ui->pushButton_34->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_33_clicked()
{
    QuestionCHb *qchb = new QuestionCHb("Ali");
    qchb->show();
    connect(qchb,SIGNAL(questionchbsignal()),this,SLOT(progresssbarslot()));
    ui->pushButton_33->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_37_clicked()
{
    QuestionPB *pb=new QuestionPB("USA");
    pb->show();
    connect(pb,SIGNAL(qpubsignal()),this,SLOT(progresssbarslot()));
    ui->pushButton_37->setEnabled(false);
    brojac++;
}

void MainWindow::on_pushButton_40_clicked()
{
    QuestionPB *pb=new QuestionPB("Drake");
    pb->show();
    connect(pb,SIGNAL(qpubsignal()),this,SLOT(progresssbarslot()));
     ui->pushButton_40->setEnabled(false);
     brojac++;
}

void MainWindow::on_pushButton_39_clicked()
{
    QuestionPB *pb=new QuestionPB("Masvidal");
    pb->show();
    connect(pb,SIGNAL(qpubsignal()),this,SLOT(progresssbarslot()));
     ui->pushButton_39->setEnabled(false);
     brojac++;
}

void MainWindow::on_pushButton_36_clicked()
{
    QuestionPB *pb=new QuestionPB("Conor");
    pb->show();
    connect(pb,SIGNAL(qpubsignal()),this,SLOT(progresssbarslot()));
     ui->pushButton_36->setEnabled(false);
     brojac++;
}

void MainWindow::on_pushButton_38_clicked()
{
    QuestionPB *pb=new QuestionPB("Cejudo");
    pb->show();
    connect(pb,SIGNAL(qpubsignal()),this,SLOT(progresssbarslot()));
     ui->pushButton_38->setEnabled(false);
     brojac++;
}

void MainWindow::on_actionPregled_triggered()
{
    QString s = QDate::currentDate().toString();
Login logf;


    if(brojac==25){
        mwdb=QSqlDatabase::addDatabase("QSQLITE");
        mwdb.setDatabaseName("C:/Users/User/Desktop/op zadaca/FINAL/KVIZ.db");
        if(!mwdb.open()){
         ui->statusbar->showMessage("Not connected");
         qDebug()<<"BAZA NIJE OTVORENA";
        }
        qDebug()<<"SVA PITANJA SU ODGOVORENA";
        QSqlQuery query;
        int brojbodova=ui->progressBar->value();
       // query.prepare("UPDATE Studenti set Bodovi= ? where Ime='Ahmed' ");
        query.prepare("UPDATE Studenti set Bodovi= ?, Datum='"+s+"' where Ime='"+logf.mwuser+"' ");
query.addBindValue(brojbodova);

query.exec();


        qDebug()<<query.exec();

    }
    Prikazstudenata *prikaz= new Prikazstudenata();
    prikaz->show();
}
