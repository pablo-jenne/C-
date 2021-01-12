#ifndef SNAKE_H
#define SNAKE_H
#include "game.h"

class Snake : public Game{
private:
    unsigned short  tailx[100], taily[100];
    unsigned short prevx;
    unsigned short prevy;
    unsigned short prev2x, prev2y;
   // unsigned short ntail =0;
    unsigned short x,y;

    enum  Direction{STOP = 0, LEFT, RIGHT, UP, DOWN};
        Direction dir;
public:
    void logic(unsigned short ntail = 0);
    Snake();
    ~Snake() {}
};

#endif // SNAKE_H
