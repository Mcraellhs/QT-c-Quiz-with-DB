#ifndef QUESTIONPB_H
#define QUESTIONPB_H

#include <QDialog>
#include <QtSql>
#include <QtSql/QSqlDatabase>
#include <QDebug>


namespace Ui {
class QuestionPB;
}

class QuestionPB : public QDialog
{
    Q_OBJECT

public:
    explicit QuestionPB(QWidget *parent = nullptr);
    ~QuestionPB();
    QuestionPB(QString qpb);
    static QString tacodg;
signals:
    void qpubsignal();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::QuestionPB *ui;
    QSqlDatabase dbpb;
};

#endif // QUESTIONPB_H
