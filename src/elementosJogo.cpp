#include <iostream>
#include <ncurses.h>
#include "elementosJogo.hpp"

using namespace std;

void ElementosJogo::setPosicaoX(int posicaoX){

  this->posicaoX += posicaoX;
}

void ElementosJogo::setPosicaoY(int posicaoY){
  this->posicaoY += posicaoY;
}

void ElementosJogo::setTecla(char tecla){
  this->tecla = tecla;
}

int ElementosJogo::getPosicaoX(){
  return this->posicaoX;
}

int ElementosJogo::getPosicaoY(){
  return this->posicaoY;
}

char ElementosJogo::getTecla(){
  return this->tecla;
}
