#include "./include/nodo.h"
#include "./include/cola.h"
#include "./include/pila.h"
#include "./include/persona.h"
#include "./include/paquete.h"
#include <iostream>
#include <memory> // Para std::shared_ptr

using namespace std;

int main()
{
    // Uso de punteros inteligentes para Cola y Pila
    shared_ptr<Cola<Persona>> clinica = make_shared<Cola<Persona>>();
    shared_ptr<Pila<Paquete>> camion = make_shared<Pila<Paquete>>();

    int opcion;
    do
    {
        cout << "\nMenu Principal:\n";
        cout << "1. Encolar Persona\n";
        cout << "2. Desencolar Persona\n";
        cout << "3. Mostrar Personas en Cola\n";
        cout << "4. Apilar Paquete\n";
        cout << "5. Desapilar Paquete\n";
        cout << "6. Mostrar Paquetes en Pila\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opci\u00f3n: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
        {
            string nombre, motivoConsulta;
            int edad;
            cout << "Ingrese nombre: ";
            cin.ignore();
            getline(cin, nombre);
            cout << "Ingrese edad: ";
            cin >> edad;
            cin.ignore();
            cout << "Ingrese motivo de consulta: ";
            getline(cin, motivoConsulta);
            clinica->encolar(Persona(nombre, edad, motivoConsulta));
            break;
        }
        case 2:
            clinica->desencolar();
            break;
        case 3:
            clinica->showInfo();
            break;
        case 4:
        {
            int id;
            float peso;
            string destino;
            cout << "Ingrese ID del paquete: ";
            cin >> id;
            cout << "Ingrese peso del paquete: ";
            cin >> peso;
            cin.ignore();
            cout << "Ingrese destino del paquete: ";
            getline(cin, destino);
            camion->apilar(Paquete(id, peso, destino));
            break;
        }
        case 5:
            camion->desapilar();
            break;
        case 6:
            camion->showInfo();
            break;
        case 0:
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opci\u00f3n no v\u00e1lida. Intente nuevamente.\n";
        }
    } while (opcion != 0);

    return 0;
}