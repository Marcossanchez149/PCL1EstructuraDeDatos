#include "Paciente.hpp"

Paciente::Paciente() {
    dni = "";
    id = 0;
    habitacion = 0;
    sickness = true; 
}

Paciente::Paciente(std::string d, bool sickness) {
    dni = d;
    id = 0;
    habitacion = 0;
    this->sickness = sickness;
}

std::string Paciente::getDni() const { return dni; }
int Paciente::getId() const { return id; }
int Paciente::getHabitacion() const { return habitacion; }
bool Paciente::getSickness() const { return sickness; }

void Paciente::setDni(std::string d) { dni = d; }
void Paciente::setId(int i) { id = i; }
void Paciente::setHabitacion(int hab) { habitacion = hab; }
void Paciente::setSickness(bool sickness) { this->sickness = sickness; }