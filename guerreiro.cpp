#include "personagem.h"
#include "guerreiro.h"
#include <random>
#include <iostream>

Guerreiro::Guerreiro(string n, int vm, int va, int d, int des, int niv, int r, int b) : Personagem{n, vm, va, d, des, niv, r}, block{b} {}

string Guerreiro::getNome() { return nome; }
int Guerreiro::getVidaA() { return vidaA; }
int Guerreiro::getDano() { return dano; }
int Guerreiro::getDestreza() { return destreza; }
int Guerreiro::getNivel() { return nivel; }

int Guerreiro::tomaDano(int danoRecebido, int rng)
{
    if (rng < block)
    {
        danoRecebido = danoRecebido / 2;
        vidaA -= danoRecebido;
        return 1;
    }
    vidaA -= danoRecebido;
    return 0;
}

void Guerreiro::lvlUpDesc()
{
    cout << "Parabens, seu guerreiro subiu de nivel e agora esta no nivel " << nivel << "!" << endl
         << "Voce recebeu 10 pontos para distribuir em seus atributos, alem de 10% a mais de chance de block!" << endl
         << "Seu personagem se curou em 20%!" << endl
         << endl
         << "\nVida: " << vidaM << endl
         << "\nDano: " << dano << endl
         << "\nDestreza: " << destreza << endl
         << endl;
}

void Guerreiro::lvlUp()
{
    vidaA += vidaA / 5;
    nivel++;
    block += 10;
    int pontos = 10, aux = -1;

    do
    {

        system("cls");
        lvlUpDesc();
        cout << "Voce tem " << pontos << " pontos, quantos gostaria de colocar em Vida?";
        cin >> aux;
    } while (aux > pontos || aux < 0);
    pontos -= aux;
    vidaM += aux;
    vidaA += aux;
    aux = -1;
    if (pontos > 0)
    {
        do
        {
            system("cls");
            lvlUpDesc();
            cout << "Voce tem " << pontos << " pontos, quantos gostaria de colocar em Dano?";
            cin >> aux;
        } while (aux > pontos || aux < 0);
        pontos -= aux;
        dano += aux;
        aux = -1;
    }
    if (pontos > 0)
    {
        destreza += pontos;
        system("cls");
        lvlUpDesc();
        cout << "Os " << pontos << " pontos restantes foram colocados em Destreza!" << endl;
    }
    system("pause");
}

void Guerreiro::regenVida(int regV)
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

void Guerreiro::printUI()
{
    cout << nome << endl
         << "Vida: " << vidaA << "/" << vidaM << endl;
}