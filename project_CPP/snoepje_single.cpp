#include "snoepje_single.h"

score = score + 10;
fruitx = rand() % WIDTH;
fruity = rand() % HEIGHT;
ntail++;
snoepje1 = true;
snoepje2 = false;
snoepje3 = false;

if(snoepje1 == true || eerste_snoepje == true)
{
Font::setColor( 0x0A );
cout<<"F";
Font::setColor(0x0F);
}
