#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include "elementosJogo.hpp"
#include <iostream>
#include <string>

using namespace std;

class Jogador : public ElementosJogo {

   private:
	bool vivo;
	bool ganhar;
	int pontos;
  int ultimoX;
  int ultimoY;

   public:
	Jogador();
  ~Jogador();
	Jogador(char tecla, int posicaoX, int posicaoY);

  void movimento();

	bool getVivo();
	void setVivo(bool vivo);
	bool getGanhar();
	void setGanhar(bool ganhar);
	int getPontos();
	void setPontos(int pontos);

  void voltar_movimento();

};

#endif
