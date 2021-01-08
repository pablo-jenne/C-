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

   // Snoep(std::string naam)  :naam(naam){}
   // Snoep() {}

   // virtual void snoep (unsigned short aantal) = 0;
    virtual ~Snoep(){

        //delete snoepje;
    }

  //  unsigned short int fruitx,fruity;

    void snoep();
    //Snoep();
};




#endif // SNOEP_H
