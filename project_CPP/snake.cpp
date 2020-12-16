#include "snake.h"

void Snake :: logic()
{
    unsigned short prevx = tailx[0];
    unsigned short prevy = taily[0];
    unsigned short prev2x, prev2y;
    tailx[0] = x;
    taily[0] = y;

    for(unsigned short i =1; i<ntail; i++) // i op 1 laten beginnen anders wordt de eerste tail niet goed getekend
    {
        prev2x = tailx[i];
        prev2y = taily[i];
        tailx[i] = prevx;
        taily[i] = prevy;
        prevx = prev2x;
        prevy = prev2y;
    }

    switch (dir)
    {

    case LEFT:
        x--;
        break;

    case RIGHT:
        x++;
        break;

    case UP:
        y--;
        break;

    case DOWN:
        y++;
        break;

    default:
        break;
    }

    if(x > WIDTH || x < 0 || y > HEIGHT || y < 0 )
    {
        gameover = true;
    }
    for(unsigned short i = 0; i < ntail; i++)
    {
        if(tailx[i] == x && taily[i] == y)
        {
            gameover = true;
        }
    }
}
