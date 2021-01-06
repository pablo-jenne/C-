#include "game.h"

void Game :: game()
{

    random_getal = rand() % 3 + 1; // nummer tussen 1 en 3

    if(random_getal == 1){

         getal = 1;

    }
    else if(random_getal == 2){
         getal = 2;

    }
    else if (random_getal == 3){
         getal = 3;

    }

}
