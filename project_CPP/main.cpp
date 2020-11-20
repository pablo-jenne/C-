#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include "draw.h"








int main()
{
    srand (time(NULL));
    Draw draw;
    draw.setup();
    while(!draw.getGameover())
    {
       draw.draw();
       draw.input();
       draw.logic();
    }

}




