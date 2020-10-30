#ifndef COLOR_H
#define COLOR_H


#include <Windows.h>

static inline void clearScreen( void );
static inline void private_setFontColorInit( unsigned short colorCode );
static inline void private_setFontColorFunction( unsigned short colorCode );
void (*setFontColor)( unsigned short colorCode ) = private_setFontColorInit;

HANDLE private_stdOutHandle;

static inline void clearScreen( void )
{
    system( "cls" );
}

static inline void private_setFontColorInit( unsigned short colorCode )
{
    private_stdOutHandle = GetStdHandle(STD_OUTPUT_HANDLE);
    setFontColor = private_setFontColorFunction;
    private_setFontColorFunction( colorCode );
}

static inline void private_setFontColorFunction( unsigned short colorCode )
{
    SetConsoleTextAttribute( private_stdOutHandle, colorCode );
}


#endif // COLOR_H
