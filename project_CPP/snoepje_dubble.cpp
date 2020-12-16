#include "snoepje_dubble.h"


bool Snoepje_Dubble::Snoepje3() const
{
    return  snoepje3;
}
void Snoepje_Dubble :: eat()
{
//score = score + 10;
fruitx = rand() % WIDTH;
fruity = rand() % HEIGHT;
//ntail = ntail + 2;

}


void Snoepje_Dubble :: draw()
{
    Font::setColor( 0x0E );
    cout<<"F";
    Font::setColor(0x0F);
}

