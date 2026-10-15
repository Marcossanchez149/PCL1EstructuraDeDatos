#ifndef LISTA_HPP
#define LISTA_HPP

#include "NodoLista.hpp"
#include <iostream>

class Lista {
private:
    NodoLista* cabeza;

public:
    Lista();
    ~Lista();

    bool estaVacia() const;
    
    void insertarEnOrden(Paciente p);
    
    void mostrar() const;
};

#endif