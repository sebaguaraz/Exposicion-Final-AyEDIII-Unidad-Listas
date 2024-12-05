#include <iostream>
#include <memory>
#include <string>
#include <Person.h>

using namespace std;


class Node
{
private:
    shared_ptr<Node> siguiente;
    shared_ptr<Person> persona;
public:
    Node(shared_ptr<Person> p);

};

