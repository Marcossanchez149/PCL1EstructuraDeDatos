#include <iostream>
#include <string>
using namespace std;

class Paciente {
private:
    std::string dni;
    int id;               
    int habitacion;       
    bool sickness;

public:
    Paciente();
    Paciente(std::string d, bool sickness);

    std::string getDni() const;
    int getId() const;
    int getHabitacion() const;
    bool getSickness() const;

    void setDni(std::string d);
    void setId(int i);
    void setHabitacion(int hab);
    void setSickness(bool sickness);
};