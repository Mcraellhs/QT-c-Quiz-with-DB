#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QDate>
#include "login.h"
#include "question.h"
#include "questioncb.h"
#include "questionchb.h"
#include "questionpb.h"
#include "prikazstudenata.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static int value;
    static int brojac;

    public slots:
    void loginslot();
    void progresssbarslot();
   // static int vrijednoststatusbara;


private slots:
    void on_actionLog_triggered();

    void on_pushButton_27_clicked();

    void on_pushButton_30_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_26_clicked();

    void on_pushButton_28_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_42_clicked();

    void on_pushButton_45_clicked();

    void on_pushButton_44_clicked();

    void on_pushButton_41_clicked();

    void on_pushButton_43_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_32_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_38_clicked();

    void on_actionPregled_triggered();

public:
    Ui::MainWindow *ui;
    QSqlDatabase mwdb;
    QSqlDatabase mwb;
};
#endif // MAINWINDOW_H
