// - nodo.hpp
#ifndef NODO_H
#define NODO_H

#include <memory>

template <typename T>
class Nodo
{
public:
    T dato;
    std::shared_ptr<Nodo<T>> siguiente;

    Nodo(const T &valor);
};

#include "../src/nodo.tpp"

#endif