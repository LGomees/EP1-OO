#include <iostream>
#include "mapa.hpp"
#include <fstream>
#include <string>
#include <ncurses.h>
#include <stdio_ext.h>
#include "jogador.hpp"
#include "elementosJogo.hpp"

using namespace std;

Mapa::Mapa(){}

void Mapa::setDistancia(){

	ifstream mapa ("mapa_lab.txt");

	string aux;

	for(int i = 0; i < 20; i++){
		getline(mapa, aux);
		for(int u = 0; u < 50; u++){
			this->distancia[i][u] = aux[u];
		}
	}

	mapa.close();
}

void Mapa::getDistancia(){

		for(int i = 0; i < 20; i++){
			for(int u = 0; u < 50; u++){
		 		printw("%c", this->distancia[i][u]);
		 		if(u >= 49){
		 			printw("\n");
		 		}
		}
	}
}

void Mapa::addElemento(char tecla, int posicaoX, int posicaoY){

	this->distancia[posicaoY][posicaoX] = tecla;

}
