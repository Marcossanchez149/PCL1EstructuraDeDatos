#include <iostream>
#include <string>
using namespace std;

class Pila {
private:
    Nodo* cima;

public:
    Pila();
    ~Pila();
    void apilar(Paciente p);
    Paciente desapilar();
    bool estaVacia() const;
    Paciente verCima();
};