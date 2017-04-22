#include "jogador.hpp"
#include "elementosJogo.hpp"
#include <stdio.h>
#include <ncurses.h>
#include "mapa.hpp"
#include <iostream>
#include "bonus.hpp"

using namespace std;


Jogador::Jogador(char tecla, int posicaoX, int posicaoY){
  setTecla(tecla);
  setPosicaoX(posicaoX);
  setPosicaoY(posicaoY);
}


void Jogador::movimento() {
    char direcao;
    direcao = getch();
    this->ultimoX = this->getPosicaoX();
    this->ultimoY = this->getPosicaoY();
    if (direcao == 'w') {
        this->setPosicaoY(max(0, this->getPosicaoY() - 1));
    } else if (direcao == 's') {
        this->setPosicaoY(min(19, this->getPosicaoY() + 1));
    } else if (direcao == 'a') {
        this->setPosicaoX(max(0, this->getPosicaoX() - 1));
    } else if (direcao == 'd') {
        this->setPosicaoX(min(49, this->getPosicaoX() + 1));
    }
}

void Jogador::voltar_movimento() {
    this->setPosicaoX(this->ultimoX);
    this->setPosicaoY(this->ultimoY);
}

Jogador::Jogador()
    : ElementosJogo() {
    this->vida = 1;
    this->pontos = 0;
}

int Jogador::getPontos() {
    return this->pontos;
}

void Jogador::setPontos(int valor) {
    this->pontos = valor;
}

int Jogador::getVida() {
    return this->vida;
}

void Jogador::setVida(int valor) {
    this->vida = valor;
}
