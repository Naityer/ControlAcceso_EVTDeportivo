#include <cstdlib> 

#ifndef AFICIONADO_HPP
#define AFICIONADO_HPP

class Aficionado
{
public:
    Aficionado();
    ~Aficionado();

private:

//ATRIBUTOS
    int identificador;
    int horaLlegada; // minutos
    bool isSocio; // True == Socio ; False = Simpatizante

};

#endif // AFICIONADO_HPP
