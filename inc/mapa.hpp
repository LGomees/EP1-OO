#ifndef MAPA_HPP
#define MAPA_HPP

#include "elementosJogo.hpp"

class Mapa {

private:
    char distancia[20][50];
    int ultimoX;
    int ultimoY;
public:
    Mapa();

    void setDistancia();
    void getDistancia();
    void addElemento(ElementosJogo *elemento);

    bool pode_mover(ElementosJogo *elemento);
};

#endif
