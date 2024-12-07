// - nodo.cpp
#include <nodo.hpp>

template <typename T>
Nodo<T>::Nodo(const T &valor) : dato(valor), siguiente(nullptr) {}