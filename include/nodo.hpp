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

#include <nodo.cpp>

#endif