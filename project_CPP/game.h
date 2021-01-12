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
unsigned char random_getal;
unsigned char getal = 0;
unsigned short int fruitx,fruity;
unsigned short prevx = 0;
unsigned short prevy = 0;
unsigned short prev2x, prev2y;

//Snake snake;

public:
bool gameover; const
bool snoepje1 = true;
bool snoepje2 = false;
bool snoepje3 = false;
void fruit(unsigned short int fruitx, unsigned short int fruity);
void tail(unsigned short int prevx, unsigned short int prevy, unsigned short int prev2x, unsigned short int prev2y);




void poly_snoep() const;


};

#endif // GAME_H
