#pragma once

#include "config.h"

typedef struct
{
	int x;
	int y;
	COORD dir;
	int block;
	int blockCount;
} Player;

typedef struct
{
	int x;
	int y;
	COORD dir;
	COORD prevDir;
} Ghost;

typedef struct
{
	unsigned char elements[BOARDHEIGHT][BOARDWIDTH];
	unsigned char ifIntersection[BOARDHEIGHT][BOARDWIDTH];
	int playerSmell[BOARDHEIGHT][BOARDWIDTH];
} Map ;

typedef struct
{
	Map *map;
	Player *player;
	Ghost *ghost;
	int ghostCount;
	int score;
	int maxBlockCount;

} Game;

//Reaetuje kierunki nast�pnego ruchu duch�w i gracza
void resetDirections(Player*, Ghost[], int);

//Wczytuje map� z pliku
void createMap(int, Map*, Player*, Ghost[], int, int);

//Znajduje skrzy�owania i zapisuje je do tablicy map.ifIntersection[][]
void chceckForIntersection(Map*);

//Wy�wietla map� na ekranie
void printMap(Map*, Player*, Ghost[], int);

//Od�wie�a licznik punkt�w
void refreshPoints();

//Od�wie�a pozycje gracza
void refreshPlayerPosition();

//Od�wie�a pozycje duch�w
void refreshGhostPosition();

//Zmniejsza zapach gracza o 1 na wszystkich polach na kt�rych zapach > 0
void decreasePlayerSmell();