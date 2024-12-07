// Estructura de Archivos para Modularización

// Directorio: include
// - nodo.hpp
#ifndef NODO_HPP
#define NODO_HPP

#include <memory>

template <typename T>
class Nodo
{
public:
    T dato;
    std::shared_ptr<Nodo<T>> siguiente;

    Nodo(const T &valor);
};

#include "../src/nodo.cpp"

#endif

// - cola.hpp
#ifndef COLA_HPP
#define COLA_HPP

#include "nodo.hpp"
#include <iostream>

template <typename T>
class Cola
{
private:
    std::shared_ptr<Nodo<T>> frente;
    std::shared_ptr<Nodo<T>> fin;

public:
    Cola();
    void encolar(const T &valor);
    void desencolar();
    T obtenerFrente() const;
    bool estaVacia() const;
    void showInfo() const;
};

#include "../src/cola.cpp"

#endif

// - pila.hpp
#ifndef PILA_HPP
#define PILA_HPP

#include "nodo.hpp"
#include <iostream>

template <typename T>
class Pila
{
private:
    std::shared_ptr<Nodo<T>> tope;

public:
    Pila();
    void apilar(const T &valor);
    void desapilar();
    T obtenerTope() const;
    bool estaVacia() const;
    void showInfo() const;
};

#include "../src/pila.cpp"

#endif

// - persona.hpp
#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <string>
#include <iostream>
#include "interface.hpp"

class Persona : public Interface
{
private:
    std::string nombre;
    int edad;
    std::string motivoConsulta;

public:
    Persona(const std::string &nombre, int edad, const std::string &motivoConsulta);
    std::string obtenerNombre() const;
    int obtenerEdad() const;
    std::string obtenerMotivoConsulta() const;
    void showData() const override;
};

#include "../src/persona.cpp"

#endif

// - paquete.hpp
#ifndef PAQUETE_HPP
#define PAQUETE_HPP

#include <string>
#include <iostream>
#include "interface.hpp"

class Paquete : public Interface
{
private:
    int id;
    float peso;
    std::string destino;

public:
    Paquete(int id, float peso, const std::string &destino);
    int obtenerId() const;
    float obtenerPeso() const;
    std::string obtenerDestino() const;
    void showData() const override;
};

#include "../src/paquete.cpp"

#endif

// - interface.hpp
#ifndef INTERFACE_HPP
#define INTERFACE_HPP

class Interface
{
public:
    virtual void showData() const = 0;
    virtual ~Interface() = default;
};

#endif

// Directorio: src
// - nodo.cpp
template <typename T>
Nodo<T>::Nodo(const T &valor) : dato(valor), siguiente(nullptr) {}

// - cola.cpp
template <typename T>
Cola<T>::Cola() : frente(nullptr), fin(nullptr) {}

template <typename T>
void Cola<T>::encolar(const T &valor)
{
    auto nuevoNodo = std::make_shared<Nodo<T>>(valor);
    if (!fin)
    {
        frente = fin = nuevoNodo;
    }
    else
    {
        fin->siguiente = nuevoNodo;
        fin = nuevoNodo;
    }
}

template <typename T>
void Cola<T>::desencolar()
{
    if (!frente)
    {
        std::cerr << "La cola está vacía.\n";
        return;
    }
    frente = frente->siguiente;
    if (!frente)
    {
        fin = nullptr;
    }
}

template <typename T>
T Cola<T>::obtenerFrente() const
{
    if (!frente)
    {
        throw std::runtime_error("La cola está vacía.");
    }
    return frente->dato;
}

template <typename T>
bool Cola<T>::estaVacia() const
{
    return !frente;
}

template <typename T>
void Cola<T>::showInfo() const
{
    auto actual = frente;
    while (actual)
    {
        actual->dato.showData();
        actual = actual->siguiente;
    }
}

// - pila.cpp
template <typename T>
Pila<T>::Pila() : tope(nullptr) {}

template <typename T>
void Pila<T>::apilar(const T &valor)
{
    auto nuevoNodo = std::make_shared<Nodo<T>>(valor);
    nuevoNodo->siguiente = tope;
    tope = nuevoNodo;
}

template <typename T>
void Pila<T>::desapilar()
{
    if (!tope)
    {
        std::cerr << "La pila está vacía.\n";
        return;
    }
    tope = tope->siguiente;
}

template <typename T>
T Pila<T>::obtenerTope() const
{
    if (!tope)
    {
        throw std::runtime_error("La pila está vacía.");
    }
    return tope->dato;
}

template <typename T>
bool Pila<T>::estaVacia() const
{
    return !tope;
}

template <typename T>
void Pila<T>::showInfo() const
{
    auto actual = tope;
    while (actual)
    {
        actual->dato.showData();
        actual = actual->siguiente;
    }
}

// - persona.cpp
#include "../include/persona.hpp"

Persona::Persona(const std::string &nombre, int edad, const std::string &motivoConsulta)
    : nombre(nombre), edad(edad), motivoConsulta(motivoConsulta) {}

std::string Persona::obtenerNombre() const
{
    return nombre;
}

int Persona::obtenerEdad() const
{
    return edad;
}

std::string Persona::obtenerMotivoConsulta() const
{
    return motivoConsulta;
}

void Persona::showData() const
{
    std::cout << "Persona: " << nombre << ", Edad: " << edad << ", Motivo: " << motivoConsulta << std::endl;
}

// - paquete.cpp
#include "../include/paquete.hpp"

Paquete::Paquete(int id, float peso, const std::string &destino)
    : id(id), peso(peso), destino(destino) {}

int Paquete::obtenerId() const
{
    return id;
}

float Paquete::obtenerPeso() const
{
    return peso;
}

std::string Paquete::obtenerDestino() const
{
    return destino;
}

void Paquete::showData() const
{
    std::cout << "Paquete ID: " << id << ", Peso: " << peso << " kg, Destino: " << destino << std::endl;
}

// - main.cpp
#include "../include/cola.hpp"
#include "../include/pila.hpp"
#include "../include/persona.hpp"
#include "../include/paquete.hpp"
#include <iostream>

int main()
{
    Cola<Persona> clinica;
    Pila<Paquete> camion;

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
        cout << "Seleccione una opción: ";
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
            clinica.encolar(Persona(nombre, edad, motivoConsulta));
            break;
        }
        case 2:
            clinica.desencolar();
            break;
        case 3:
            clinica.showInfo();
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
            camion.apilar(Paquete(id, peso, destino));
            break;
        }
        case 5:
            camion.desapilar();
            break;
        case 6:
            camion.showInfo();
            break;
        case 0:
            cout << "Saliendo del programa...\n";
            break;
        default:
            cout << "Opción no válida. Intente nuevamente.\n";
        }
    } while (opcion != 0);

    return 0;
}