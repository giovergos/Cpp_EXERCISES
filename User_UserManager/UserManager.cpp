#include "UserManager.h"
#include <string.h>
#include "User.h"

UserManager::UserManager()
{  
  int i;
  for(i=0;i<10;i++)
  {
    users[i]=nullptr;
  }
}

bool UserManager::createUser(const char *username, const char *password)
{
  int i, pl=0, pos;
  User *temp;
  bool flag=false;
  for(i=0;i<MAX_USERS;i++)
  {
    if(users[i]!=nullptr && strcmp(users[i]->getUsername(),username)==0)
    {
      flag=true;
    }
  }
  for(i=0;i<MAX_USERS;i++)
  {
    if(users[i]!=nullptr)
    {
      pl++;
    }
    else
      pos=i;
  }
  if(pl!=10 && flag==false)
  {
    temp=new User(username,password);
    users[pos]=temp;
    return true;
  }
  return false;
}

bool UserManager::updateUsername(const char *username, const char *newUsername)
{
  bool flag=false;
  int i;
  for(i=0;i<MAX_USERS;i++)
  {
    if(users[i]!=nullptr && strcmp(users[i]->getUsername(),newUsername)==0)
    {
      flag=true;
    }
  }
  if(flag==false)
  {
    for(i=0;i<MAX_USERS;i++)      
    {
      if(users[i]!=nullptr && strcmp(users[i]->getUsername(),username)==0)
      {
        users[i]->setUsername(newUsername);
        return true;
      }
    }
  }
  return false; 
}

bool UserManager::updatePassword(const char *username, const char *newPassword)
{
  int i, pos;
  bool flag=false;
  for(i=0;i<MAX_USERS;i++)
  {
    if(users[i]!=nullptr && strcmp(users[i]->getUsername(),username)==0)
    {
      flag=true;
      pos=i;  
    }
  }
  if(flag==true)
  {
    users[pos]->setPassword(newPassword);
    return true;
  }
  return false;
}

bool UserManager::deleteUser(const char *username)
{
  bool flag=false;
  int i, pos;
  for(i=0;i<MAX_USERS;i++)
  {
    if(users[i]!=nullptr && strcmp(users[i]->getUsername(),username)==0)
    {
      flag=true;
      pos=i;  
    }
  }
  if(flag==true)
  {
    users[pos]=nullptr;
    return true;
  }
  return false;
}

User* UserManager::getUser(const char *username)
{
  bool flag=false;
  int i, pos;
  for(i=0;i<MAX_USERS;i++)
  {
    if(users[i]!=nullptr && strcmp(users[i]->getUsername(),username)==0)
    {
      flag=true;
      pos=i;
    }
  }
  if(flag==true)
  {
    return users[pos];
  }
  return nullptr;
}