#pragma once

//Wy�wietla menu
void menu(int*);

//Ustawia parametry konsoli
void initScreen();

//Ustawia rozmiar znak�w w consoli
void consoleSize();

//Ustawia kolor
void setColor(unsigned short id);

//Wstawia znak w okre�lone miejsce
void putCharXY(int x, int y, unsigned char z);

//Wstawia �a�cuch znak�w w okre�lone miejsce
void putStrXY(int x, int y, const char *s);

//Pobiera znak od u�ytkownika
char getKey();
