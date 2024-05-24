#include "User.h"
int User::userCounter = 1;

User::User() : _id(0), _login(""), _username(""), _passwordHash()
{
}

User::User(string username, Hash passHash) :_login(username), _username(username), _passwordHash(passHash), _id(++userCounter)
{
}

User::User(string username, string email, Hash passHash) : _login(username), _username(username), _email(email), _passwordHash(passHash), _id(++userCounter)
{

}


int User::checklogin(const string& login, const Hash& passHash) const
{
	if ((_login == login) && (_passwordHash == passHash)) return _id;
	return -1;
}

string& User::getuserName() 
{
	return _username;
}

string User::email() const
{
    return _email;
}

int User::getUserID() const
{
	return _id;
}
