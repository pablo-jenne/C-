#ifndef SNOEPJE_SINGLE_H
#define SNOEPJE_SINGLE_H
#include "snoep.h"

class Snoepje_Single : public Snoep{
public:

    Snoepje_Single(std::string naam)  :Snoep(naam){}
    void poly(unsigned short aantal);

    bool snoepje1;
    bool Snoepje1() const;

};

#endif // SNOEPJE_SINGLE_H
