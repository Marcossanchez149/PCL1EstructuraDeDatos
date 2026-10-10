#ifndef NODOLISTA_HPP
#define NODOLISTA_HPP

#include "Paciente.hpp"

class NodoLista {
public:
    Paciente paciente;
    NodoLista* siguiente;

    NodoLista(Paciente p, NodoLista* sig = nullptr);
};

#endif