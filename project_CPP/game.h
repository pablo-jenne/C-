#ifndef GAME_H
#define GAME_H
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "color.h"
#define HEIGHT 20
#define WIDTH 20
class Game {
private:

//bool gameover;
unsigned short  score;
unsigned char random_getal; // ik zou hier een pointer van maken
unsigned char getal = 0;


public:
bool gameover; const
bool snoepje1 = true;
bool snoepje2 = false;
bool snoepje3 = false;

void game();


};

#endif // GAME_H
