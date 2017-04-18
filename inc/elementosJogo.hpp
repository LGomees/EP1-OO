#ifndef ELEMENTOSJOGO_HPP
#define ELEMENTOSJOGO_HPP

using namespace std;


class ElementosJogo {

   private:
	int posicaoX;
	int posicaoY;
	char tecla;

   public:
	int getPosicaoX();
	void setPosicaoX(int posicaoX);
	int getPosicaoY();
	void setPosicaoY(int posicaoY);
	char getTecla();
	void setTecla(char tecla);

};

#endif
