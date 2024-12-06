#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <memory>
#include <string>
#include <Person.h>

using namespace std;


struct Node
{
     
    shared_ptr<Node> siguiente;
    shared_ptr<Person> persona;
    Node(shared_ptr<Person> p);
};

#endif // NODE_H
