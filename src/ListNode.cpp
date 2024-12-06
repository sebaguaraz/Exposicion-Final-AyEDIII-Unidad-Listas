#include <ListNode.h>


ListNode::ListNode(){
        head = nullptr;
        tail =nullptr;
};

void ListNode::AddHead(shared_ptr<Person> p){
    shared_ptr<Node> nuevoNodo = make_shared<Node>(p);
     nuevoNodo->siguiente = head;
        head = nuevoNodo;
        if (tail == nullptr) {
            tail = nuevoNodo;
        }
};

void ListNode::AddTail(shared_ptr<Person> p){
    shared_ptr<Node> nuevoNodo = make_shared<Node>(p);
        if (head==nullptr)//si la cabeza es null, el nodo creado es la nueva cabeza
        {
            head = nuevoNodo;
            tail = nuevoNodo;
        }
        else {
            tail->siguiente = nuevoNodo;
            tail = nuevoNodo;
        }
};


void ListNode::Update(int id, string name){
    shared_ptr<Node> actual= head;
    while (actual != nullptr) {//mientras el actual no sea null
        if (actual->persona->getid() == id) {//busca el valor 
            actual->persona->setname(name); 
            cout << "Se ah modificado!" << endl;
            return;
        }
        actual = actual->siguiente;
    }
    cout <<"No se encontro el id, no existente" << endl;

};

void ListNode::ShowAll(){
    shared_ptr<Node> actual = head;
    while (actual!=nullptr)
    {
        cout << "id: " << actual->persona->getid() << endl;
        cout << "nombre: "<< actual->persona->getname() << ", edad: " << actual->persona->getage() << ", dni: " << actual->persona->getdni() << endl;
        actual = actual->siguiente;

    }


        
};

void ListNode::DeleteAny(int id){

    //caso 1: si esta vacio
    if (isEmpty())
    {
        cout << "no se puede eliminar un elemento de una lista vacia"<< endl;
        return;
    }
    
    //caso 2: si esta en el principio de la list
    if (head->persona->getid() == id)
    {
        shared_ptr<Node> nodo_eliminar = head;
        head = head->siguiente;
        if (head==nullptr)
        {
            tail = nullptr;
        }

        nodo_eliminar.reset();
        cout << "Se ah eliminado!" << endl;
        return;
    }

    //caso 3: eliminar un nodo en el medio o al final
    shared_ptr<Node> actual = head;
    shared_ptr<Node> anterior = nullptr;

    while (actual!=nullptr&& actual->persona->getid()!=id)
    {
        anterior=actual;
        actual = actual->siguiente;
    }

    if (actual == nullptr) {
            cout << "No se encontro el id " << id << ", no existe" << endl;
            return;
        }
            
    anterior->siguiente = actual->siguiente;//el anterior apuntara al siguiente del actual, el actual se eliminara
    if (actual->siguiente == nullptr) {//si el que le sigue del actual es null, entonces tail se modifica para que apunte al anterior
            tail = anterior;
        }
    
    cout << "Se ah eliminado!" << endl;
    actual.reset();
        
        
    
    
    };

bool ListNode::isEmpty(){
        return head==nullptr;
         }