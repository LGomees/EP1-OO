#include <iostream>
#include <ncurses.h>
#include "elementosJogo.hpp"

using namespace std;

ElementosJogo::ElementosJogo(){
  this->posicaoX = 0;
  this->posicaoY = 0;
  this->tecla = '\0';
}

void ElementosJogo::setPosicaoX(int valorX){

  this->posicaoX = valorX;
}

void ElementosJogo::setPosicaoY(int valorY){
  this->posicaoY = valorY;
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
