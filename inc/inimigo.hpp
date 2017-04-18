#ifndef ARMADILHA_HPP
#define ARMADILHA_HPP

#include "elementosJogo.hpp"

class Inimigo : public ElementosJogo {

   private:
	int dano;

   public:
	Inimigo();
	~Inimigo();
	int getDano();
	void setDano(int dano);
};

#endif
