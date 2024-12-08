#ifndef PERSONA_H
#define PERSONA_H

#include <string>
#include <iostream>
#include "interface.h"

class Persona : public Interface
{
private:
    std::string nombre;
    int edad;
    std::string motivoConsulta;

public:
    Persona(const std::string &nombre, int edad, const std::string &motivoConsulta);
    std::string obtenerNombre() const;
    int obtenerEdad() const;
    std::string obtenerMotivoConsulta() const;
    void showData() const override;
};

#endif