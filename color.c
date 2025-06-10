#include "data_header.h"
void bluecolour();
void yellowcolour();
void redcolour();
void whitecolour();
void greencolour();
void color(char color_choice)
{
    if (color_choice == 'r')  
    {
        redcolour();
    }
    else if (color_choice == 'b')
    {
        bluecolour();
    }
    else if (color_choice == 'y')
    {
        yellowcolour();
    }
    else if (color_choice == 'g')
    {
        greencolour();
    }
    else if (color_choice == 'w')
    {
        whitecolour();
    }
    else
    {
        printf("invalid colour");
    }
}
void bluecolour()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
}
void redcolour()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
}
void greencolour()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
}
void yellowcolour()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
}
void whitecolour()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}