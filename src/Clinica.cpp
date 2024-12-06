#include <Clinica.h>

Clinica::Clinica(/* args */){
    list = make_shared<ListNode>();
}
void Clinica::InsertPacientHead(shared_ptr<Person> ObjectPacient) {
    list->AddHead(ObjectPacient);
}

void Clinica::InsertPacientTail(shared_ptr<Person> ObjectPacient) {
    list->AddTail(ObjectPacient);

};

void Clinica::ShowPacients()
{
    list->ShowAll();
    
}

void Clinica::UpdateClient(int id, string name)
{
    list->Update(id, name);
    
}

void Clinica::DeleteClient(int id)
{
    list->DeleteAny(id);
    
}
