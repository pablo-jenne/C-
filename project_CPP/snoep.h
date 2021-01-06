#ifndef SNOEP_H
#define SNOEP_H
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "color.h"
#include "game.h"
#include <string.h>
using namespace std;

class Snoep : public Game {

public:

    Snoep(std::string naam)  :naam(naam){}
    Snoep() {}

    virtual void snoep (unsigned short aantal) = 0;

    unsigned short int fruitx,fruity;
    unsigned char random_getal; // ik zou hier een pointer van maken
    void snoep();
    //Snoep();
protected:
    std::string naam;

};




#endif // SNOEP_H
