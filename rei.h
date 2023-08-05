#ifndef REI_H
#define REI_H
#include "personagem.h"
//possui a habilidade especial REGEN, que dá chance de recuperar 5 de vida quando é atingido
class Rei : public Personagem
{
protected:
    int desvio;

public:
    Rei(string, int, int, int, int, int, int, int = 5);

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
    void regenVida(int);
    void printUI();
    int getCrit(int);
};

#endif // REI_H
