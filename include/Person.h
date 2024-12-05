#include <iostream>
#include <memory>
#include <string>
using namespace std;


class Person
{
private:
    string name;
    int age, id, dni;
public:
    Person(int id);
    void setdatos(string name, int age, int dni);
    string getname();
    int getage();
    int getid();
    int getdni();



};
