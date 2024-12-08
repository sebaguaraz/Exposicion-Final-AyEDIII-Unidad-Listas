// - paquete.cpp
#include <paquete.h>

Paquete::Paquete(int id, float peso, const std::string &destino)
    : id(id), peso(peso), destino(destino) {}

int Paquete::obtenerId() const
{
    return id;
}

float Paquete::obtenerPeso() const
{
    return peso;
}

std::string Paquete::obtenerDestino() const
{
    return destino;
}

void Paquete::showData() const
{
    std::cout << "Paquete ID: " << id << ", Peso: " << peso << " kg, Destino: " << destino << std::endl;
}