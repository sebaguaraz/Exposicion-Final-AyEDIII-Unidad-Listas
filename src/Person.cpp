#include <Person.h>

int Person::id_count = 0;

Person::Person()
{
    id = ++id_count;
};

void Person::setdatos(string name, int age, int dni)
{
    this->name = name;
    this->age = age;
    this->dni = dni;
};

void Person::setname(string name)
{
    this->name = name;
};

string Person::getname()
{
    return name;
};

int Person::getage()
{
    return age;
};

int Person::getdni()
{
    return dni;
};

int Person::getid()
{
    return id;
};