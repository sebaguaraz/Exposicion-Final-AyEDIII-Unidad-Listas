#include <Person.h>


Person::Person(int id){
     this->id = id;
};

void Person::setdatos(string name, int age, int dni){
    this->name = name;
    this->age = age;
    this->dni = dni;


};


string Person::getname(){
    return name;
    };

int Person::getage(){
    return age;
    };

int Person::getid(){
    return id;
    };