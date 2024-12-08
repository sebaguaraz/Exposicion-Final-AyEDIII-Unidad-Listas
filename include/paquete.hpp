#ifndef PAQUETE_HPP
#define PAQUETE_HPP

#include <string>
#include <iostream>
#include <interface.hpp>

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

#include <paquete.cpp>

#endif