#include <persona.hpp>

Persona::Persona(const std::string &nombre, int edad, const std::string &motivoConsulta)
    : nombre(nombre), edad(edad), motivoConsulta(motivoConsulta) {}

std::string Persona::obtenerNombre() const
{
    return nombre;
}

int Persona::obtenerEdad() const
{
    return edad;
}

std::string Persona::obtenerMotivoConsulta() const
{
    return motivoConsulta;
}

void Persona::showData() const
{
    std::cout << "Persona: " << nombre << ", Edad: " << edad << ", Motivo: " << motivoConsulta << std::endl;
}