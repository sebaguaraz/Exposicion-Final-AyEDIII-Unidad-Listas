#ifndef CLINICA_H
#define CLINICA_H

#include <iostream>
#include <memory>
#include <string>
#include <ListNode.h>
#include <Node.h>
#include <Person.h>

class Clinica
{
private:
    shared_ptr<ListNode> list;

public:
    Clinica(/* args */);
    void InsertPacientHead(shared_ptr<Person> ObjectPacient);
    void InsertPacientTail(shared_ptr<Person> ObjectPacient);
    void ShowPacients();
    void UpdateClient(int id, string name);
    void DeleteClient(int id);
};

#endif // CLINICA_H
