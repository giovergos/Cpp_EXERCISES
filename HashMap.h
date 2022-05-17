#ifndef HashMap_H
#define HashMap_H

#include "Pair.h"

#define MAX_ITEMS 10

class HashMap {
private:
  Pair *items[MAX_ITEMS];
  unsigned int pos;

public:
  HashMap();
  int getNumberOfItems();
  Pair *find(int key, int &pos);
  void clear();
  Pair* get(int pos);
  bool add(int key, const char* value);
  HashMap operator+(Pair *p);
  HashMap operator-(int key);
};

#endif // HashMap_H
