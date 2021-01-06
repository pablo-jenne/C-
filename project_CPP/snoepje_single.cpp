#include "snoepje_single.h"

void Snoepje_Single::snoep(unsigned short aantal)
{
    srand (time(NULL));
    aantal = rand() % 2 + 1; // nummer tussen 1 en 3

        std::cout <<naam <<"whoaaaa ik ben maar normaal" << std::endl;

}
