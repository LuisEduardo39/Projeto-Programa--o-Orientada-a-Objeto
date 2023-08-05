#include "personagem.h"
#include "rei.h"
#include <iostream>

Rei::Rei(string n, int vm, int va, int d, int des, int niv, int r, int desvio) : Personagem{n, vm, va, d, des, niv, r}, desvio{desvio} {}

string Rei::getNome() { return nome; }
int Rei::getVidaA() { return vidaA; }
int Rei::getDano() { return dano; }
int Rei::getDestreza() { return destreza; }
int Rei::getNivel() { return nivel; }

int Rei::tomaDano(int danoRecebido, int rng)
{
    if (rng < desvio)
    {
        regenVida(5);
    }
    vidaA -= danoRecebido;
    return 0;
}



void Rei::regenVida(int regV)
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

void Rei::printUI()
{
    cout << nome << endl
         << "Vida: " << vidaA << "/" << vidaM << endl;
}

int Rei::getCrit(int rng)
{
    return dano;
}