#include "data_header.h"
void filled_butterfly(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos, size * 3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 1; row <= size; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            if (column == 1 || column == row || row == size)
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

        for (int column = row + 1; column <= size; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }

        for (int column = 1; column <= row; column++)
        {
            if (column == 1 || column == row || row == size)
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
    }

    for (int row = size - 1; row >= 1; row--)
    {
        for (int column = 1; column <= row; column++)
        {
            if (column == 1 || column == row || row == size)
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

        for (int column = row + 1; column <= size; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }

        for (int column = 1; column <= row; column++)
        {
            if (column == 1 || column == row || row == size)
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
    }
}

void hollow_butterfly(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos, size * 3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 1; row <= size; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            if (column == 1 || column == row || row == size)
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

        for (int column = row + 1; column <= size; column++)
        {
            printf("  ");
            fprintf(fptr, "  ");
        }

        for (int column = 1; column <= row; column++)
        {
            if (column == 1 || column == row || row == size)
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
    }

    for (int row = size - 1; row >= 1; row--)
    {
        for (int column = 1; column <= row; column++)
        {
            if (column == 1 || column == row || row == size)
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

        for (int column = row + 1; column <= size; column++)
        {
            printf("  ");
            fprintf(fptr, "  ");
        }

        for (int column = 1; column <= row; column++)
        {
            if (column == 1 || column == row || row == size)
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
    }
}