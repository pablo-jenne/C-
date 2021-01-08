#include "snoep.h"
#include "snoepje_dubble.h"
#include "snoepje_kut.h"
#include "snoepje_single.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <color.h>
#include <conio.h>

void Snoep:: snoep(unsigned short aantal) {
        Snoep * snoepje = nullptr;

        switch(rand()%3)
        {
        case 0:
            snoepje = new Snoepje_Single("He");
            break;
        case 1:
            snoepje = new Snoepje_Dubble("He He");
            break;
        case 2:
            snoepje = new Snoepje_kut ("He He He");
            break;
        default:
            break;
        }

        aantal = rand() % 2 + 1; // nummer tussen 1 en 2

        snoepje->snoep(aantal);



};
