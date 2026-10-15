#include "Cola.hpp"

Cola::Cola() {
    frente = nullptr;
    final = nullptr;
    tamano = 0;
}

Cola::~Cola() {
    while (!estaVacia()) {
        desencolar();
    }
}

bool Cola::estaVacia() const {
    return frente == nullptr;
}

int Cola::getTamano() const {
    return tamano;
}

void Cola::encolar(Paciente p) {
    NodoCola* nuevoNodo = new NodoCola(p);
    
    if (estaVacia()) {
        frente = nuevoNodo;
    } else {
        final->siguiente = nuevoNodo;
    }
    
    final = nuevoNodo;
    tamano++;
}

Paciente Cola::desencolar() {
    if (estaVacia()) {
        throw std::runtime_error("Error: La cola está vacía. No hay pacientes para desencolar.");
    }

    NodoCola* nodoAEliminar = frente;
    Paciente p = nodoAEliminar->paciente;
    
    frente = frente->siguiente;
    
    if (frente == nullptr) {
        final = nullptr;
    }

    delete nodoAEliminar;
    tamano--;

    return p;
}

Paciente Cola::verFrente() const {
    if (estaVacia()) {
        throw std::runtime_error("Error: La cola está vacía.");
    }
    return frente->paciente;
}