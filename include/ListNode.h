#ifndef LISTNODE_H
#define LISTNODE_H

#include <iostream>
#include <memory>
#include <string>
#include <Node.h>
#include <Person.h>



using namespace std;


class ListNode
{
private:
    shared_ptr<Node> head;
    shared_ptr<Node> tail;

public:
    ListNode();
    void AddHead(shared_ptr<Person> p);
    void AddTail(shared_ptr<Person> p);
    void Update(int id, string name);
    void ShowAll();
    void DeleteAny(int id);
    bool isEmpty();
};


#endif // LISTNODE_H
