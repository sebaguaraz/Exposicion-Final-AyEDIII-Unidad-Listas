#ifndef PILA_HPP
#define PILA_HPP

#include <nodo.hpp>
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

#include <pila.cpp>

#endif