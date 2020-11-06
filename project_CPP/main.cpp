#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <color.h>
#include <conio.h>
using namespace std;

#define HEIGHT 20
#define WIDTH 20

bool    gameover;

int x,y,fruitx,fruity;
unsigned int score = 0;
int tailx[100], taily[100];
int ntail =0; // lengte van de body (snake)

enum  eDirection{STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;


void Setup()
{
    gameover = false;
    dir = STOP;
    x = WIDTH/2;    // hier zal de snake starten
    y = HEIGHT/2;

    fruitx = rand() % WIDTH;
    fruity = rand() % HEIGHT;
}


void Draw()
{
    clearScreen();
    for(int i = 0; i<WIDTH+2; i++)
    {
        cout << "#";
    }
    cout<<endl;

    for(int i = 0; i<HEIGHT; i++)
    {
        for(int j = 0; j<WIDTH; j++)
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
                setFontColor( 0x0A );
                cout<<"F";
                setFontColor(0x0F);
            }
                else
            {
                bool print = false;
                for(int k = 0; k< ntail; k++)
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

    for(int i =0; i<HEIGHT+2; i++) // plus 2 doen anders wordt het raster niet goed getekend
    {
        cout << "#";
    }
    cout<<endl;

    cout<< "Jouw score is:" << score <<endl;

}

void Input()
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

void Logic()
{

    int prevx = tailx[0];
    int prevy = taily[0];
    int prev2x, prev2y;
    tailx[0] = x;
    taily[0] = y;

    for(int i =1; i<ntail; i++) // i op 1 laten beginnen anders wordt de eerste tail niet goed getekend
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
    for(int i = 0; i < ntail; i++)
    {
        if(tailx[i] == x && taily[i] == y)
        {
            gameover = true;
        }
    }
    if(x == fruitx && y == fruity)
    {
        score = score + 10;
        fruitx = rand() % WIDTH;
        fruity = rand() % HEIGHT;
        ntail++;
    }

}

int main()
{
    srand (time(NULL));
    Setup();
    while(!gameover)
    {
       Draw();
       Input();
       Logic();
    }

}




