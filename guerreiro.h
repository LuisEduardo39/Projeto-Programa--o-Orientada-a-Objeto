#ifndef GUERREIRO_H
#define GUERREIRO_H
#include "personagem.h"
//possui a habilidade especial BLOQUEIO, que dá a chance de ignorar metade do dano de um ataque recebido

class Guerreiro : public Personagem 
{
protected:
     int block;
     int crit = 0;

public:
    Guerreiro(string, int, int, int, int, int, int, int = 10);

    void setVidaM(int vm) { vidaM + vm; }
    void setVidaA(int va) { vidaA + va; }
    void setDano(int d) { dano + d; }
    void setDestreza(int des) { destreza + des; }
    string getNome();
    int getVidaA();
    int getDano();
    int getDestreza();
    int getNivel();
    int tomaDano(int, int);
    void lvlUpDesc();
    void lvlUp();
    void regenVida(int);
    void printUI();
    int getCrit() {return dano;}
};

#endif // GUERREIRO_H
