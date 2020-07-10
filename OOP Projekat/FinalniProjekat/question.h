#ifndef QUESTION_H
#define QUESTION_H

#include <QDialog>
#include <QDialog>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QDebug>

namespace Ui {
class Question;
}

class Question : public QDialog
{
    Q_OBJECT

public:
    explicit Question(QWidget *parent = nullptr);
    ~Question();
    Question(QString stri);
    static QString odgs;
    static int statbar;
signals:
    void progresssbar();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Question *ui;
    QSqlDatabase mydba;
};

#endif // QUESTION_H
