#include "data_header.h"

void pyramid_filled_triangle(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos, size*3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 1; row <= size; row++)
    {
        for (int column = row; column <= size; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 1; column <= row; column++)
        {
            if (row == size || column == row || column == 1)
            {
                get_colour(outline_col, outline_col); // Set the outline color
                printf("%c ", character_input);
                fprintf(fptr, "%c ", character_input);
            }
            else
            {
                get_colour(fill_col, fill_col); // Set the fill color
                printf("%c ", character_input);
                fprintf(fptr, "%c ", character_input);
            }
        }
        printf("\n");
        fprintf(fptr, "\n");

        y++;
        gotoxy(x, y);
    }
}

void pyramid_hollow_triangle(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos, size*3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 1; row <= size; row++)
    {
        for (int column = row; column <= size; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 1; column <= row; column++)
        {
            if (row == size || column == row || column == 1)
            {
                get_colour(outline_col, outline_col); // Set the outline color
                printf("%c ", character_input);
                fprintf(fptr, "%c ", character_input);
            }
            else
            {
                get_colour(fill_col, fill_col); // Set the fill color
                printf("  ");
                fprintf(fptr, "  ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");

        y++;
        gotoxy(x, y);
    }
}

void pyramid_inverted_filled_triangle(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos, size*3);
    int y = 10;
    gotoxy(x, y);

    for (int row = size; row >= 1; row--)
    {
        for (int column = row; column <= size; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 1; column <= row; column++)
        {
            if (row == size || column == row || column == 1)
            {
                get_colour(outline_col, outline_col); // Set the outline color
                printf("%c ", character_input);
                fprintf(fptr, "%c ", character_input);
            }
            else
            {
                get_colour(fill_col, fill_col); // Set the fill color
                printf("%c ", character_input);
                fprintf(fptr, "%c ", character_input);
            }
        }
        printf("\n");
        fprintf(fptr, "\n");

        y++;
        gotoxy(x, y);
    }
}

void pyramid_inverted_hollow_triangle(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos, size*3);
    int y = 10;
    gotoxy(x, y);

    for (int row = size; row >= 1; row--)
    {
        for (int column = row; column <= size; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 1; column <= row; column++)
        {
            if (row == size || column == row || column == 1)
            {
                get_colour(outline_col, outline_col); // Set the outline color
                printf("%c ", character_input);
                fprintf(fptr, "%c ", character_input);
            }
            else
            {
                get_colour(fill_col, fill_col); // Set the fill color
                printf("  ");
                fprintf(fptr, "  ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");

        y++;
        gotoxy(x, y);
    }
}

void right_filled_triangle(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos, size*3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 1; row <= size; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            if (row == size || column == row || column == 1)
            {
                get_colour(outline_col, outline_col); // Set the outline color
                printf("%c ", character_input);
                fprintf(fptr, "%c ", character_input);
            }
            else
            {
                get_colour(fill_col, fill_col); // Set the fill color
                printf("%c ", character_input);
                fprintf(fptr, "%c ", character_input);
            }
        }
        printf("\n");
        fprintf(fptr, "\n");

        y++;
        gotoxy(x, y);
    }
}

void right_hollow_triangle(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos, size*3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 1; row <= size; row++)
    {
        for (int column = 1; column <= row; column++)
        {
            if (row == size || column == row || column == 1)
            {
                get_colour(outline_col, outline_col); // Set the outline color
                printf("%c", character_input);
                fprintf(fptr, "%c", character_input);
            }
            else
            {
                get_colour(fill_col, fill_col); // Set the fill color
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

void right_mirrored_filled_triangle(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos, size*3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 1; row <= size; row++)
    {
        for (int column = row; column < size; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 1; column <= row; column++)
        {
            if (row == size || column == row || column == 1)
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

void right_mirrored_hollow_triangle(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos, size*3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 1; row <= size; row++)
    {
        for (int column = row; column < size; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 1; column <= row; column++)
        {
            if (row == size || column == row || column == 1)
            {
                get_colour(outline_col, outline_col); // Set the outline color
                printf("%c", character_input);
                fprintf(fptr, "%c", character_input);
            }
            else
            {
                get_colour(fill_col, fill_col); // Set the fill color
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

void right_inverted_filled_triangle(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos, size*3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 1; row <= size; row++)
    {
        for (int column = row; column <= size; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 1; column <= row; column++)
        {
            if (row == 1 || column == row || column == size)
            {
                get_colour(outline_col, outline_col); // Set the outline color
                printf("%c ", character_input);
                fprintf(fptr, "%c ", character_input);
            }
            else
            {
                get_colour(fill_col, fill_col); // Set the fill color
                printf("%c ", character_input);
                fprintf(fptr, "%c ", character_input);
            }
        }
        printf("\n");
        fprintf(fptr, "\n");

        y++;
        gotoxy(x, y);
    }
}

void right_inverted_hollow_triangle(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos, size*3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 1; row <= size; row++)
    {
        for (int column = row; column <= size; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 1; column <= row; column++)
        {
            if (row == 1 || column == row || column == size)
            {
                get_colour(outline_col, outline_col); // Set the outline color
                printf("%c ", character_input);
                fprintf(fptr, "%c ", character_input);
            }
            else
            {
                get_colour(fill_col, fill_col); // Set the fill color
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

void right_inverted_mirrored_filled_triangle(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos, size*3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 1; row <= size; row++)
    {
        for (int column = 1; column < row; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = row; column <= size; column++)
        {
            if (row == 1 || column == row || column == size)
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

void right_inverted_mirrored_hollow_triangle(int size, char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos, size*3);
    int y = 10;
    gotoxy(x, y);

    for (int row = 1; row <= size; row++)
    {
        for (int column = 1; column < row; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = row; column <= size; column++)
        {
            if (row == 1 || column == row || column == size)
            {
                get_colour(outline_col, outline_col); // Set the outline color
                printf("%c", character_input);
                fprintf(fptr, "%c", character_input);
            }
            else
            {
                get_colour(fill_col, fill_col); // Set the fill color
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