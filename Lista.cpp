#include "Lista.hpp"

Lista::Lista() {
    cabeza = nullptr;
}

Lista::~Lista() {
    NodoLista* actual = cabeza;
    while (actual != nullptr) {
        NodoLista* siguiente = actual->siguiente;
        delete actual;
        actual = siguiente;
    }
}

bool Lista::estaVacia() const {
    return cabeza == nullptr;
}

void Lista::insertarEnOrden(Paciente p) {
    NodoLista* nuevoNodo = new NodoLista(p);

    if (cabeza == nullptr || cabeza->paciente.getId() >= p.getId()) {
        nuevoNodo->siguiente = cabeza;
        cabeza = nuevoNodo;
    } 
    else {
        NodoLista* actual = cabeza;
        while (actual->siguiente != nullptr && actual->siguiente->paciente.getId() < p.getId()) {
            actual = actual->siguiente;
        }
        nuevoNodo->siguiente = actual->siguiente;
        actual->siguiente = nuevoNodo;
    }
}

void Lista::mostrar() const {
    if (estaVacia()) {
        std::cout << "  (Lista vacia)" << std::endl;
        return;
    }
    
    NodoLista* actual = cabeza;
    while(actual != nullptr) {
        std::string enfermedad = actual->paciente.getSickness() ? "Apendicitis" : "Hernia";
        std::cout << "  -> Paciente [ID: " << actual->paciente.getId() 
                  << " | DNI: " << actual->paciente.getDni() 
                  << " | Hab: " << actual->paciente.getHabitacion() 
                  << " | " << enfermedad << "]" << std::endl;
        
        actual = actual->siguiente;
    }
}