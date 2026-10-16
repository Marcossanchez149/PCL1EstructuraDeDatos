#ifndef CONTROLADOR_HPP
#define CONTROLADOR_HPP

#include "Pila.hpp"
#include "Cola.hpp"
#include "Lista.hpp"
#include <string>

class Controlador {
private:
    Pila pilaPacientes;
    Cola salaA;
    Cola salaB;
    Cola salaC;
    Cola salaD;
    
    Lista quirofanoApendicitis;
    Lista quirofanoHernias;
    std::string generarDniAleatorio();
    bool generarEnfermedadAleatoria();

public:
    Controlador();
    ~Controlador();

    int pacientesEnPila();
    int pacientesEnSalaA();
    int pacientesEnSalaB();
    int pacientesEnSalaC();
    int pacientesEnSalaD();
    int pacientesEnListaApendicitis();
    int pacientesEnListaHernias();

    void genera12Pacientes();
    void muestraPacientes();
    void borraPacientesPila();
    
    void encolarPacientes();
    void muestraPacientesSalasAyB();
    void muestraPacientesSalasCyD();
    void borraPacientesColas();
    
    void enlistarPacientes();
    void muestraPacientesApendicitis();
    void muestraPacientesHernias();
    
    void buscarPacientes();
    void reiniciar();
};

#endif