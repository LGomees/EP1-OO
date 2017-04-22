#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <unistd.h>
#include <ncurses.h>
#include <stdio_ext.h>
#include "mapa.hpp"
#include "jogador.hpp"
#include "elementosJogo.hpp"


using namespace std;


int main() {

    Mapa *mapa = new Mapa();
    mapa->setDistancia();


    Jogador *jogador = new Jogador('@', 2, 2);

    char a = 'a';

    while (TRUE) {

        initscr();
        clear();
        keypad(stdscr, TRUE);
        noecho();

        if (mapa->pode_mover(jogador)) {
            mapa->addElemento(jogador);
        } else {
            jogador->voltar_movimento();
        }
        mapa->getDistancia();


        jogador->movimento();


        refresh();
        endwin();
    }

    return 0;
}
