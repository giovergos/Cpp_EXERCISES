#ifndef USER_MANAGER_H
#define USER_MANAGER_H

#include "User.h"

#define MAX_USERS 10

class UserManager
{
private:
    User *users[MAX_USERS];

public:
    UserManager();

    bool createUser(const char *username, const char *password);
    bool updateUsername(const char *username, const char *newUsername);
    bool updatePassword(const char *username, const char *newPassword);
    bool deleteUser(const char *username);
    User *getUser(const char *username);
};

#endif // USER_MANAGER_H
