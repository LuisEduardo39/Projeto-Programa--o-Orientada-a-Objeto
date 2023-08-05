#include "combate.h"


int combate(Personagem* player, Personagem* boss)
{
    do
    {
        system("cls");
        
        player->printUI();
        boss->printUI();
        system("pause");

        int maior = 100, menor = 0, n;
        
        if((rand() % (maior - menor + 1)) > ((rand() % (maior - menor + 1))+boss->getDestreza()))
        {
        boss->tomaDano(player->getCrit(rand() % (maior - menor + 1)));
        }

        if((rand() % (maior - menor + 1)) < ((rand() % (maior - menor + 1))+player->getDestreza()))
        player->tomaDano(boss->getCrit(rand() % (maior - menor + 1)));

    } while ((player->getVidaA() > 0) && (boss->getVidaA() > 0));
    return 0;
}