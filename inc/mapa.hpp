#ifndef MAPA_HPP
#define MAPA_HPP

class Mapa {

   private:
	    char distancia[20][50];
   public:
	     Mapa();
	     
      void setDistancia();
      void getDistancia();
      void addElemento(char tecla, int posicaoX, int posicaoY);
};

#endif
