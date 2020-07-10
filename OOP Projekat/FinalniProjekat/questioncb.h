#ifndef QUESTIONCB_H
#define QUESTIONCB_H

#include <QDialog>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QDebug>

namespace Ui {
class questioncb;
}

class questioncb : public QDialog
{
    Q_OBJECT

public:
    explicit questioncb(QWidget *parent = nullptr);
    ~questioncb();
    questioncb(QString strcb);
    static QString tacodg;

signals:
    void questioncbsignal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::questioncb *ui;
    QSqlDatabase mydbcb;
};

#endif // QUESTIONCB_H
