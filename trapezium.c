#include "data_header.h"
void hollow_trapezium(int size, char pos, char character_input, char outline_col)

{
    int x = set_x_axis(pos, size * 3);
    int y = 10;
    gotoxy(x, y);

    int topWidth = size;
    int height = size;

    for (int row = 0; row < height; row++)
    {
        for (int column = 0; column < height - row - 1; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 0; column < topWidth; column++)
        {
            if (row == 0 || row == height - 1 || column == 0 || column == topWidth - 1)
            {
                get_colour(outline_col, outline_col); // Set the outline color
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

        topWidth += 2;
    }
}

void filled_trapezium(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int topWidth = size;
    int height = size;
    int x = set_x_axis(pos, size * 3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 0; row < height; row++)
    {
        for (int column = 0; column < height - row - 1; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 0; column < topWidth; column++)
        {
            if (row == 0 || row == height - 1 || column == 0 || column == topWidth - 1)
            {
                get_colour(outline_col, outline_col); // Set the outline color
                printf("%c", character_input);
                fprintf(fptr, "%c", character_input);
            }
            else
            {
                get_colour(fill_col, fill_col); // Set the fill color
                printf("%c", character_input);
                fprintf(fptr, "%c", character_input);
            }
        }
        printf("\n");
        fprintf(fptr, "\n");

        y++;
        gotoxy(x, y);
        topWidth += 2;
    }
}