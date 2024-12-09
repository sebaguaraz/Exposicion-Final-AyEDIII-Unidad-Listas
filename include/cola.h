#ifndef COLA_H
#define COLA_H

#include "../include/nodo.h"
#include <iostream>
#include <functional>

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
    T buscar(const std::function<bool(const T &)> &criterio) const;
};

#include "../src/cola.tpp"

#endif