#include <iostream>
#include <memory>
#include <string>
#include <ListNode.h>

class Clinica
{
private:
    shared_ptr<ListNode> p;
    
public:
    Clinica(/* args */);
    void InsertPacientHead( shared_ptr<Person> ObjectPacient);
    void InsertPacientTail( shared_ptr<Person> ObjectPacient);
    void ShowPacients();
    void UpdateClient(int id, string name);
    void DeleteClient(int id);
};




