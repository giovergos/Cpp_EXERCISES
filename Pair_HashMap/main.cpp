/*
class Pair
variables:
1. int key: pair's key
2. char *value: pair's value (array with characters)
functions:
1. Pair(int key, const char* value): constructor with parameters
2. ~Pair(): destructor
3. int getKey(): getter for key
4. char* getValue(): getter for value
5. ostream &operator<<(ostream &os, Pair &kv): overload the << operator
class HashMap
variables:
1. Pair *items[MAX_ITEMS]: array with pointers (point to Pair objects)
2. unsigned int pos: defines the next empty position in array
functions:
1. HashMap(): constructor
2. int getNumberOfItems(): returns the number of pairs that have been added to array
3. Pair *find(int key, int &pos): returns a pointer which points to the pair of array that has as a key the key which is given as a parameter, and also the pair's position in array (if it doesn't exist returns NULL and pos=-1)
4. void clear(): clears the array
5. Pair *get(int pos): returns a pointer which points to the pair that is in pos position in array
6. bool add(int key, char* value): adds a pair (key, value) in array, if there is not already an one with the same kay, while returning true or false (true if the pair is successfully added). Add at the end of array
7. HashMap operator+(Pair *p): Overload the + operator to add in array a Pair pointer like add function
8. HashMap operator-(int key): Overload the - operator to delete the pair with the same key as the key parameter. Be careful not to leave empty spaces between pairs in array
The main code and the file helpers.h are given. */

#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string.h>

#include "HashMap.h"
#include "helpers.h"

using namespace std;

int main(int argc, char const *argv[]) {
  cout << boolalpha;

  HashMap hs;

  // if no command sequence is provided, this is the default 
  char const *defaultCommands[] = {"","+1", "+1", "a1", "+2", "a2", "+2",
                                   "-5", "-1", "?1", "?8", "=0"};
  
  const char **inputs;
  if (argc == 1) { // no input is provided to the main
    inputs = defaultCommands;
    argc = 12;
  } else { // just use the provided sequence
    inputs = argv;
  }

  for (int i = 1; i < argc; i++) {
    const char *command = inputs[i]; // e.g. +45
    char operation;
    int key, pos;
    
    parse(command, operation, key); // e.g. operation = '+', id = 45

    // execute the operation
    if (operation == '+') {
      cout << "Add " << key << endl;
      const char *itemString = concat("v", key);
      Pair *p = new Pair(key, itemString);
      hs = hs + p;
      print(hs);
    } else if (operation == 'a') {
      cout << "Add " << key << endl;
      const char *itemString = concat("v", key);
      hs.add(key, itemString);
      print(hs);
    } else if (operation == '-') {
      cout << "Remove " << key << endl;
      hs = hs - key;
      print(hs);
    } else if (operation == '?') {
      cout << "Find " << key << ": ";
      Pair *found = hs.find(key, pos);
      cout << (found != NULL) << endl;
      print(hs);
    } else if (operation == '=') {
      cout << "Clear" << endl;
      hs.clear();
      print(hs);
    }
  }

  return 0;
}
