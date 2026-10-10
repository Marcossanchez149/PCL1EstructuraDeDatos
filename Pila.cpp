#include "Pila.hpp"

Pila::Pila() {
    cima = nullptr;
}

Pila::~Pila() {
    while (!estaVacia()) {
        desapilar();
    }
}

bool Pila::estaVacia() const {
    return cima == nullptr;
}

void Pila::apilar(Paciente p) {
    Nodo* nuevoNodo = new Nodo();
    nuevoNodo->paciente = p;
    nuevoNodo->siguiente = cima;
    cima = nuevoNodo;
}

Paciente Pila::desapilar() {
    if (estaVacia()) {
        throw std::runtime_error("Error: La pila está vacía. No hay pacientes para desapilar.");
    }

    Nodo* nodoAEliminar = cima;
    Paciente p = nodoAEliminar->paciente;
    
    cima = cima->siguiente;
    delete nodoAEliminar;

    return p;
}

Paciente Pila::verCima(){
    if(estaVacia()){
        throw std::runtime_error("Error: La pila está vacía. No hay pacientes en la cima.");
    }
    return cima->paciente;
}