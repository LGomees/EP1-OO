#include <iostream>
#include "mapa.hpp"
#include <string>
#include <ncurses.h>

Mapa::Mapa(){}

void Mapa::setDistancia(){

	ifstream mapa ("mapa_lab.txt");

	string aux;

	for(int i = 0; i <= 19; i++){
		getline(mapa, aux);
		for(int u = 0; u <= 49; u++){
			this->distancia[i][u] = aux [u];
		}
	mapa.close();
}
