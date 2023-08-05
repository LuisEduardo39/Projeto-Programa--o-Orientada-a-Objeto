#ifndef ARANHA_H
#define ARANHA_H
#include "personagem.h"
//possui a habilidade especial VENENO, que pode dar dano adicional

class Aranha : public Personagem
{
protected:
    int veneno;

public:
    Aranha(string, int, int, int, int, int, int, int = 10);

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
    void printUI();
    int getCrit(int);
};

#endif // ARANHA_H
