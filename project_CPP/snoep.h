#ifndef SNOEP_H
#define SNOEP_H
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "color.h"
#include "game.h"
using namespace std;

class Snoep : public Game {

public:
    unsigned short int fruitx,fruity;
    unsigned char random_getal; // ik zou hier een pointer van maken
    int snoep();
    Snoep();


};




#endif // SNOEP_H
