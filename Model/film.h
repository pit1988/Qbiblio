#ifndef FILM_H
#define FILM_H

#include <QTime>
#include <QDate>
#include <QVector>
#include "libraryitem.h"

class Film : public LibraryItem{
private:
    QString regista;
    int durata; //minuti
    QDate dataUscita;
    //QVector<QString> attori;
public:
    Film();
    Film(QString, QString, QString, int, QDate);
    virtual ~Film();
    virtual Film* clone() const;
    virtual bool operator==(const Film&) const;
    virtual bool operator!=(const Film&) const;
    QString getRegista() const;
    int getDurata() const;
    QDate getDataUscita() const;
    bool search(const QString &) const;


    //Film(QString, QString, QString, int, QDate, QVector<QString>);
    //QVector<QString> getAttori() const;
};

#endif // FILM_H
