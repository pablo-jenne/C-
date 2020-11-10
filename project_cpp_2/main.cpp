#include <iostream>
#include <conio.h>

using namespace std;

class Start{
private:
    int x;
    int y;

public:
    Start(){
        x = 10;
        y = 10;
    }
    Start(int x, int y){

        this -> x = x;
        this -> y = y;
    }

    void setStart(int x, int y){
        this -> x = x;
        this -> y = y;
    }
    int GetX(){
        return x;
    }
    int GetY(){
        return y;
    }
    void MoveUp(){
        y--;
    }
    void MoveDown(){
        y++;
    }
    void MoveLeft(){
        x--;
    }
    void MoveRight(){
        x++;
    }
    void Draw(){
        GaNaarxy(x,y);
        cout<< "O";
    }
    void Erase(){
        GaNaarxy(x,y);
        cout<<" ";
    }
};

int main(int argc, char *argv[])
{

    return 0;

}
