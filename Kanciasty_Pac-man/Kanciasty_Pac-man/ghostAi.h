#pragma once
#include <time.h>

#include "mapCreation.h"
#include "gameMechanic.h"

//Duchu nie mog� zawraca� na skrzy�owaniu
//Mog� si� cofa� jedynie gdy natrafi� na blokad� postawion� przez gracza


//Nadaje duch� pocz�tkowy kierunek ruchu
void initGhosts();

//Wywo�uje funkcje steruj�ca duchami w zale�no�ci od poziomu trudno�ci
void ghostAi();

// stara si� zr�wna� z graczem na osi X, gdy to zrobi stara si� zr�wna� na osi Y
void ghostZero();

//Duch 1: na skrzy�owaniach szuka zapachu gracza, je�eli go znajduje to za nim pod��a
//gdy nie ma skrzy�owania porusza si� przed siebie
void ghostOne();

//Duch 2: pseudo losowo wybiera kierunki
void ghostTwo();

//Duch 3: stara si� zr�wna� z graczem na osi Y, gdy to zrobi stara si� zr�wna� na osi X
void ghostThree();

//Sprawdza czy duch i znajduje si� na polu b�d�cym skrzy�owaniem
int checkForIntersection(int i);

//Okre�la po�o�enie ducha wzgl�dem gracza na osi X
int checkDirToPlayerX(int i);

//Okre�la po�o�enie ducha wzgl�dem gracza na osi Y
int checkDirToPlayerY(int i);

//Szuka zapachu gracza na wszystkich polach, na kt�re duch mo�e przej�� z obecnego pola
void searchForSmell(int i);

//Sprawdza czy mo�liwy jest ruch na podan� pozycj�
int tryToMove(COORD);
int tryUp(int i);
int tryDown(int i);
int tryLeft(int i);
int tryRight(int i);

//Zmienia kierunek ducha tak, aby przy nastepnym od�wie�eniu pozycji poszed� w podan� stron�
void goUp(int i);
void goDown(int i);
void goLeft(int i);
void goRight(int i);
void goRandom(int i);
void goBack(int i);