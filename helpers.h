#ifndef HELPERS_H
#define HELPERS_H

#include <stdio.h>
#include <string.h>

#include "HashMap.h"

/*
 Concatenates a string and a number and returns it
 e.g. "v" + 9 -> "v9"
*/
char *concat(const char *item, int i) {
  char str[2];
  sprintf(str, "%d", i);
  char *itemString = new char[(strlen(item) + strlen(str) + 1)];
  strcpy(itemString, item);
  strcat(itemString, str);
  return itemString;
}

// Prints the Pairs of the HashMap
void print(HashMap hs) {
  if (hs.getNumberOfItems() == 0) {
    cout << "Empty" << endl << endl;
  } else {
    for (int i = 0; i < hs.getNumberOfItems(); i++) {
      cout << *(hs.get(i)) << endl;
    }
    cout << endl;
  }
}

// Parses the input to the main in order to determine the operation and the key
void parse(const char *command, char &operation, int &key) {
  operation = command[0];
  char *subbuff = new char[strlen(command)];

  memcpy(subbuff, &command[1], strlen(command) + 1);

  // subbuff[strlen(command)] = '\0';
  key = atoi(subbuff);
}

#endif // HELPERS_H
