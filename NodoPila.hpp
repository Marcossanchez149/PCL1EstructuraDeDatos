#ifndef NODOPILA_HPP
#define NODOPILA_HPP

#include "Paciente.hpp"

class NodoPila {
public:
    Paciente paciente;
    NodoPila* siguiente;

    NodoPila(Paciente p, NodoPila* sig = nullptr);
};

#endif