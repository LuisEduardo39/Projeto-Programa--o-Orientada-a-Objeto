#include "racas.h"

void apresentaRacas()
{
    cout
        << endl
        << "1. Humano: (+5 vida)" << endl
        << "2. Anao:   (+5 dano)" << endl
        << "3. Elfo:   (+5 destreza)" << endl
        << "4. Sair" << endl;
}

int escolhaRaca()
{
    int selRaca = 0;
    do
    {
        system("cls");
        cout << endl
             << "Escolha sua raca: " << endl;
        apresentaRacas();

        cin >> selRaca;
        system("cls");
    } while (selRaca < 1 || selRaca > 4);
    system("cls");

    return selRaca;
}