#ifndef GAME_H
#define GAME_H
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "color.h"
#include "snoepje_dubble.h"
#include "snoepje_kut.h"
#include "snoepje_single.h"
#define HEIGHT 20
#define WIDTH 20
class Game {
private:

//bool gameover;
unsigned short  score;
unsigned char random_getal;
unsigned char getal = 0;
unsigned short int fruitx,fruity;


public:
bool gameover; const
bool snoepje1 = true;
bool snoepje2 = false;
bool snoepje3 = false;

    Game(std::string naam)  :naam(naam){}
    Game() {}
    virtual void poly (unsigned short aantal) = 0;

void game(unsigned short aantal);

protected:
    std::string naam;


};

#endif // GAME_H
