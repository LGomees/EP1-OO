#include "inimigo.hpp"

using namespace std;

Inimigo::Inimigo()
    : ElementosJogo() {
    this->dano = 1;
    this->setTecla('#');
}

int Inimigo::getDano() {
    return this->dano;
}

void Inimigo::setDano(int valor) {
    this->dano = valor;
}
