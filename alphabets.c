#include "data_header.h"
void printA(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height / 2 + 1; col++)
        {
            if ((col == 0 || col == height / 2) && row != 0 || (col == height / 2 && row != 0) || (row == 0 && col != 0 && col != height / 2) || row == height / 2)
            {

                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else
            {
                printf("  ");
                fprintf(fptr, "  ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}

void printB(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height / 2 + 1; col++)
        {
            if (col == 0 || (row == 0 || row == height / 2 || row == height - 1) && col != height / 2)
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else if (col == height / 2 && !(col == 0 || (row == 0 || row == height / 2 || row == height - 1)))
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else
            {
                printf("  ");
                fprintf(fptr, "  ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}
void printC(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height / 2 + 1; col++)
        {
            if (col == 0 && row != 0 && row != height - 1)
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else if ((row == 0 || row == height - 1) && col != 0)
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else
            {
                printf("  ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}
void printD(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height / 2 + 1; col++)
        {
            if (col == 0)
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else if ((row == 0 || row == height - 1) && col != height / 2)
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else if (col == height / 2 && row != 0 && row != height - 1)
            {
                printf(" %c", character_type);
                fprintf(fptr, " %c", character_type);
            }
            else
            {
                printf("  ");
                fprintf(fptr, "  ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}
void printE(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height / 2 + 1; col++)
        {
            if (col == 0 && row != 0 && row != height - 1)
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else if (row == height / 2 && col != height / 2)
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else if ((row == 0 || row == height - 1) && col != 0)
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else
            {
                printf("  ");
                fprintf(fptr, "  ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}
void printF(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height / 2 + 1; col++)
        {
            if (col == 0 && row != 0)
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else if (row == height / 2 && col != height / 2)
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else if (row == 0 && col != 0)
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else
            {
                printf("  ");
                fprintf(fptr, "  ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}
void printG(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < height; col++)
        {
            if ((row == 0 && (col != 0 && col != height - 1)) ||
                (row == height - 1 && (col != 0 && col != height - 1)) ||
                (row == height / 2 && col >= height / 2) ||
                (col == 0 && (row > 0 && row < height - 1)) ||
                (col == height - 1 && row > height / 2 && row < height - 1))
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, "  ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}
void printH(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int row = 1; row <= height; row++)
    {
        for (int col = 1; col <= height; col++)
        {
            if (col == 1 || col == height || row == height / 2)
            {
                printf(" %c", character_type);
                fprintf(fptr, " %c", character_type);
            }
            else
            {
                printf("  ");
                fprintf(fptr, "  ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}
void printI(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int i = 0; i < height; i++)
    {
        if (i == 0 || i == height - 1)
        {
            for (int j = 0; j < height; j++)
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
        }
        else
        {
            for (int j = 0; j < height / 2; j++)
            {
                printf(" ");
                fprintf(fptr, " ");
            }
            printf("%c", character_type);
            fprintf(fptr, "%c", character_type);
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}

void printJ(int height, char character_type, char color_choice)
{
    color(color_choice);
    int i, j;
    for (i = 0; i < height; i++)
    {
        for (j = 0; j < height; j++)
        {
            if (i == height - 1 && (j > 0 && j < height - 1))
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else if ((j == height - 1 && i != height - 1) || (i > (height / 2) - 1 && j == 0 && i != height - 1))
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}
void printK(int height, char character_type, char color_choice)
{
    color(color_choice);
    int i, j, half = height / 2, dummy = half;
    for (i = 0; i < height; i++)
    {
        printf("%c", character_type);
        for (j = 0; j <= half; j++)
        {
            if (j == abs(dummy))
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
        dummy--;
    }
}

void printL(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height; j++)
        {
            if (j == 1 || i == height)
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}
void printM(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int i = 0; i < height; i++)
    {
        printf("%c");
        fprintf(fptr, "%c", character_type);
        for (int j = 0; j <= height; j++)
        {
            if (j == height)
            {
                printf("%c", character_type);
                printf("%c", character_type);
            }
            else if (j == i || j == height - i - 1)
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        if (i == height / 2)
        {
            i = height; // Equivalent to setting counter to a large negative value
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}
void printN(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height; j++)
        {
            if (j == 1 || j == height || i == j)
            {

                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}
void printO(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= height; j++)
        {
            if ((j == 1 || j == height) && (i > 1 && i < height) || (i == 1 || i == height) && (j > 1 && j < height))
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}
void printP(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int i = 0; i < height; i++)
    {

        for (int j = 0; j < height; j++)
        {
            if ((i == 0 || i == height / 2) && j < height - 1)
            {
                printf("%c", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else if (i < height / 2 && j == height - 1 && i != 0)
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}
void printQ(int height, char character_type, char color_choice)
{
    color(color_choice);

    for (int row = 0; row < height; row++)
    {
        for (int column = 0; column < height; column++)
        {
            if (row == 0 || row == height - 1 || column == 0 || column == height - 1)
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
    color(color_choice);
    for (int row = 0; row < height / 2; row++)
    {
        for (int column = 0; column <= height; column++)
        {
            if (column == height)
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
        height++;
    }
}

void printR(int height, char character_type, char color_choice)
{
    color(color_choice);
    int half;
    int width = height - 1;

    half = height / 2;

    for (int row = 0; row < height; row++)
    {
        printf("%c ", character_type);
        for (int column = 0; column < width; column++)
        {
            if ((row == 0 || row == half) && column < (width - 2))
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else if (column == (width - 2) && !(row == 0 || row == half))
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else
            {
                printf("  ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}
void printS(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int row = 1; row <= height; row++)
    {
        for (int column = 1; column <= height; column++)
        {
            if (height % 2 == 0)
            {
                if ((row == height && (column == 1 && column != height)) ||
                    (row == 1 && (column == 1 && column != height)) ||
                    (column == 1 && (row != 1 && row != height && row != height / 2 && row != height / 2 + 1 && row != height / 2 + 2 && row != height / 2 + 3)) ||
                    (column == height && (row != 1 && row != height && row != height / 2 && row != 2 && row != 3)) ||
                    (row == height / 2 && (column != 1 && column != height)))
                {

                    printf("%c", character_type);
                    fprintf(fptr, "%c", character_type);
                }
                else
                {

                    printf(" ");
                    fprintf(fptr, " ");
                }
            }
            else
            {
                if ((row == height && (column != 1 && column != height)) ||
                    (row == 1 && (column != 1 && column != height)) ||
                    (column == 1 && (row != 1 && row != height && row != height / 2 + 1 &&
                                     row != height / 2 + 2 && row != height / 2 + 3 && row != height / 2 + 4)) ||
                    (column == height && (row != 1 && row != height && row != height / 2 + 1 && row != height / 2 && row != 2 && row != 3)) ||
                    (row == height / 2 + 1 && (column != 1 && column != height)))
                {

                    printf("%c", character_type);
                    fprintf(fptr, "%c", character_type);
                }
                else
                {

                    printf(" ");
                    fprintf(fptr, " ");
                }
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}

void printT(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int row = 1; row <= height * 2 - 1; row++)
    {
        printf("%c", character_type);
        fprintf(fptr, "%c", character_type);
    }
    printf("\n");
    for (int row = 1; row <= height; row++)
    {
        for (int column = 1; column <= height * 2 - 1; column++)
        {
            if (column == height)
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}

void printU(int height, char character_type, char color_choice)
{
    color(color_choice);
    int row, column;

    for (row = 0; row < height; row++)
    {
        if (row != 0 && row != height - 1)
        {
            printf("%c", character_type);
            fprintf(fptr, "%c", character_type);
        }

        else
        {
            printf(" ");
            fprintf(fptr, " ");
        }

        for (column = 0; column < height; column++)
        {
            if (((row == height - 1) && column >= 0 && column < height - 1))
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else if (column == height - 1 && row != 0 && row != height - 1)
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}

void printV(int height, char character_type, char color_choice)
{
    color(color_choice);
    int row, column;

    for (row = height; row >= 1; row--)
    {
        for (column = row; column <= height; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (column = 1; column <= row; column++)
        {
            if (column == row || column == 1)
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else
            {
                printf("  ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}

void printW(int height, char character_type, char color_choice)
{
    color(color_choice);
    int row, column;
    int counter = height / 2;

    for (row = 0; row < height; row++)
    {
        printf("%c", character_type);
        for (column = 0; column <= height; column++)
        {
            if (column == height)
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else if ((row >= height / 2) && (column == counter || column == height - counter - 1))
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }

            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        if (row >= height / 2)
        {
            counter++;
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}

void printX(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int row = height / 2; row >= 1; row--)
    {
        for (int column = row; column < height / 2; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 1; column <= (2 * row - 1); column++)
        {
            if (column == 1 || column == (2 * row - 1))
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
    color(color_choice);
    for (int row = 2; row <= height / 2; row++)
    {
        for (int column = row; column < height / 2; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 1; column <= (2 * row - 1); column++)
        {
            if (column == 1 || column == (2 * row - 1))
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}

void printY(int height, char character_type, char color_choice)
{
    color(color_choice);
    for (int row = height / 2; row >= 1; row--)
    {
        for (int column = row; column <= height / 2; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 1; column <= row; column++)
        {
            if (column == row || column == 1)
            {
                printf("%c ", character_type);
                fprintf(fptr, "%c ", character_type);
            }
            else
            {
                printf("  ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
    color(color_choice);
    for (int row = 1; row <= height / 2; row++)
    {
        for (int column = row; column <= height / 2; column++)
        {
            printf(" ");
            fprintf(fptr, " ");
        }
        for (int column = 1; column <= row; column++)
        {
            if (column == row)
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        printf("\n");
        fprintf(fptr, "\n");
    }
}

void printZ(int height, char character_type, char color_choice)
{
    int counter = height - 1;
    color(color_choice);
    for (int row = 0; row < height; row++)
    {
        for (int column = 0; column < height; column++)
        {
            if (row == 0 || row == height - 1 || column == counter)
            {
                printf("%c", character_type);
                fprintf(fptr, "%c", character_type);
            }
            else
            {
                printf(" ");
                fprintf(fptr, " ");
            }
        }
        counter--;
        printf("\n");
        fprintf(fptr, "\n");
    }
}