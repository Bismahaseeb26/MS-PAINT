#include "data_header.h"

void hollow_heart(int size, char pos, char character_input, char outline_col)
{
    int x = set_x_axis(pos, size * 3);
    int y = 10;
    gotoxy(x, y);

    // Printing top semi-circular shapes of heart
    for (int row = size / 2; row <= size; row += 2)
    {
        // Printing spaces
        for (int column = 1; column < size - row; column += 2)
        {
            printf(" ");
            fprintf(fptr," ");
        }
        // Printing characters for left semi-circle
        for (int column = 1; column <= row; column++)
        {
            if (column == 1 || column == row || row == size)
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
        // Printing spaces
        for (int column = 1; column <= size - row; column++)
        {
            printf(" ");
            fprintf(fptr," ");
        }
        y++;
        gotoxy(x, y);
        // Printing characters for the right semi-circle
        for (int column = 1; column <= row; column++)
        {
            if (column == 1 || column == row || row == size)
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
        // Move to the next row
        printf("\n");
        fprintf(fptr,"\n");

        y++;
        gotoxy(x, y);
    }

    // Printing inverted star pyramid
    for (int row = size - 1; row >= 1; row--)
    { // Changed the loop starting condition
        for (int column = 1; column < size - row; column++)
        {
            printf(" ");
            fprintf(fptr," ");
        }
        // Printing characters for the inverted pyramid
        for (int column = 1; column <= (row * 2) - 1; column++)
        {
            if (column == 1 || column == (row * 2) - 1 || row == size)
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
        // Move to the next row
        printf("\n");
        fprintf(fptr,"\n");

        y++;
        gotoxy(x, y);
    }
}
void filled_heart(int size, char pos, char character_input, char outline_col, char fill_col)
{
    int x = set_x_axis(pos, size * 3);
    int y = 10;
    gotoxy(x, y);

    // Printing top semi-circular shapes of heart
    for (int row = size / 2; row <= size; row += 2)
    {
        // Printing spaces
        for (int column = 1; column < size - row; column += 2)
        {
            printf(" ");
            fprintf(fptr," ");
        }
        // Printing characters for left semi-circle
        for (int column = 1; column <= row; column++)
        {
            if (column == 1 || column == row || row == size)
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
        // Printing spaces
        for (int column = 1; column <= size - row; column++)
        {
            printf(" ");
            fprintf(fptr," ");
        }
        // Printing characters for right semi-circle
        for (int column = 1; column <= row; column++)
        {
            if (column == 1 || column == row || row == size)
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
        // Move to the next row
        printf("\n");
        fprintf(fptr,"\n");
    }

    y++;
    gotoxy(x, y);

    // Printing inverted star pyramid
    for (int row = size - 1; row >= 1; row--)
    { // Changed the loop starting condition
        for (int column = 1; column < size - row; column++)
        {
            printf(" ");
            fprintf(fptr," ");
        }
        // Printing characters for the inverted pyramid
        for (int column = 1; column <= (row * 2) - 1; column++)
        {
            if (column == 1 || column == (row * 2) - 1 || row == size)
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
        // Move to the next row
        printf("\n");
        fprintf(fptr,"\n");

        y++;
        gotoxy(x, y);
    }
}