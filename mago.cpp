#include "personagem.h"
#include "mago.h"
#include <random>
#include <iostream>

Mago::Mago(string n, int vm, int va, int d, int des, int niv, int r, int crit) : Personagem{n, vm, va, d, des, niv, r}, crit{crit} {}

string Mago::getNome() { return nome; }
int Mago::getVidaA() { return vidaA; }
int Mago::getDano() { return dano; }
int Mago::getDestreza() { return destreza; }
int Mago::getNivel() { return nivel; }

int Mago::tomaDano(int danoRecebido, int rng)
{
    vidaA -= danoRecebido;
    return 0;
}

void Mago::lvlUpDesc()
{
    cout << "Parabens, seu mago subiu de nivel e agora esta no nivel " << nivel << "!" << endl
         << "Voce recebeu 10 pontos para distribuir em seus atributos, alem de 5% a mais de chance de bonus magico!" << endl
         << "Seu personagem se curou em 20%!" << endl
         << endl
         << "\nVida: " << vidaM << endl
         << "\nDano: " << dano << endl
         << "\nDestreza: " << destreza << endl
         << endl;
}

void Mago::lvlUp()
{
    vidaA += vidaA / 5;
    nivel++;
    crit+=5;
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

void Mago::regenVida(int regV)
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

void Mago::printUI()
{
    cout << nome << endl
         << "Vida: " << vidaA << "/" << vidaM << endl;
}

int Mago::getCrit(int rng){
    if(crit > rng)
    {
        return (dano*2);
    }
    else {return dano;}
}