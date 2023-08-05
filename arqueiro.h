#ifndef ARQUEIRO_H
#define ARQUEIRO_H
#include "personagem.h"
//possui a habilidade especial DESVIO, que dá a chance de ignorar um ataque recebido

class Arqueiro : public Personagem
{
protected:
    int desvio;

public:
    Arqueiro(string, int, int, int, int, int, int, int = 5);

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
    int getCrit(int);
};

#endif // ARQUEIRO_H
