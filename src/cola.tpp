// - cola.cpp
#include "../include/cola.h"

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