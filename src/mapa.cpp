#include <iostream>
#include "mapa.hpp"
#include <fstream>
#include <string>
#include <ncurses.h>
#include <stdio_ext.h>
#include "jogador.hpp"
#include "elementosJogo.hpp"

using namespace std;

Mapa::Mapa() {}

void Mapa::setDistancia() {

    ifstream mapa("doc/mapa_lab.txt");

    string aux;

    for (int i = 0; i < 20; i++) {
        getline(mapa, aux);
        for (int u = 0; u < 50; u++) {
            this->distancia[i][u] = aux[u];
        }
    }

    this->ultimoX = 2;
    this->ultimoY = 2;
    mapa.close();
}

void Mapa::getDistancia() {

    for (int i = 0; i < 20; i++) {
        for (int u = 0; u < 50; u++) {
            printw("%c", this->distancia[i][u]);
            if (u >= 49) {
                printw("\n");
            }
        }
    }
}

void Mapa::addElemento(ElementosJogo *elemento) {
    this->distancia[this->ultimoY][this->ultimoX] = '-';
    this->distancia[elemento->getPosicaoY()][elemento->getPosicaoX()] = elemento->getTecla();
    this->ultimoX = elemento->getPosicaoX();
    this->ultimoY = elemento->getPosicaoY();
}

bool Mapa::pode_mover(ElementosJogo *elemento) {
    bool flag = this->distancia[elemento->getPosicaoY()][elemento->getPosicaoX()] == '-';

    if (!flag) {
        if (this->distancia[elemento->getPosicaoY()][elemento->getPosicaoX()] == '8') { // ganhou
            printw("VOCE GANHOU!!!!!");
            return true;
        }
    }
    return flag;
}
