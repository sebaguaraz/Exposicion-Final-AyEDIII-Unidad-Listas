#ifndef PAQUETE_H
#define PAQUETE_H

#include <string>
#include <iostream>
#include "interface.h"

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

#endif