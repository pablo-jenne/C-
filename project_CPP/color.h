#ifndef COLOR_H
#define COLOR_H

#include <Windows.h>

class Font
{
public:
    static inline void clearScreen( void )
    {
        system( "cls" );
    }

    static inline void setColor( unsigned short colorCode )
    {
        static HANDLE stdOutHandle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute( stdOutHandle, colorCode );
    }
};

#endif // COLOR_H
