#include "brain_header.h"
//fucntions for option 2
void setConsoleColor(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

//void gotoxy(int x, int y)
//{
    //COORD coord;
    //coord.X = x;
    //coord.Y = y;
    //SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
//}

void clearCell(int x, int y)
{
    gotoxy(x, y);
    printf(" "); // Print a space to clear the character
}
// Function to check if the spacebar is pressed
int isSpacebarPressed()
{
    return GetAsyncKeyState(VK_SPACE) != 0;
}
// Function to check if any arrow key is pressed
int isArrowKeyPressed()
{
    // Check if any arrow key (up, down, left, right) is pressed
    return (GetAsyncKeyState(VK_UP) | GetAsyncKeyState(VK_DOWN) | GetAsyncKeyState(VK_LEFT) | GetAsyncKeyState(VK_RIGHT)) != 0;
}

//range function for alphabets

void alphabets_functions(int height, char start_char, char end_char, char character_type, char color_choice)
{

    if (start_char < 'A' || start_char > 'Z' || end_char < 'A' || end_char > 'Z' || start_char > end_char)
    {
    }

    for (char c = start_char; c <= end_char; c++)
    {
        switch (c)
        {
        case 'A':
            printA(height, character_type, color_choice);
            break;
        case 'B':
            printB(height, character_type, color_choice);
            break;
        case 'C':
            printC(height, character_type, color_choice);
            break;

        case 'D':
            printD(height, character_type, color_choice);
            break;
        case 'E':
            printE(height, character_type, color_choice);
            break;
        case 'F':
            printF(height, character_type, color_choice);
            break;
        case 'G':
            printG(height, character_type, color_choice);
            break;
        case 'H':
            printH(height, character_type, color_choice);
            break;
        case 'I':
            printI(height, character_type, color_choice);
            break;
        case 'J':
            printJ(height, character_type, color_choice);
            break;
        case 'K':
            printK(height, character_type, color_choice);
            break;

        case 'L':
            printL(height, character_type, color_choice);
            break;
        case 'M':
            printM(height, character_type, color_choice);
            break;
        case 'N':
            printN(height, character_type, color_choice);
            break;
        case 'O':
            printO(height, character_type, color_choice);
            break;
        case 'P':
            printP(height, character_type, color_choice);
            break;
        case 'Q':
            printQ(height, character_type, color_choice);
            break;

        case 'R':
            printR(height, character_type, color_choice);
            break;
        case 'S':
            printS(height, character_type, color_choice);
            break;

        case 'T':
            printT(height, character_type, color_choice);
            break;
        case 'U':
            printU(height, character_type, color_choice);
            break;
        case 'V':
            printV(height, character_type, color_choice);
            break;
        case 'W':
            printW(height, character_type, color_choice);
            break;
        case 'X':
            printX(height, character_type, color_choice);
            break;
        case 'Y':
            printY(height, character_type, color_choice);
            break;
        case 'Z':
            printZ(height, character_type, color_choice);
            break;
        default:

            break;
        }
        printf("\n");
    }
}
//range function for numbers
void numbers_functions(int height, char start_num, char end_num, char character_selection, char color_choice)
{

    if (start_num < '1' || start_num > '9' || end_num < '1' || end_num > '9' || start_num > end_num)
    {
    }

    for (char s = start_num; s <= end_num; s++)
    {
        switch (s)
        {
        case '1':
            print1(height, character_selection, color_choice);
            break;
        case '2':
            print2(height, character_selection, color_choice);
            break;
        case '3':
            print3(height, character_selection, color_choice);
            break;
        case '4':
            print4(height, character_selection, color_choice);
            break;
        case '5':
            print5(height, character_selection, color_choice);
            break;
        case '6':
            print6(height, character_selection, color_choice);
            break;
        case '7':
            print7(height, character_selection, color_choice);
            break;
        case '8':
            print8(height, character_selection, color_choice);
            break;
        case '9':
            print9(height, character_selection, color_choice);
            break;
        default:
            break;
        }
        printf("\n");
    }
}

void triangle_functions(int fill_input,char pos, int type_input, int size, char character_input, char fill_col, char outline_col)
{
    if (type_input == 0)
    {
        if (fill_input == 1)
        {
            pyramid_inverted_filled_triangle(size,pos, character_input, fill_col, outline_col);
        }
        else
        {
            pyramid_inverted_hollow_triangle(size,pos, character_input, fill_col, outline_col);
        }
    }
    else if (type_input == 1)
    {
        if (fill_input == 1)
        {
            pyramid_filled_triangle(size, pos,character_input, fill_col, outline_col);
        }
        else
        {
            pyramid_hollow_triangle(size, pos,character_input, fill_col, outline_col);
        }
    }

    else if (type_input == 2)
    {
        if (fill_input == 1)
        {
            right_filled_triangle(size,pos, character_input, fill_col, outline_col);
        }
        else
        {
            right_hollow_triangle(size,pos, character_input, fill_col, outline_col);
        }
    }
    else if (type_input == 3)
    {
        if (fill_input == 1)
        {
            right_mirrored_filled_triangle(size,pos, character_input, fill_col, outline_col);
        }
        else
        {
            right_mirrored_hollow_triangle(size,pos, character_input, fill_col, outline_col);
        }
    }
    else if (type_input == 4)
    {
        if (fill_input == 1)
        {
            right_inverted_filled_triangle(size,pos, character_input, fill_col, outline_col);
        }
        else
        {
            right_inverted_hollow_triangle(size,pos, character_input, fill_col, outline_col);
        }
    }
    else if (type_input == 5)
    {
        if (fill_input == 1)
        {
            right_inverted_mirrored_filled_triangle(size, pos,character_input, fill_col, outline_col);
        }
        else
        {
            right_inverted_mirrored_hollow_triangle(size,pos, character_input, fill_col, outline_col);
        }
    }
}
void sqaure_function(int fill_input,char pos, int size, char character_input, char fill_col, char outline_col)
{
    if (fill_input == 1)
    {
        filled_square(size,pos, character_input, fill_col, outline_col);
    }
    else
    {
        hollow_square(size,pos, character_input, fill_col, outline_col);
    }
}
void butterfly_function(int fill_input, char pos, int size, char character_input, char fill_col, char outline_col)
{
    if (fill_input == 1)
    {
        filled_butterfly(size, pos, character_input, fill_col, outline_col);
    }
    else
    {
        hollow_butterfly(size, pos, character_input, fill_col, outline_col);
    }
}
void oval_function(int fill_input,char pos, int size, char character_input, char fill_col, char outline_col)
{
    if (fill_input == 1)
    {
        filled_oval(size,pos, character_input, fill_col, outline_col);
    }
    else
    {
        hollow_oval(size,pos, character_input, outline_col);
    }
}
void heart_function(int fill_input,char pos, int size, char character_input, char fill_col, char outline_col)
{
    if (fill_input == 1)
    {
        filled_heart(size, pos,character_input, outline_col, fill_col);
    }
    else
    {
        hollow_heart(size,pos, character_input, outline_col);
    }
}
void daimond_function(int type_input,char pos, int fill_input, int size, char character_input, char fill_col, char outline_col)
{
    if (type_input == 0)
    {
        if (fill_input == 1)
        {
            filled_daimond_half(size,pos, character_input, fill_col, outline_col);
        }
        else
        {
            hollow_daimond_half(size,pos, character_input, outline_col);
        }
    }
    else if (type_input == 1)
    {
        if (fill_input == 1)
        {
            filled_daimond(size,pos, character_input, outline_col, fill_col);
        }
        else
        {
            hollow_daimond(size,pos, character_input, outline_col);
        }
    }
}
void hexagon_function(int fill_input,char pos, int size, char character_input, char fill_col, char outline_col)
{
    if (fill_input == 1)
    {
        filled_hexagon(size,pos, character_input, outline_col, fill_col);
    }
    else
    {
        hollow_hexagon(size, pos,character_input, outline_col);
    }
}
void trapezium_function(int fill_input,char pos, int size, char character_input, char fill_col, char outline_col)
{
    if (fill_input == 1)
    {
        filled_trapezium(size,pos, character_input, outline_col, fill_col);
    }
    else
    {
        hollow_trapezium(size,pos, character_input, outline_col);
    }
}
void parallelogram_function(int fill_input,char pos, int size, char character_input, char fill_col, char outline_col)
{
    if (fill_input == 1)
    {
        filled_parallelogram(size,pos, character_input, outline_col, fill_col);
    }
    else
    {
        hollow_parallelogram(size, pos,character_input, outline_col);
    }
}
void arrow_function(int type_input,char pos, int size, char character_input, char fill_col)
{
    if (type_input == 0)
    {
        Right_Arrow(size,pos, character_input, fill_col);
    }
    if (type_input == 1)
    {
        Left_Arrow(size, pos,character_input, fill_col);
    }
    if (type_input == 2)
    {
        Up_Arrow(size,pos, character_input, fill_col);
    }
    if (type_input == 3)
    {
        Down_Arrow(size,pos, character_input, fill_col);
    }
}
void pentagon_function(int fill_input,char pos, int size, char character_input, char fill_col, char outline_col)
{
    if (fill_input == 1)
    {
        filled_pentagon(size,pos, character_input, outline_col, fill_col);
    }
    else
    {
        hollow_pentagon(size,pos, character_input, outline_col);
    }
}