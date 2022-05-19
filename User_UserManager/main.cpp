/* class User
variables:
1. char *username; char *password: user's username and password
functions:
1. User(const char *username, const char *password): constructor
2. ~User(): destructor
3. char *getUsername(): getter for username
4. char *getPassword(): getter for password
5. void setUsername(const char *username): setter for username
6. void setPassword(const char *password): setter for password
class UserManager
variables:
1. User *users[MAX_USERS]: array that saves User pointers
functions:
1. UserManager(): destructor
2. bool createUser(const char *username, const char *password): create a user with username and password and add him at the user's list (returns true).
A user is created only if there is no another one with the same username and users are not MAX_USERS (returns false). We dont care about the position of every user.
3. bool updateUsername(const char *username, const char *newUsername): updates the username of a user (returns true).
The new username mustn't exist already in the array (returns false).
4. bool updatePassword(const char *username, const char *newPassword): updates the username of a user (returns true).
Returns false if the process is failed (e.g. this user doesn't exist).
5. bool deleteUser(const char *username): deletes a user from the array (returns true). Returns false if the process is failed, e.g. this user doesn't exist.
The position of the deleted user is no more taken and can be used to insert a new user.
6. User *getUser(const char *username): returns the pointer that points to the user with the given username. If this user doesn't exist, the function returns NULL.
The main code is given. */

#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <string.h>

#include "User.h"
#include "UserManager.h"

using namespace std;

//helper function for concatenating a string and an integer,
// e.g. "something" + 1 -> "something1"
char *concat(const char *item, int i)
{
    char str[3];
    sprintf(str, "%d", i);
    char *itemString = new char[(strlen(item) + strlen(str) + 1)];
    strcpy(itemString, item);
    strcat(itemString, str);
    return itemString;
}

// main
int main()
{
    cout << boolalpha;

    char *usernameSeed = new char[100];
    cout << "Give a username seed: " << endl;
    cin >> usernameSeed;

    char *passwordSeed = new char[100];
    cout << "Give a password seed: " << endl;
    cin >> passwordSeed;

    UserManager *userManager = new UserManager();

    // create a new user
    //cout << "create a new user" << endl;
    bool created = userManager->createUser(concat(usernameSeed, 1), passwordSeed);
    cout << created << endl;
    User *u = userManager->getUser(concat(usernameSeed, 1));
    cout << (strcmp(u->getUsername(), concat(usernameSeed, 1)) == 0) << " - " << (strcmp(u->getPassword(), passwordSeed) == 0) << endl;

    // create a user with existing username -> fail
    //cout << "create a user with existing username -> fail" << endl;
    created = userManager->createUser(concat(usernameSeed, 1), passwordSeed);
    cout << created << endl;

    // find a non-existing user -> fail
    //cout << "find a non-existing user -> fail" << endl;
    u = userManager->getUser("fake");
    cout << (u != NULL) << endl;

    // delete the first user
    //cout << "delete the first user" << endl;
    bool deleted = userManager->deleteUser(concat(usernameSeed, 1));
    cout << deleted << endl;

    // find the first user -> fail
    //cout << "find the first user -> fail" << endl;
    u = userManager->getUser(concat(usernameSeed, 1));
    cout << (u != NULL) << endl;

    // delete a non existing user
    //cout << "delete a non existing user" << endl;
    deleted = userManager->deleteUser("fake");
    cout << deleted << endl;

    // create the max users
    //cout << "create the max users" << endl;
    for (int i = 0; i < MAX_USERS; i++)
    {
        userManager->createUser(concat(usernameSeed, i), passwordSeed);
    }

    // create an extra user -> fail
    //cout << "create an extra user -> fail" << endl;
    created = userManager->createUser(concat(usernameSeed, 20), passwordSeed);
    cout << created << endl;

    // delete an existing user
    //cout << "delete an existing user" << endl;
    deleted = userManager->deleteUser(concat(usernameSeed, 4));
    cout << deleted << endl;

    // create a new user
    //cout << "create a new user" << endl;
    created = userManager->createUser(concat(usernameSeed, 11), passwordSeed);
    cout << created << endl;

    // update username to an existing username -> fail
    //cout << "update username -> fail" << endl;
    bool updated = userManager->updateUsername(concat(usernameSeed, 1), concat(usernameSeed, 11));
    cout << updated << endl;

    // update the username
    //cout << "update username" << endl;
    updated = userManager->updateUsername(concat(usernameSeed, 1), concat(usernameSeed, 20));
    cout << updated << endl;
    u = userManager->getUser(concat(usernameSeed, 20));
    cout << (u != NULL) << endl;
    u = userManager->getUser(concat(usernameSeed, 1));
    cout << (u != NULL) << endl;

    // update the password of the updated username
    //cout << "update password" << endl;
    updated = userManager->updatePassword(concat(usernameSeed, 20), concat(passwordSeed, 1));
    cout << updated << endl;
    u = userManager->getUser(concat(usernameSeed, 20));
    cout << (strcmp(u->getPassword(),concat(passwordSeed, 1)) == 0) << endl;

    cout << "\nThank you!\n";

    return 0;
}
