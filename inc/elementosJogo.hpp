#ifndef ELEMENTOSJOGO_HPP
#define ELEMENTOSJOGO_HPP

using namespace std;

class ElementosJogo {

private:
	int posicaoX;
	int posicaoY;
	char tecla;
  

    public:
  ElementosJogo();
  int getPosicaoX();
	void setPosicaoX(int valorX);
	int getPosicaoY();
	void setPosicaoY(int valorY);
	char getTecla();
	void setTecla(char tecla);

};

#endif
