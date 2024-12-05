#include <Node.h>

Node::Node(shared_ptr<Person> p){
    persona = p;
    siguiente = nullptr;
};

