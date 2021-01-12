#ifndef SNOEPJE_DUBBLE_H
#define SNOEPJE_DUBBLE_H
#include "snoep.h"
#include <time.h>
#include <iostream>
#include <stdlib.h>

class Snoepje_Dubble : public Snoep{
public:

    Snoepje_Dubble(std::string naam)  :Snoep(naam){}
    void poly(unsigned short aantal);

    bool snoepje3;
    bool Snoepje3() const;

    void eat(unsigned short aantal);
    void draw(unsigned short aantal);

};

#endif // SNOEPJE_DUBBLE_H
