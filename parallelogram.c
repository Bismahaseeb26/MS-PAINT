#include "data_header.h"

// Function to print a hollow parallelogram
void hollow_parallelogram(int size, char pos, char character_input, char outline_col)
{
    int x = set_x_axis(pos, size * 3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 1; row <= size; row++)
    {
        for (int column = 1; column <= size - row; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 1; column <= size; column++)
        {
            if ((row > 1 && row < size) && (column > 1 && column < size))
            {
                printf(" ");
                fprintf(fptr, " ");
            }
            else
            {
                get_colour(outline_col, outline_col); // Set the outline color
                printf("%c", character_input);
                fprintf(fptr, "%c", character_input);
            }
        }

        y++;
        gotoxy(x, y);
        printf("\n");
        fprintf(fptr, "\n");
    }
}

void filled_parallelogram(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos, size * 3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 1; row <= size; row++)
    {
        for (int column = 1; column <= size - row; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 1; column <= size; column++)
        {
            if ((row > 1 && row < size) && (column > 1 && column < size))
            {
                get_colour(fill_col, fill_col); // Set the fill color
                printf("%c", character_input);
                fprintf(fptr, "%c", character_input);
            }
            else
            {
                get_colour(outline_col, outline_col); // Set the outline color
                printf("%c", character_input);
                fprintf(fptr, "%c", character_input);
            }
        }

        printf("\n");
        fprintf(fptr, "\n");

        y++;
        gotoxy(x, y);
    }
}