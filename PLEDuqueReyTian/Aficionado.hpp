#ifndef AFICIONADO_HPP
#define AFICIONADO_HPP

#include <cstdlib> 
#include <iomanip> // Para setw y left

class Aficionado
{
private:

//ATRIBUTOS
    int identificador;
    int horaLlegada; // minutos
    bool isSocio; // True == Socio ; False = Simpatizante
    
public:
    Aficionado();
    ~Aficionado();
    
    Aficionado(int identificador, bool isSocio, int horaLlegada);
    void mostrar();
    
    int getIdentificador();
    int getHoraLlegada();
};

#endif // AFICIONADO_HPP
