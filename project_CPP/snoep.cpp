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
        Snoep * snoep = nullptr;

        switch(rand()%3)
        {
        case 0:
            snoep = new Snoepje_Dubble("");
            break;
        case 1:
            snoep = new Snoepje_Single("");
            break;
        case 2:
            snoep = new Snoepje_kut ("");
            break;
        default:
            break;
        }

        aantal = rand() % 2 + 1; // nummer tussen 1 en 2

};
