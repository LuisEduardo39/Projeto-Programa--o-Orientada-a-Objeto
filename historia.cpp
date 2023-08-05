#include "historia.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
//todos os codigos abaixo referem-se apenas a textos do enredo da historia, a fim de nao poluir a função main;

void introducao()
{ //texto inicial

  cout << "\n"
       << endl;
  cout << "          >>------------------------------------------------------------------------<<" << endl;
  cout << "          >>------------------------->>Fantasia<<-----------------------------------<<" << endl;
  cout << "          >>------------------------->>Medieval<<-----------------------------------<<" << endl;
  cout << "          >>------------------------------------------------------------------------<<" << endl;
  cout << "\n"
       << endl;
  cout << "          > Numa terra distante onde habitavam desde anoes centenarios ate gigantes  <" << endl;
  cout << "          > vindos das profundesas da terra, havia um reino guardado por guerreiros  <" << endl;
  cout << "          > dos mais fortes e magos sabios e extremamente poderosos.                 <" << endl;
  cout << "          >                                                                          <" << endl;
  cout << "          > O Rei, que um dia foi um bravo conquistador, ja era um morto em  meio a  <" << endl;
  cout << "          > ruinas de pedras. Seu castelo e suas terras ja haviam sido tomadas pela  <" << endl;
  cout << "          > escuridao e os povos ja estavam a beira da extincao. Criaturas das mais  <" << endl;
  cout << "          > perversas tomaram  conta dos campos e florestas, e o caos foi espalhado. <" << endl;
  cout << "          >                                                                          <" << endl;
  cout << "          > Uma professia antiga dizia que um Humano retornaria para tomar o Trono e <" << endl;
  cout << "          > provaria ser capaz de destruir as mais fortes criaturas  existentes. Ele <" << endl;
  cout << "          > mergulharia na ecuridao para  se sacrificar  pelo bem  de  todo  reino e <" << endl;
  cout << "          > descansaria no trono pelo resto de seus dias....                         <" << endl;
  cout << "          >                                                                          <" << endl;
  system("pause");
  system("cls");
  cout << "          > Voce esta prestes a cair em mundo sem volta onde apenas a morte será a saida... <" << endl;
  cout << endl;
  system("pause");
  system("cls");
}

void escolhe_classe()
{ //realiza a escolha das classes a serem jogadas
  string nome;
  cout << "          >>---------------------------<<" << endl;
  cout << "          >>--->>Escreva seu nome:<<---<<" << endl;
  cin >> nome;
  cout << endl;
  system("pause");
  system("cls");
  cout << "          >>---------------------------<<" << endl;
  cout << "          >>--->>Escolha uma classe<<--<<" << endl;
  cout << endl;
  cout << "          >>------->>1-Guerreiro<<-----<<" << endl;
  cout << "          >>------->>2-Mago<<----------<<" << endl;
  cout << "          >>------->>3-Arqueiro<<------<<" << endl;
  cout << endl;
  cout << "          >>-->>4-Abandonar Partida<<--<<" << endl;
  cout << endl;
}

void escolhe_raca()
{ //seleçao de raças
  cout << "          >>--------------------------------------------------<<" << endl;
  cout << endl;
  cout << "          >>------------>>Escolha uma raça<<------------------<<" << endl;
  cout << endl;
  cout << "          >>----------------->>1-Humano<<---------------------<<" << endl;
  cout << "          >>----------------->>2-Elfo<<-----------------------<<" << endl;
  cout << "          >>----------------->>3-Anão<<-----------------------<<" << endl;
  cout << endl;
  cout << "          >>------->>4-Ainda ha tempo de desistir<<-----------<<" << endl;
  cout << endl;
  cout << "          >>--------------------------------------------------<<" << endl;
}

void parte1()
{ //inicio da historia
  cout << "          >>----------------------------------------------------<<" << endl;
  cout << "          > Os portais de Vedrak ja nao se abriam ha muitos anos.<" << endl;
  cout << "          > Um ser inocente atravessa a estrada da gloria, porem <" << endl;
  cout << "          > mal sabe ele o caminho perverso no qual se infiltrou.<" << endl;
  cout << "          > Contudo, ele sabe do que precisa conquistar, alem do <" << endl;
  cout << "          > mais, nao  foi  para isso  que veio a  este  mundo ? <" << endl;
  cout << "          > Antes  de alcancar  o portao do reino, é nescessario <" << endl;
  cout << "          > passar  pela floresta  dos caídos, onde so os bravos <" << endl;
  cout << "          > conseguem  provar  que  sao  dignos de  um  destino. <" << endl;
  cout << "          > Ao  se  aproximar, uma  criatura  maligna o  espera, <" << endl;
  cout << "          >  portanto seja forte e e não se renda a escuridão... <" << endl;
  cout << "          >>----------------------------------------------------<<" << endl;
  cout << endl;
  system("pause");
  system("cls");
}
void nivel1()
{ // distribuição de pontos nivel 1
  cout << "          >>---------------------------<<" << endl;
  cout << "          >>-------->>Nivel 1<<--------<<" << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << "          >  Você ganhou 5 pontos de    <" << endl;
  cout << "          >  habilidade para distribuir <" << endl;
  cout << "          >  em seu personagem.         <" << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << endl;
  cout << "          >>----->>Seus atributos:<<----<<" << endl;
  cout << endl;
}

void boss1()
{
  cout << "          >>---------------------------<<" << endl;
  cout << "          >>-------->>1ª Fase<<--------<<" << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << endl;
  cout << "          > O terror dos gigantes...    <" << endl;
  system("pause");
  cout << "          >>-----------------------------------------------------------<<" << endl;
  cout << "          > A escuridão tomou conta do seu redor assim como os passaros <" << endl;
  cout << "          > que voam para longe.                                        <" << endl;
  cout << "          > Fortes berros começam  a  vir por tras dos pantanos escuros,<" << endl;
  cout << "          > o Cheiro de carniça toma conta do local e em meio as copas  <" << endl;
  cout << "          > das arvores, e uma cabeça colossal e desfigurada aparece.   <" << endl;
  cout << "          > Seu nome é Hodor o terror dos gigantes, protetor dos muros  <" << endl;
  cout << "          > de Vendrak e da velha guarda das montanhas rochosas.        <" << endl;
  cout << "          > Dizem as lendas que haviam 5 gigantes no inicio, porem as   <" << endl;
  cout << "          > eras e estações consumiram 4 deles.                         <" << endl;
  cout << "          > Você so poderá seguir se derrotá-lo.                        <" << endl;
  cout << "          > Tenha cuidado, pois seu martelo de carvalho é uma arma letal<" << endl;
  cout << "          >>-----------------------------------------------------------<<" << endl;
  system("pause");
}

void nivel2()
{ // distribuição de pontos nivel 2
  cout << "          >>---------------------------<<" << endl;
  cout << "          >>-------->>Nivel 2<<--------<<" << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << "          >  Você ganhou 5 pontos de    <" << endl;
  cout << "          >  habilidade para distribuir <" << endl;
  cout << "          >  em seu personagem.         <" << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << endl;
  cout << "          >>----->>Seus atributos<<----<<" << endl;
  cout << endl;
}

void boss2()
{
  cout << "          >>---------------------------<<" << endl;
  cout << "          >>-------->>2ª Fase<<--------<<" << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << endl;
  cout << "          > A Sentinela ...             <" << endl;
  system("pause");
  system("cls");
  cout << "          >>-----------------------------------------------------------<<" << endl;
  cout << "          > Após passar pelos portões de Vendrak, o destino se torna    <" << endl;
  cout << "          > desafiador para qualquer aventureiro ou desbravador.        <" << endl;
  cout << "          > As feras das terras sobrias ergueram-se ao suspiro do ultimo<" << endl;
  cout << "          > gigante  e  entre  elas  levantam-se os vigias das colinas  <" << endl;
  cout << "          > cinzentas.                                                  <" << endl;
  cout << "          > O berrante começa a soar e ao longe se escutam os galopes   <" << endl;
  cout << "          > da temivel e devastadora Hydra, a Sentinela das sombras     <" << endl;
  cout << "          > com seu arco brilhante feito do pó das estrelas montada em  <" << endl;
  cout << "          > seu cavalo negro dos olhos ardentes.                        <" << endl;
  cout << "          > Você so poderá seguir se derrotá-la.                        <" << endl;
  cout << "          > Atenção com seus galopes, pois certamente sera a ultima     <" << endl;
  cout << "          > coisa que irá ouvir....                                     <" << endl;
  cout << "          >>-----------------------------------------------------------<<" << endl;
  system("pause");
  system("cls");
}
void nivel3()
{ // distribuição de pontos nivel 3
  cout << "          >>---------------------------<<" << endl;
  cout << "          >>-------->>Nivel 3<<--------<<" << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << "          >  Você ganhou 5 pontos de    <" << endl;
  cout << "          >  habilidade para distribuir <" << endl;
  cout << "          >  em seu personagem.         <" << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << endl;
  cout << "          >>----->>Seus atributos<<----<<" << endl;
  cout << endl;
}

void boss3()
{
  cout << "          >>---------------------------<<" << endl;
  cout << "          >>-------->>3ª Fase<<--------<<" << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << endl;
  cout << "          > Teias ? ...                 <" << endl;
  system("pause");
  system("cls");
  cout << "          >>---------------------------------------------------------------<<" << endl;
  cout << "          > Bem distante é possivel ver o vilarejo na encruzilhada   e logo <" << endl;
  cout << "          > atras, as torres do castelo de Vedrak, onde brilham  as  luzes  <" << endl;
  cout << "          > Contudo, o que faz do um homem forte são  os caminhos dificeis. <" << endl;
  cout << "          > O unico caminho para o vilarejo é através  da  floresta  dos    <" << endl;
  cout << "          > mortos. Ha muitos anos, a floresta tinha o nome por ser caminho <" << endl;
  cout << "          > de passagem de  escolta  dos bravos guerreiros que morreram nas <" << endl;
  cout << "          > conquistas do rei, acompanhados de caravanas de nomades em  que <" << endl;
  cout << "          > haviam grandes celebrações. Hoje o nome da floresta traz outros <" << endl;
  cout << "          > significados...                                                 <" << endl;
  cout << "          > Milhares de olhos, pernas gigantes, garras  afiadas e  presas   <" << endl;
  cout << "          > mortais que poderiam envenenar mil homens...                    <" << endl;
  cout << "          > Nakja, A devoradora de Homens, guardiã da floresta. Uma aranha  <" << endl;
  cout << "          > colossal, criada a pelos magos da floresta que fica a espera do <" << endl;
  cout << "          > o proximo que passar por entre as arvores retorcidas, cair nas  <" << endl;
  cout << "          > suas armadilhas para então devorar até os ultimos ossos.        <" << endl;
  cout << "          > Você so poderá seguir se derrotá-la.                            <" << endl;
  cout << "          > Atenção com suas armadilhas de teias e sua velocidade ao atacar <" << endl;
  cout << "          > A não ser que queira virar comida de aranha....                 <" << endl;
  cout << "          >>---------------------------------------------------------------<<" << endl;
  system("pause");
  system("cls");
}

void nivel4()
{ // distribuição de pontos nivel 4
  cout << "          >>---------------------------<<" << endl;
  cout << "          >>-------->>Nivel 4<<--------<<" << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << "          >  Você ganhou 5 pontos de    <" << endl;
  cout << "          >  habilidade para distribuir <" << endl;
  cout << "          >  em seu personagem.         <" << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << endl;
  cout << "          >>----->>Seus atributos<<----<<" << endl;
  cout << endl;
}

void boss4()
{
  cout << "          >>---------------------------<<" << endl;
  cout << "          >>-------->>4ª Fase<<--------<<" << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << endl;
  cout << "          > Ruínas de Vedrak            <" << endl;
  system("pause");
  system("cls");
  cout << "          >>---------------------------------------------------------------<<" << endl;
  cout << "          > Um vilarejo amaldiçoado, é o que restou da vila Sintilante após <" << endl;
  cout << "          > a invasão das trevas e escuridão. Seu moradores ja eram mumias  <" << endl;
  cout << "          > Consumidas pela decomposição, o rio da Glória, ondem trafegavam <" << endl;
  cout << "          > os barcos dos pescadores, ja nao tinha vida. As casas com suas  <" << endl;
  cout << "          > janelas quebradas e telhados descobertos originava a duvida de  <" << endl;
  cout << "          > de como acontecera tudo aquilo. Um massacre ou devastação?      <" << endl;
  cout << "          > Apesar da nevoa cobrindo os ares, avistavam-se as luzes depois  <" << endl;
  cout << "          > da muralha do castelo. Seria um sinal de esperança?             <" << endl;
  cout << "          > Ao chegar no centro do vilarejo escuta-se absolutamente nada    <" << endl;
  cout << "          > mas é possivel ver uma neblina tão intensa que nao se enxerga   <" << endl;
  cout << "          > a  palma  da   mão.  Ao  entrar   você   cairá   num  terrivel  <" << endl;
  cout << "          > pesadelo onde terriveis olhos vermelhos irão te perseguir e te  <" << endl;
  cout << "          > caçar. Quando se der por conta, ja sera tarde demais.           <" << endl;
  cout << "          > As Bruxas do Nevoeiro são pragas das mais perversas ja nascidas,<" << endl;
  cout << "          > Seus olhos anseiam em busca de vingança pelas torturas que lhes <" << endl;
  cout << "          > foram destinadas. Dizem os mais sabios  que  eram  servas  dos  <" << endl;
  cout << "          > primeiros monarcas, e que sofreram castigos severos pelos seus  <" << endl;
  cout << "          > atos. Elas tomaram conta do vilarejo e impedem a unica passagem <" << endl;
  cout << "          > para o castelo. Você so poderá seguir se derrotá-las.           <" << endl;
  cout << "          > Muito cuidado com esse inimigo e jamais confie nas aparencias...<" << endl;
  cout << "          >>---------------------------------------------------------------<<" << endl;
  system("pause");
  system("cls");
}
void nivel5()
{ // distribuição de pontos final
  cout << "          >>---------------------------<<" << endl;
  cout << "          >>-------->>Nivel 5<<--------<<" << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << "          >  Você ganhou 10 pontos de   <" << endl;
  cout << "          >  habilidade para distribuir <" << endl;
  cout << "          >  em seu personagem.         <" << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << endl;
  cout << "          >>----->>Seus atributos<<----<<" << endl;
  cout << endl;
}

void boss5()
{
  cout << "          >>---------------------------<<" << endl;
  cout << "          >>-------->>5ª Fase<<--------<<" << endl;
  cout << "          >>---------------------------<<" << endl;
  cout << endl;
  cout << "          > O Castelo da Glória         <" << endl;
  system("pause");
  system("cls");
  cout << "          >>---------------------------------------------------------------<<" << endl;
  cout << "          > Um muro alto que percorre centenas de metros, com suas torres   <" << endl;
  cout << "          > pontiagudas quebradas e vidros estilhaçados. Isso foi o que     <" << endl;
  cout << "          > Restou do Castelo da Gloria, com seus quartos grandes, salas    <" << endl;
  cout << "          > de realezas, jardins imperiais e tapeçarias das mais belas ja   <" << endl;
  cout << "          > feitas. Após o grande portao, ha um salão enorme e vazio, com   <" << endl;
  cout << "          > apenas sombras das janelas. Do lado de fora, uma tempestade     <" << endl;
  cout << "          > cobria os ceus, com diversos raios e trovoes. Ao lado do salão  <" << endl;
  cout << "          > via-se uma enorme escada onde la em cima por uma estreita porta <" << endl;
  cout << "          > radiava uma luz Forte e amarelada e escutava-se gemidos frios.  <" << endl;
  cout << "          > Chegando no local, ao fundo do grande salão, uma criatura com   <" << endl;
  cout << "          > uma aparencia devastadora, consumida pelo tempo e com um coroa  <" << endl;
  cout << "          > pesada sobre a cabeça, sentava-se num trono brilhante coberto de<" << endl;
  cout << "          > esmeraldas. Vedrak o Conquistador, consumido pela escuridão e   <" << endl;
  cout << "          > pela ganacia estava aguardando o proximo que iria desafia-lo.   <" << endl;
  cout << "          > Com olhos ardentes e sua espada longa, amaldiçoava  quem  fosse <" << endl;
  cout << "          > entrar no seu caminho. Não restaria duvidas que o reino decaía  <" << endl;
  cout << "          > devido a sua ira e busca de poder incessavel...                 <" << endl;
  cout << "          >>---------------------------------------------------------------<<" << endl;
  system("pause");
  system("cls");
  cout << "          >>---------------------------------------------------------------<<" << endl;
  cout << "          > Derrote o Rei Vedrak e restaure paz ao reino!                   <" << endl;
  cout << "          > Caso contrário, o mundo sucumbirá.                              <" << endl;
  cout << "          > Atenção aos seus ataques com sua espada longa.                   <" << endl;
  cout << "          >>---------------------------------------------------------------<<" << endl;
  system("pause");
  system("cls");
}

void final()
{ // encerramento
  system("cls");
  cout << "          >>-----------------------------------------------------<<" << endl;
  cout << "          > Bravo ser,                                            <" << endl;
  cout << "          > Você provou ser digno de tomar posse do trono que so  <" << endl;
  cout << "          > pertence a ti.                                        <" << endl;
  cout << "          > Parabens grande monarca, agora pode descansar em seu  <" << endl;
  cout << "          > reino restaurado. O povo clama pelo seu nome  e  as   <" << endl;
  cout << "          > terras tornam-se a ferteis novamente. Viva por muitos <" << endl;
  cout << "          > anos, mas tome muito cuidado para nao sucumbir ao mal <" << endl;
  cout << "          > e ao desejo, ou cairá em profunda escuridão onde nao  <" << endl;
  cout << "          > retornarás e terminará sua vida como o ultimo rei ... <" << endl;
  cout << "          >>-----------------------------------------------------<<" << endl;
  cout << endl;
  system("pause");
  system("cls");
  cout << "          >>---------------------------------------------------------------<<" << endl;
  cout << "          >>---------------------------Fim de jogo!------------------------<<" << endl;
  cout << "          >>---------------------------------------------------------------<<" << endl;
  system("pause");
}

void perde()
{ //caso o player venha a perder, usar essa função
  system("cls");
  int maior = 2;
  int menor = 0;
  int n = rand() % (maior - menor + 1) + menor;
  if (n = 0)
  {
    cout << "> Infelizmente voce provou NAO ser Bravo o suficiente para esse jogo <" << endl;
    cout << "> Mais sorte na proxima :)                                           <" << endl;
  }
  if (n = 1)
  {
    cout << "> Voce desonrou sua classe e envergonhou seus Antepassados <" << endl;
    cout << "> Fuja daqui e nao retorne ou sofrerá as consequências     <" << endl;
  }
  if (n = 2)
  {
    cout << "> Desista, voce nunca conseguirá ser bom o suficiente para este jogo :) <" << endl;
  }
  system("pause");
}
