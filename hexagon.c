#include "data_header.h"
void hollow_hexagon(int size, char pos, char character_input, char outline_col)
{
    int x = set_x_axis(pos, size*3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 0; row <= 2 * size; row++)
    {
        int spaces = abs(size - row);

        for (int column = 0; column < spaces; column++)
        {
            printf(" ");
            fprintf(fptr," ");
        }

        int numSides = size + 2 * (size - abs(size - row));
        for (int column = 0; column < numSides; column++)
        {
            if (column == 0 || column == numSides - 1)
            {
                get_colour(outline_col, outline_col); // Set the outline color
                printf("%c", character_input);
                fprintf(fptr,"%c",character_input);
            }
            else
            {
                printf(" ");
                fprintf(fptr," ");
            }
        }

        printf("\n");
        fprintf(fptr,"\n");

        y++;
        gotoxy(x, y);
    }
}
void filled_hexagon(int size, char pos, char character_input, char outline_col, char fill_col)
{
    int x = set_x_axis(pos,size*3);
    int y=10;
    gotoxy(x,y);

    for (int row = 0; row <= 2 * size; row++)
    {
        int spaces = abs(size - row);

        for (int column = 0; column < spaces; column++)
        {
            printf(" ");
            fprintf(fptr," ");
        }

        int numSides = size + 2 * (size - abs(size - row));
        for (int column = 0; column < numSides; column++)
        {
            if (column == 0 || column == numSides - 1)
            {
                get_colour(outline_col, outline_col); // Set the outline color
                printf("%c", character_input);
                fprintf(fptr,"%c",character_input);
            }
            else
            {
                get_colour(fill_col, fill_col); // Set the fill color
                printf("%c", character_input);
                fprintf(fptr,"%c",character_input);
            }
        }

        printf("\n");
        fprintf(fptr,"\n");
    
y++;
        gotoxy(x,y);
    }
}