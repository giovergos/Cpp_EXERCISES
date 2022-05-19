#include "User.h"
#include <string.h>

User::User(const char *username, const char *password)
{
  this->username=new char[strlen(username)+1];
  strcpy(this->username, username);
  this->password=new char[strlen(password)+1];
  strcpy(this->password, password);
}
User::~User()
{
  delete[] this->username;
  delete[] this->password;
}
char* User::getUsername()
{
  return this->username;
}
char* User::getPassword()
{
  return this->password;
}
void User::setUsername(const char *username)
{
  //delete[] username;
  this->username=new char[strlen(username)+1];
  strcpy(this->username, username);
}
void User::setPassword(const char *password)
{
  //delete[] password;
  this->password=new char[strlen(password)+1];
  strcpy(this->password, password);
}