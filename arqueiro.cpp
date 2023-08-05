#include "personagem.h"
#include "arqueiro.h"
#include <iostream>

Arqueiro::Arqueiro(string n, int vm, int va, int d, int des, int niv, int r, int desvio) : Personagem{n, vm, va, d, des, niv, r}, desvio{desvio} {}

string Arqueiro::getNome() { return nome; }
int Arqueiro::getVidaA() { return vidaA; }
int Arqueiro::getDano() { return dano; }
int Arqueiro::getDestreza() { return destreza; }
int Arqueiro::getNivel() { return nivel; }

int Arqueiro::tomaDano(int danoRecebido, int rng)
{
    if (rng < desvio)
    {
        return 2;
    }
    vidaA -= danoRecebido;
    return 0;
}

void Arqueiro::lvlUpDesc()
{
    cout << "Parabens, seu arqueiro subiu de nivel e agora esta no nivel " << nivel << "!" << endl
         << "Voce recebeu 10 pontos para distribuir em seus atributos, alem de 5% a mais de chance de desvio!" << endl
         << "Seu personagem se curou em 20%!" << endl
         << endl
         << "\nVida: " << vidaM << endl
         << "\nDano: " << dano << endl
         << "\nDestreza: " << destreza << endl
         << endl;
}

void Arqueiro::lvlUp()
{
    vidaA += vidaA / 5;
    nivel++;
    desvio += 5;
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

void Arqueiro::regenVida(int regV)
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

void Arqueiro::printUI()
{
    cout << nome << endl
         << "Vida: " << vidaA << "/" << vidaM << endl;
}

int Arqueiro::getCrit(int rng)
{
    return dano;
}