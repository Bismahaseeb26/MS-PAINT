#include "data_header.h"
// Function prototypes
void get_colour(char fill_col, char outline_col);
void blue_colour();
void red_colour();
void green_colour();
void yellow_colour();
void white_colour();
void get_colour(char fill_col, char outline_col)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    
    if (fill_col == 'r')
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    }
    else if (fill_col == 'b')
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    }
    else if (fill_col == 'y')
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
    }
    else if (fill_col == 'g')
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    }
    else if (fill_col == 'w')
    {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    }
    else
    {
        printf("Invalid fill color");
    }
}

void blue_colour()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
}
void red_colour()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
}
void green_colour()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
}
void yellow_colour()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);
}
void white_colour()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
}