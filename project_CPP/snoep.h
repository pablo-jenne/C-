#ifndef SNOEP_H
#define SNOEP_H
#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "color.h"
#include "game.h"
#include <string.h>
using namespace std;

class Snoep  {

public:

    Snoep(std::string naam)  :naam(naam){}
    virtual ~Snoep() {}

   virtual void poly (unsigned short aantal) = 0;


    //void snoep();
    //Snoep();

protected:
    std::string naam;
};




#endif // SNOEP_H
