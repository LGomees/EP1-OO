#ifndef JOGADOR_HPP
#define JOGADOR_HPP

#include "elementosJogo.hpp"
#include "bonus.hpp"
#include "inimigo.hpp"
#include <iostream>
#include <string>

class Jogador : public ElementosJogo {

   private:
	bool vivo;
	bool ganhar;
	int pontos;

   public:
	Jogador();
	~Jogador();
	Jogador(bool vivo, int pontos, bool ganhar);
	~Jogador(bool vivo, int pontos, bool ganhar);
	bool getVivo();
	void setVivo(bool vivo);
	bool getGanhar();
	void setGanhar(bool ganhar);
	int getPontos();
	void setPontos(int pontos);
  void movimento();
  char getTecla();


};

#endif
