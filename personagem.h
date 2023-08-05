#ifndef PERSONAGEM_H
#define PERSONAGEM_H
#include <iostream>
#include <string>
using namespace std;

class Personagem
{
protected:
    string nome;
    int vidaM;
    int vidaA;
    int dano;
    int destreza;
    int nivel;
    int raca;

public:
    Personagem();
    Personagem(string, int, int, int, int, int, int);
    ~Personagem(){};
    void setNome(string n) { nome = n; }
    void setVidaM(int vm) { vidaM = vm; }
    void setVidaA(int va) { vidaA = va; }
    void setDano(int d) { dano = d; }
    void setDestreza(int des) { destreza = des; }
    void setNivel(int niv) { nivel = niv; }
    string getNome();
    int getVidaM();
    int getVidaA();
    int getDano();
    int getDestreza();
    int getNivel();
    virtual int tomaDano(int);
    virtual void lvlUp();
    void regenVida(int);
    virtual void printUI();
    virtual int getCrit(int){return dano;}
};

#endif // PERSONAGEM_H
