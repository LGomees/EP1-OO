#ifndef BONUS_HPP
#define BONUS_HPP

#include "elementosJogo.hpp"

class Bonus : public ElementosJogo {

   private:
	int pontos;

   public:
	int getPontos();
	void setPontos(int valor);

};

#endif
