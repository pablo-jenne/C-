#include "draw.h"


bool Draw::getGameover() const
{
    return gameover;
}

bool Draw::Snoepje1() const
{
    return snoepje1;
}

bool Draw::Snoepje2() const
{
    return snoepje2;
}

bool Draw::Snoepje3() const
{
    return  snoepje3;
}

bool Draw::EERSTE_SNOEPJE() const
{
    return eerste_snoepje;
}





void Draw :: setup()
{
    gameover = false;
    eerste_snoepje = true;
    snoepje1 = false;
    snoepje2 = false;
    snoepje3 = false;
    dir = STOP;
    x = WIDTH/2;    // hier zal de snake starten
    y = HEIGHT/2;

    fruitx = rand() % WIDTH;
    fruity = rand() % HEIGHT;
}




void Draw :: draw()
{
    Font::clearScreen();
    for(unsigned short i = 0; i<WIDTH+2; i++)
    {
        cout << "#";
    }
    cout<<endl;

    for(unsigned short i = 0; i<HEIGHT; i++)
    {
        for(unsigned short j = 0; j<WIDTH; j++)
        {
            if(j==0)
            {

                cout<<"#";
            }
            if(i == y && j == x)
            {
                cout<<"O";
            }
            else if(i == fruity&& j == fruitx)
            {
                if(snoepje1 == true || eerste_snoepje == true)
                                {
                                Font::setColor( 0x0A );
                                cout<<"F";
                                Font::setColor(0x0F);
                                }
                                if(snoepje2 == true)
                                {
                                Font::setColor( 0x0B );
                                cout<<"F";
                                Font::setColor(0x0F);
                                }
                                if(snoepje3 == true)
                                {
                                Font::setColor( 0x0E );
                                cout<<"F";
                                Font::setColor(0x0F);
                                }
            }
                else
            {
                bool print = false;
                for(unsigned short k = 0; k< ntail; k++)
                {
                    if(tailx[k] == j && taily[k] == i)
                    {
                        cout << "o";
                        print = true;
                    }
                }

                if(!print)
                {
                    cout<<" ";
                }

            }



            if(j==WIDTH-1)
            {
                cout<<"#";
            }
        }

        cout<<endl;
    }

    for(unsigned short i =0; i<HEIGHT+2; i++) // plus 2 doen anders wordt het raster niet goed getekend
    {
        cout << "#";
    }
    cout<<endl;

    cout<< "Jouw score is:" << score <<endl;

}

void Draw:: input()
{
    if(_kbhit())
    {
       switch(_getch()) // movements
       {
            case 'f':
               dir = LEFT;
               break;
            case 'h':
               dir = RIGHT;
               break;
            case 't':
               dir = UP;
               break;
            case 'g':
               dir = DOWN;
               break;
            case 'a':
               gameover = true;
               break;
       }
    }
}

void Draw:: logic()
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
    if(x == fruitx && y == fruity)
    {
        eerste_snoepje = false;
        srand (time(NULL));
         unsigned char random_getal = rand() % 3 + 1; // nummer tussen 1 en 3

         switch(random_getal) {
               case 1:
                     score = score + 10;
                     fruitx = rand() % WIDTH;
                     fruity = rand() % HEIGHT;
                     ntail++;
                     snoepje1 = true;
                     snoepje2 = false;
                     snoepje3 = false;

               case 2:
                     score = score + 10;
                     fruitx = rand() % WIDTH;
                     fruity = rand() % HEIGHT;
                     ntail--;
                     snoepje1 = false;
                     snoepje2 = true;
                     snoepje3 = false;

               case 3:
                     score = score + 10;
                     fruitx = rand() % WIDTH;
                     fruity = rand() % HEIGHT;
                     ntail = ntail + 2;
                     snoepje1 = false;
                     snoepje2 = false;
                     snoepje3 = true;

            }

    }

}
