#include "jogador.hpp"
#include "ElementosJogo.hpp"

Jogador::Jogador(){}

Jogador::Jogador(char tecla, int posicaoX, int posicaoY){
  this->tecla = tecla;
  this->posicaoX = posicaoX;
  this->posicaoY = posicaoY;
}

void Jogador::setPosicaoX(int valor){

	this->posicaoX += valor;
}

void Jogador::setPosicaoY(int valor){
	this->posicaoY += valor;
}

void Jogador::setTecla(char tecla){
  this->tecla = tecla;
}

int Jogador::getPosicaoX(){
	return this->posicaoX;
}

int Jogador::getPosicaoY(){
	return this->posicaoY;
}

int Jogador::getTecla(){
  return this->tecla;
}
