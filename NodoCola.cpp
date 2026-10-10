#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP

#include "Paciente.hpp"

class NodoCola {
public:
    Paciente paciente;
    NodoCola* siguiente;
    NodoCola(Paciente p, NodoCola* sig = nullptr);
};

#endif