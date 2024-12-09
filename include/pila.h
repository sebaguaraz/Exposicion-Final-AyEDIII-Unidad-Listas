#ifndef PILA_H
#define PILA_H

#include "../include/nodo.h"
#include <iostream>
#include <functional>

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
    T buscar(const std::function<bool(const T &)> &criterio) const;
};

#include "../src/pila.tpp"

#endif