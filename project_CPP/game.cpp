#include "game.h"
#include "snoep.h"
#include "snoepje_dubble.h"
#include "snoepje_kut.h"
#include "snoepje_single.h"

void Game :: poly_snoep() const
{
    unsigned short int aantal_snoepjes = 0;
     aantal_snoepjes = rand()%3;
    Snoep * snoepje = nullptr;

    switch(rand()%3)
    {
    case 0:
        snoepje = new Snoepje_Single("He");
        snoepje->poly(aantal_snoepjes);
        break;
    case 1:
        snoepje = new Snoepje_Dubble("He He");
        snoepje->poly(aantal_snoepjes);
        break;
    case 2:
        snoepje = new Snoepje_kut("He He He");
        snoepje->poly(aantal_snoepjes);
        break;
    default:
        break;
    }


    delete snoepje;

}
