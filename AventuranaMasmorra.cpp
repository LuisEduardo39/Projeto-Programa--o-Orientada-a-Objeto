#include <iostream> // entrada e saída, como o stdio em C
#include <cstdlib>
#include <string>
#include <locale.h>
#include <time.h>

#include "racas.h"
#include "guerreiro.h"
#include "arqueiro.h"
#include "mago.h"
#include "historia.h"
#include "personagem.h"
#include "aranha.h"
#include "combate.h"
#include "rei.h"

using namespace std; //facilita a implementação do std para cout e cin

int main()
{
  srand(time(NULL));

  int maior = 100;
  int menor = 0;

    Personagem* jogador;

  setlocale(LC_ALL, "Portuguese"); // #include <locale.h>

  introducao();

  int selCla = 0, pontos = 25;
  int vid = 0, dan = 0, des = 0, aux = 0, raca;
  char nome[120]; //nomes estão limitados a 120 caracteres (é bastante coisa!)

  cout << "Nomeie seu personagem: ";
  cin.getline(nome, 120);

  raca = escolhaRaca();
  switch (raca)
  {
  case HUMANO:
    vid += 5;
    break;
  case ANAO:
    dan += 5;
    break;
  case ELFO:
    des += 5;
    break;
  }

  cout << "Escolha sua classe:\n"
       << endl
       << "1. Guerreiro   (habilidade especial BLOQUEIO)" << endl
       << "2. Mago        (habilidade especial BONUS MAGICO)" << endl
       << "3. Arqueiro    (habilidade especial DESVIO)" << endl
       << "4. Sair" << endl;
  cin >> selCla;
  system("cls");
  switch (selCla)
  {
  case 1:
  {
    /*----------------------------------------------------Guerreiro(a)----------------------------------------------------*/
    cout << "Voce optou por seguir o caminho mais dificil! Mas se for sabio sempre havera gloria! \n\n";
    system("pause");
    system("cls");
    cout << "Voce recebeu de seus Deuses 25 pontos para seus atributos!\n";
    cout << "Forte guerreiro, realize a atribuicao de seus pontos (USE-OS COM SABEDORIA!)\n"
         << endl;
    system("pause");
    system("cls");
    cout << "Pontos disponiveis: " << pontos << endl;
    cout << "\nVida:";
    cin >> aux;
    vid += aux;
    system("cls");
    if (aux > 25 || aux == 25 || aux < 0)
    {
      cout << "\nVoce atribuiu todos seus pontos a sua vida, agora encare as consequencias!" << endl;
      cout << "\nVida: " << vid << endl;
      cout << "\nDano: " << dan << endl;
      cout << "\nDestreza: " << des << endl;
      break;
      system("pause");
      system("cls");
    }
    if (vid < 25 && vid > 0)
    {
      pontos -= aux;
      cout << "\nPontos disponiveis: " << pontos << endl;
      cout << "\nVida: " << vid << endl;
      cout << "\nDano:";
      cin >> aux;
      dan += aux;
      system("cls");
      if (aux == pontos || aux > pontos || aux < 0)
      {
        cout << "\nVoce atribuiu todo o restante dos seus pontos ao seu dano, agora encare as consequencias! " << endl;
        system("pause");
        system("cls");
      }
      else
      {
        pontos -= aux;
        des += pontos;
        cout << "\nVida: " << vid << endl;
        cout << "\nDano: " << dan << endl;
        cout << "\nSua Destreza ficou com : " << (des + pontos) << "\n"
             << endl;
        system("pause");
        system("cls");
        cout << "\n Que a força dos Deuses o ajude em sua jornada!\n"
             << endl;
        system("pause");
        system("cls");
      }
    }
    jogador = new Guerreiro{nome, vid, vid, dan, des, 1, raca, 10};
    break;
  }
  case 2:
  {
    /*----------------------------------------------------Mago----------------------------------------------------*/
    cout << "Sua escolha foi seguir o ensinamento dos Magos\n\n";
    system("pause");
    system("cls");
    cout << "Voce recebeu atraves de sua fe e inteligencia 25 pontos para seus atributos!\n";
    cout << "Sabio Mago, realize a atribuicao de seus pontos (USE-OS atraves da sua SABEDORIA!)\n"
         << endl;
    system("pause");
    system("cls");
    cout << "Pontos disponiveis: " << pontos << endl;
    cout << "\nVida:";
    cin >> aux;
    vid += aux;
    system("cls");
    if (aux > 25 || aux == 25 || aux < 0)
    {
      cout << "\nVoce atribuiu todos seus pontos a sua vida, agora encare as consequencias!" << endl;
      cout << "\nVida: " << vid << endl;
      cout << "\nDano: " << dan << endl;
      cout << "\nDestreza: " << des << endl;
      system("pause");
      system("cls");
      break;
    }
    if (aux < 25 && aux > 0)
    {
      pontos = pontos - aux;
      cout << "\nPontos disponiveis: " << pontos << endl;
      cout << "\nVida: " << vid << endl;
      cout << "\nDano:";
      cin >> aux;
      dan += aux;
      system("cls");
      if (aux == pontos || aux > pontos || aux < 0)
      {
        cout << "\nVoce atribuiu todo o restante dos seus pontos ao seu dano, agora encare as consequencias! " << endl;

        cout << "\nVida: " << vid << endl;
        cout << "\nDano: " << dan << endl;
        cout << "\nDestreza: " << des << endl;
        system("pause");
        system("cls");
      }
      else
      {
        pontos = pontos - aux;
        des += pontos;
        cout << "\nVida: " << vid << endl;
        cout << "\nDano: " << dan << endl;
        cout << "\nSua Destreza ficou com : " << (des + pontos) << "\n"
             << endl;
        system("pause");
        system("cls");
        cout << "\n Que todo seu aprendizado e poder o proteja em sua jornada!\n"
             << endl;
        system("pause");
        system("cls");
      }
    }

    jogador = new Mago(nome, vid, vid, dan, des, 1, raca, 5);
    break;
  }
  case 3:
  {
    /*----------------------------------------------------Arqueiro----------------------------------------------------*/
    cout << "Sua escolha foi seguir o dom dos arqueiros\n\n";
    system("pause");
    system("cls");
    cout << "Voce recebeu atraves de sua experiencia em batalha 25 pontos para seus atributos!\n";
    cout << "Honrado arqueiro, realize a atribuicao de seus pontos (USE-OS atraves da sua SABEDORIA!)\n"
         << endl;
    system("pause");
    system("cls");
    cout << "Pontos disponiveis: " << pontos << endl;
    cout << "\nVida:";
    cin >> aux;
    vid += aux;
    system("cls");
    if (aux > 25 || aux == 25 || aux < 0)
    {
      cout << "\nVoce atribuiu todos seus pontos a sua vida, agora encare as consequencias!" << endl;
      cout << "\nVida: " << vid << endl;
      cout << "\nDano: " << dan << endl;
      cout << "\nDestreza: " << des << endl;
      system("pause");
      system("cls");
      break;
    }
    if (aux < 25 && aux > 0)
    {
      pontos = pontos - aux;
      cout << "\nPontos disponiveis: " << pontos << endl;
      cout << "\nVida: " << vid << endl;
      cout << "\nDano:";
      cin >> aux;
      dan += aux;
      system("cls");
      if (aux == pontos || aux > pontos || aux < 0)
      {
        cout << "\nVoce atribuiu todo o restante dos seus pontos ao seu dano, agora encare as consequencias! " << endl;
        cout << "\nVida: " << vid << endl;
        cout << "\nDano: " << dan << endl;
        cout << "\nDestreza: " << des << endl;
        system("pause");
        system("cls");
      }
      else
      {
        pontos = pontos - aux;
        des += pontos;
        cout << "\nVida: " << vid << endl;
        cout << "\nDano: " << dan << endl;
        cout << "\nSua Destreza ficou com : " << des << "\n"
             << endl;
        system("pause");
        system("cls");
        cout << "\n Que todo seu treinamento o ajude em sua jornada!\n"
             << endl;
        system("pause");
        system("cls");
      }
    }
    jogador = new Arqueiro{nome, vid, vid, dan, des, 1, raca, 5};
    break;
  }
  default:
  {
    return 0;
    break;
  }
  }
  
  Personagem* vetor_inimigos[4];
  Personagem* b1 = new Guerreiro{"Gigante do Pantano", 20, 20, 2, 0, 1, 0, 20};
  Personagem* b2 = new Arqueiro{"Hydra, a Sentinela das Sombras", 20, 20, 3, 30, 2, 0, 15};
  Personagem* b3 = new Aranha{"Nakja, a Devoradora de Homens", 30, 30, 4, 0, 3, 0, 20};
  Personagem* b4 = new Mago{"Bruxas do Nevoeiro", 30, 30, 10, 0, 5, 0, 25};
  Personagem* b5 = new Rei{"Vedrak o Conquistador", 50, 50, 6, 10, 5, 1, 33};

  vetor_inimigos[0] = b1;
  vetor_inimigos[1] = b2;
  vetor_inimigos[2] = b3;
  vetor_inimigos[3] = b4;
  vetor_inimigos[4] = b5;

  


  
  parte1();
  boss1();
  combate(jogador, vetor_inimigos[0]);
  if(jogador->getVidaA() <= 0){perde(); return 0;}
  jogador->lvlUp();
  system("cls");
  boss2();
  combate(jogador, vetor_inimigos[1]);
  if(jogador->getVidaA() <= 0){perde(); return 0;}
  jogador->lvlUp();
    system("cls");
    boss3();
  combate(jogador, vetor_inimigos[2]);
  if(jogador->getVidaA() <= 0){perde(); return 0;}
  jogador->lvlUp();
    system("cls");
    boss4();
  combate(jogador, vetor_inimigos[3]);
  if(jogador->getVidaA() <= 0){perde(); return 0;}
  jogador->lvlUp();
    system("cls");
    boss5();
  combate(jogador, vetor_inimigos[4]);
  if(jogador->getVidaA() <= 0){perde(); return 0;}
  final();




  return 0;
}
