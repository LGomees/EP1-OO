#ifndef ARMADILHA_HPP
#define ARMADILHA_HPP

#include "elementosJogo.hpp"

class Armadilha : public ElementosJogo {

   private:
	int dano;

   public:
	Armadilha();
	~Armadilha();
	int getDano();
	void setDano(int dano);
};

#endif
