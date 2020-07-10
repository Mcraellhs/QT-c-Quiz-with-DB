#ifndef QUESTIONCHB_H
#define QUESTIONCHB_H

#include <QDialog>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QDebug>


namespace Ui {
class QuestionCHb;
}

class QuestionCHb : public QDialog
{
    Q_OBJECT

public:
    explicit QuestionCHb(QWidget *parent = nullptr);
    ~QuestionCHb();
    QuestionCHb(QString strchb);
    static QString tacodg;
signals:
    void questionchbsignal();

private slots:
    void on_pushButton_clicked();

private:
    Ui::QuestionCHb *ui;
    QSqlDatabase mydbchb;
};

#endif // QUESTIONCHB_H
