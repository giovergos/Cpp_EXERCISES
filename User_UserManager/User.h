#ifndef USER_H
#define USER_H

class User
{
private:
    char *username;
    char *password;

public:
    User(const char *username, const char *password);
    ~User();

    char *getUsername();
    char *getPassword();
    void setUsername(const char *username);
    void setPassword(const char *password);
};

#endif // USER_H
