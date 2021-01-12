#ifndef SNOEPJE_KUT_H
#define SNOEPJE_KUT_H
#include "snoep.h"



class Snoepje_kut : public Snoep{
public:

    Snoepje_kut(std::string naam)  :Snoep(naam){}
    void poly(unsigned short aantal);

    bool snoepje2;
    bool Snoepje2() const;
    void eat();
    void draw();

};





#endif // SNOEPJE_KUT_H
