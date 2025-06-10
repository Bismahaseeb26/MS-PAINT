#include "data_header.h"
void gotoxy(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int get_terminal_width()
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    return csbi.srWindow.Right - csbi.srWindow.Left + 1;
}
int set_x_axis(char pos, int size)
{
    int x;
    if (pos == 'l')
    {
        x = 0;
    }
    else if (pos == 'm')
    {
        int width = get_terminal_width();
        x = (width - size) / 2;
    }
    else if (pos == 'r')
    {
        int width = get_terminal_width();
        x = (width - size);
    }
    return x;
}