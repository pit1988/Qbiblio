#include "smartptr.h"

SmartPtr::SmartPtr() : li(0) {}

SmartPtr::SmartPtr(LibraryItem* l) : li(l->clone()) {}

SmartPtr::SmartPtr(const SmartPtr& sp) : li( (sp.li)->clone()) {}

SmartPtr::~SmartPtr() {
  if(li)
    delete li;
}

SmartPtr& SmartPtr::operator=(const SmartPtr& sp) {
  if(this != &sp){
    delete li;
    li = (sp.li)->clone();
  }
  return *this;
}

bool SmartPtr::operator==(const SmartPtr& sp) const {
  return *li == *(sp.li);
}

bool SmartPtr::operator!=(const SmartPtr& sp) const {
  return !(*li == *(sp.li));
}

LibraryItem* SmartPtr::operator->() const {return li;}

LibraryItem& SmartPtr::operator*() const {return *li;}

LibraryItem* SmartPtr::getItem() {return li;}

LibraryItem* SmartPtr::getItem() const {return li->clone();}
