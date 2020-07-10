#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QMessageBox>
#include "mainwindow.h"

namespace Ui {
class Login;
}

class Login : public QDialog
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
  static  QString mwuser;
static QString  mwprez;
signals:
    void signalformw();

private slots:
    void on_pushButton_clicked();


private:
    Ui::Login *ui;
    QSqlDatabase mydb;
    QMessageBox msgBox;
};

#endif // LOGIN_H
