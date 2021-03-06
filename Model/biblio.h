#ifndef BIBLIO_H
#define BIBLIO_H

#include<iostream>
#include<typeinfo>

#include <QFile>
#include <QXmlStreamReader>
#include <QXmlStreamWriter>
#include <QStringList>
#include <QFileDialog>
#include <QMessageBox>
#include <QDomDocument>


#include "../Model/container.h"
#include "../Model/smartptr.h"
#include "../Model/libraryitem.h"
#include "../Model/cd.h"
#include "../Model/dvd.h"
#include "../Model/film.h"
#include "../Model/libro.h"
#include "../Model/vhs.h"

class Biblio
{
private:
  Container<SmartPtr> b;
public:
  Biblio(const Container<SmartPtr>& = Container<SmartPtr>());
  ~Biblio();
  bool IsEmpty() const;
  int size() const;
//  bool addItem(SmartPtr); //SmartPtr?
//  void removeItem(const string &);
  void Insert(const SmartPtr &);
  bool Remove(const SmartPtr&);
  bool Replace(const SmartPtr&, const SmartPtr&);
  LibraryItem* getItem(int) const;
  Container<SmartPtr> findItem(const string&) const;
  void save() const;
  void load();
  Container<SmartPtr> getLibrary() const;
};

#endif // BIBLIO_H
