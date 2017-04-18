#include <iostream>
#include <string>
#include <ncurses.h>
#include "mapa.hpp"
#include "jogador.hpp"


using namespace std;

int main(){

	Mapa * mapa = new Mapa ();
	mapa->setDistancia();

	char a = 'a';
	while(TRUE){
		initscr();
		clear();
		keypad(stdscr, TRUE);
		noecho();

		

		refresh();
		endwin();
	}
return 0;
}
