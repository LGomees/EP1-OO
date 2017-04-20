#include "jogador.hpp"
#include "elementosJogo.hpp"
#include <stdio.h>
#include <ncurses.h>
#include "mapa.hpp"
#include <iostream>

using namespace std;

Jogador::Jogador(){}

Jogador::Jogador(char tecla, int posicaoX, int posicaoY){
  setTecla(tecla);
  setPosicaoX(posicaoX);
  setPosicaoY(posicaoY);
}


void Jogador::movimento(){

        char direcao;

        direcao = getch();

        if(direcao == 'w'){
                this->setPosicaoY(this->getPosicaoY()-1);
        }
        else if (direcao == 's'){
                this->setPosicaoY(this->getPosicaoY()+1);
        }
        else if (direcao == 'a'){
                this->setPosicaoX(this->getPosicaoX()-1);
        }
        else if (direcao == 'd'){
                this->setPosicaoX(this->getPosicaoX()+1);
        }

}
