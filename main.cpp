#include <iostream>
#include <string>
#include <list>
#include <iterator>
#include <memory>
#include <Person.h>
#include <ListNode.h>
#include <Clinica.h>



using namespace std;

int main(){

    

    int opcion, edad, id, dni;
    string name;
    shared_ptr<Person> ObjectPacient;
    shared_ptr<Clinica> Clinicaa=make_shared<Clinica>();
    do{
        cout << "---------------------Menu------------  " << endl;
        cout << "1. Ingresar cliente al inicio de la lista." << endl;
        cout << "2. Ingresar cliente al final de la lista." << endl;
        cout << "3. Listar clientes." << endl;
        cout << "4. Modificar cliente." << endl;
        cout << "5. Borrar cliente." << endl;
        cout << "0. Salir del sistema." << endl;
        cout << "ingrese:";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
        cout << "Nombre:";
        cin >> name;
        cout << "Edad:"; 
        cin >> edad;
        cout << "DNI:"; 
        cin >> dni;

        ObjectPacient = make_shared<Person>();
        ObjectPacient->setdatos(name, edad, dni);

        Clinicaa->InsertPacientHead(ObjectPacient);
        cout <<"Agregado!" << endl;
            
            break;
        case 2:
        cout << "Nombre:";
        cin >> name;
        cout << "Edad:"; 
        cin >> edad;
        cout << "DNI:"; 
        cin >> dni;

        ObjectPacient = make_shared<Person>();
        ObjectPacient->setdatos(name, edad, dni);

        Clinicaa->InsertPacientTail(ObjectPacient);
        cout <<"Agregado!" << endl;
            break;

        
        case 3:

        Clinicaa->ShowPacients();

            break;
        
        case 4:
        cout << "Ingrese el id del cliente a modificar:";cin >> id;
        cout << "Name:";
        cin >> name;
        Clinicaa->UpdateClient(id, name);
        cout << "Se ah modificado!" << endl;


        

            break;

        case 5:

        cout << "Ingrese el id del cliente a eliminar:";cin >> id;
        Clinicaa->DeleteClient(id);
        cout << "Se ah eliminado!" << endl;

            break;
        
        default:
            cout <<"Haz salido del ssitema exitosamente! " << endl;
            break;
        }

    }while(opcion!=0);



    return 0;
}