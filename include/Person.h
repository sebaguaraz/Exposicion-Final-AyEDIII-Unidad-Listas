#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <memory>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age, dni;
    static int id_count;
    int id;

public:
    Person();
    void setdatos(string name, int age, int dni);
    void setname(string name);
    string getname();
    int getage();
    int getid();
    int getdni();
};

#endif // PERSON_H