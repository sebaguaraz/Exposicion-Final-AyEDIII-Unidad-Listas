#include "../include/pila.h"

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

template <typename T>
T Pila<T>::buscar(const std::function<bool(const T &)> &criterio) const
{
    auto actual = tope;
    while (actual)
    {
        if (criterio(actual->dato))
        {
            return actual->dato; // Retorna el dato si cumple el criterio.
        }
        actual = actual->siguiente;
    }
    throw std::runtime_error("Elemento no encontrado en la pila.");
}
