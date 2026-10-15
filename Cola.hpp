#ifndef COLA_HPP
#define COLA_HPP

#include "NodoCola.hpp"
#include <stdexcept>

class Cola {
private:
    NodoCola* frente;
    NodoCola* final;
    int tamano; // Muy importante para saber qué sala está más vacía

public:
    Cola();
    ~Cola();
    
    void encolar(Paciente p);
    Paciente desencolar();
    bool estaVacia() const;
    Paciente verFrente() const;
    int getTamano() const; // Método para obtener cuántos pacientes hay
};

#endif