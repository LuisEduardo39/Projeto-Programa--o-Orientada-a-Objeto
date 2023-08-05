#include "personagem.h"
#include "aranha.h"
#include <random>
#include <iostream>

Aranha::Aranha(string n, int vm, int va, int d, int des, int niv, int r, int v) : Personagem{n, vm, va, d, des, niv, r}, veneno{v} {}

string Aranha::getNome() { return nome; }
int Aranha::getVidaA() { return vidaA; }
int Aranha::getDano() { return dano; }
int Aranha::getDestreza() { return destreza; }
int Aranha::getNivel() { return nivel; }

int Aranha::tomaDano(int danoRecebido, int rng)
{
    vidaA -= danoRecebido;
    return 0;
}

void Aranha::printUI()
{
    cout << nome << endl
         << "Vida: " << vidaA << "/" << vidaM << endl;
}

int Aranha::getCrit(int rng)
{
    if (veneno > rng)
    {
        return dano+3;
    }
    else
    {
        return dano;
    }
}