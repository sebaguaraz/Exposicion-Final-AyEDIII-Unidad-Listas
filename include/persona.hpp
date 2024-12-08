#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <string>
#include <iostream>
#include <interface.hpp>

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

#include <persona.cpp>

#endif