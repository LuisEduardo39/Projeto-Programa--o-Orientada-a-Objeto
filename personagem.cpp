#include "personagem.h"
#include <iostream>
#include <cstdlib>

Personagem::Personagem(){}
Personagem::Personagem(string n, int vm, int va, int d, int des, int niv, int r)
{
    nome = n;
    vidaM = vm;
    vidaA = va;
    dano = d;
    destreza = des;
    nivel = niv;
    raca = r;
}
//Personagem::~Personagem() {}

string Personagem::getNome() { return nome; }
int Personagem::getVidaM() { return vidaM; }
int Personagem::getVidaA() { return vidaA; }
int Personagem::getDano() { return dano; }
int Personagem::getDestreza() { return destreza; }
int Personagem::getNivel() { return nivel; }

int Personagem::tomaDano(int danoRecebido)
{
    vidaA -= danoRecebido;
    return 0;
}

void Personagem::lvlUp() { nivel++; }

void Personagem::regenVida(int regV)
{
    if ((regV + vidaA) < vidaM)
    {
        vidaA += regV;
    }
    else
    {
        vidaA = vidaM;
    }
}

void Personagem::printUI(){
    cout << nome << endl
    << "Vida: " << vidaA << "/" << vidaM << endl;
}