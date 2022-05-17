#ifndef PAIR_H
#define PAIR_H

#include <iostream>

using namespace std;

class Pair {
private:
  int key;
  char *value;

public:
  Pair(int key, const char *value);
  ~Pair();
  int getKey();
  char *getValue();
};

ostream &operator<<(ostream &os, Pair &kv);

#endif // Pair_H
