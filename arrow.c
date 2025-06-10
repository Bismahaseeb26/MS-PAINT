
#include "data_header.h"
void Right_Arrow(int size, char pos, char character_input, char fill_col)
{
    int x = set_x_axis(pos, size * 3);
    int y = 10;

    gotoxy(x, y);
    int m = size / 2 * 3;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (j - i == size / 2 || i == size / 2 || i + j == m)
            {
                get_colour(fill_col, fill_col); // Set the fill color
                printf("%c", character_input);
                fprintf(fptr, "%c", character_input);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");

        y++;
        gotoxy(x, y);
    }
}

void Left_Arrow(int size, char pos, char character_input, char fill_col)
{
    int x = set_x_axis(pos, size * 3);
    int y = 10;
    gotoxy(x, y);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i == size / 2 || i - j == size / 2 || i + j == size / 2)
            {
                get_colour(fill_col, fill_col); // Set the fill color
                printf("%c", character_input);
                fprintf(fptr, "%c", character_input);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");

        y++;
        gotoxy(x, y);
    }
}

void Up_Arrow(int size, char pos, char character_input, char fill_col)
{
    int x = set_x_axis(pos, size * 3);
    int y = 10;
    gotoxy(x, y);

    // Print the arrowhead
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j <= 2 * size - 1; j++)
        {
            if (j >= size - (i - 1) && j <= size + (i - 1))
            {
                get_colour(fill_col, fill_col); // Set the fill color
                printf("%c", character_input);  // Print the character_input inside the arrowhead
                fprintf(fptr, "%c", character_input);
            }
            else
            {
                printf(" "); // Print a space outside the arrowhead
                fprintf(fptr, " ");
            }
        }
        printf("\n"); // Move to the next row after each inner loop
        fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
    y++;
    gotoxy(x, y);

    // Print the straight line of the arrow
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= 2 * size - 1; j++)
        {
            if (j == size)
            {
                get_colour(fill_col, fill_col); // Set the fill color
                printf("%c", character_input);  // Print the character_input for the straight line
                fprintf(fptr, "%c", character_input);
            }
            else
            {
                printf(" "); // Print a space for the empty space around the line
                fprintf(fptr, " ");
            }
        }
        printf("\n"); // Move to the next row after each inner loop
        fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}

void Down_Arrow(int size, char pos, char character_input, char fill_col)
{
    int x = set_x_axis(pos, size * 3);
    int y = 10;
    gotoxy(x, y);

    // Print the straight line of the arrow
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j <= 2 * size - 1; j++)
        {
            if (j == size)
            {
                get_colour(fill_col, fill_col); // Set the fill color
                printf("%c", character_input);  // Print the character_input for the straight line
                fprintf(fptr, "%c", character_input);
            }
            else
            {
                printf(" "); // Print a space for the empty space around the line
                fprintf(fptr, " ");
            }
        }
        printf("\n"); // Move to the next row after each inner loop
        fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }

    // Print the arrowhead
    for (int i = size; i >= 0; i--)
    {
        for (int j = 0; j <= 2 * size - 1; j++)
        {
            if (j >= size - (i - 1) && j <= size + (i - 1))
            {
                get_colour(fill_col, fill_col); // Set the fill color
                printf("%c", character_input);  // Print the character_input inside the arrowhead
                fprintf(fptr, "%c", character_input);
            }
            else
            {
                printf(" "); // Print a space outside the arrowhead
                fprintf(fptr, " ");
            }
        }
        printf("\n"); // Move to the next row after each inner loop
        fprintf(fptr, "\n");
        y++;
        gotoxy(x, y);
    }
}