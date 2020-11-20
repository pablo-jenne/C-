#ifndef DRAW_H
#define DRAW_H


#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <color.h>
#include <conio.h>

using namespace std;

#define HEIGHT 20
#define WIDTH 20


class Draw {
    bool gameover;


    int x,y,fruitx,fruity;
    unsigned int score = 0;
    int tailx[100], taily[100];
    int ntail =0; // lengte van de body (snake)

    enum  Direction{STOP = 0, LEFT, RIGHT, UP, DOWN};
    Direction dir;


public:

    void setup();
    void draw();
    void input();
    void logic();


    bool getGameover() const;
};





#endif // DRAW_H
