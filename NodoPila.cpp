#include "NodoPila.hpp"

NodoPila::NodoPila(Paciente p, NodoPila* sig) {
    paciente = p;
    siguiente = sig;
}