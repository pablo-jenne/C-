#include "snoepje_dubble.h"


bool Snoepje_Dubble::Snoepje3() const
{
    return  snoepje3;
}


void Snoepje_Dubble :: draw(unsigned short aantal)
{
    for (unsigned short i = 0; i < aantal; i++)
    {
    Font::setColor( 0x0E );
    cout<<"F";
    Font::setColor(0x0F);
    }
}

void Snoepje_Dubble::poly(unsigned short aantal)
{
    for (unsigned short i = 0; i < aantal; i++)
    {
    std::cout <<naam <<"whoaaaa ik geef je 2x" << std::endl;
    }

}

