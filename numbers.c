#include "data_header.h"
void print1(int height, char character_selection, char color_choice)
{
    color(color_choice);

    for (int rows = 1; rows <= height; rows++)
    {
        for (int columns = 1; columns <= rows; columns++)
        {
            if (columns == 1)
            {
                printf("%c ", character_selection);
                fprintf(fptr, "%c ", character_selection); // Use fprintf with fptr
            }
            else
            {
                printf("  ");
                fprintf(fptr, "  "); // Use fprintf with fptr
            }
        }

        printf("\n");
        fprintf(fptr, "\n"); // Use fprintf with fptr
    }
}

void print2(int height, char character_selection, char color_choice)
{
    color(color_choice);
      for (int row =1 ; row<=height ; row++)
    {
        for (int column = 1 ; column<=height ; column++)
        {
            if (( row == 1 && column!=1 && column!=height && column!=height-1) || 
            (row == height) ||
            (column == 1 && row == 2) ||
            (column == height-1 && row == 2) ||
            (column!=height && column == (height-row)+1) ||
            (row == 2 && column == 1 && column ==height ))
            {
                printf("%c", character_selection);
                fprintf(fptr,"%c",character_selection);
            }
            else
            {
                printf(" ");
                fprintf(fptr," ");
            }
        }
        printf("\n");
        fprintf(fptr,"\n");
    }
}
void print3(int height, char character_selection, char color_choice)
{
    color(color_choice);

    for (int row = 1; row <= height; row++)
    {
        for (int column = 1; column <= height; column++)
        {
            if (height % 2 == 0)
            {
                if ((row == height && (column != 1 && column != height)) ||
                    (row == 1 && (column != 1 && column != height)) ||
                    (column == height && (row != 1 && row != height && row != height / 2)) ||
                    (row == height / 2 && (column != 1 && column != height)))
                {
                    
                        printf("%c", character_selection);
                        fprintf(fptr, "%c", character_selection);
                     // Use fprintf with fptr
                }
                else
                {
                    printf(" ");
                    fprintf(fptr, " "); // Use fprintf with fptr
                }
            }
            else
            {
                if ((row == height && (column != 1 && column != height)) ||
                    (row == 1 && (column != 1 && column != height)) ||
                    (column == height && (row != 1 && row != height && row != height / 2 + 1)) ||
                    (row == height / 2 + 1 && (column != 1 && column != height)))
                {
                    printf("%c", character_selection);
                    fprintf(fptr, "%c", character_selection); // Use fprintf with fptr
                }
                else
                {
                    printf(" ");
                    fprintf(fptr, " "); // Use fprintf with fptr
                }
            }
        }
        printf("\n");
        fprintf(fptr, "\n"); // Use fprintf with fptr
    }
}

void print4(int height, char character_selection, char color_choice)
{
    color(color_choice);

    for (int row = 1; row <= height; row++)
    {
        for (int column = 1; column <= height; column++)
        {
            if (height % 2 == 0)
            {

                if (

                    (column == 1 && (row != 1 && row != height && row != height / 2 && row != height / 2 + 1 && row != height / 2 + 2 && row != height / 2 + 3)) ||
                    (column == height && (row = 1 && row != height / 2 && row != height && row != height / 2)) ||
                    (row == height / 2 && (column != 1 && column != height)))
                {

                    printf("%c", character_selection);
                    fprintf(fptr, "%c", character_selection);
                }
                else
                {
                     printf(" ");
                    fprintf(fptr, " ");
                }
            }
            else
            {

                if (

                    (column == 1 && (row != 1 && row != height && row != height / 2 + 1 &&
                     row != height / 2 + 2 && row != height / 2 + 3 && row != height / 2 + 4)) ||
                    (column == height && (row != 1 && row != height && row != height / 2 + 1)) ||
                    (row == height / 2 + 1 && (column != 1 && column != height)))
                {
                    printf("%c", character_selection);
                    fprintf(fptr, "%c", character_selection);
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

void print5(int height, char character_selection, char color_choice)
{
    color(color_choice);

     for (int row = 1; row <= height; row++)
    {
        for (int column = 1; column <= height; column++)
        {
            if ( height % 2 == 0)
            {
                if ((row == height && (column == 1 && column != height)) ||
                    (row == 1 && (column == 1 && column != height)) ||
                   (column == 1 && (row != 1 && row != height && row != height / 2 && row != height / 2 + 1 
                    && row != height / 2 + 2 && row != height / 2 + 3)) ||
                    (column == height && (row != 1 && row != height && row != height / 2 && row != 2 && row != 3)) ||
                    (row == height / 2 && (column != 1 && column != height)))
                {
       
                    printf("%c", character_selection);
                    fprintf(fptr, "%c", character_selection);
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
        
                    printf("%c", character_selection);
                    fprintf(fptr, "%c", character_selection);
                }
                else
                {
                   
                    printf(" ");
                    fprintf(fptr, " ");
                }
            }
        }
        printf("\n");
        fprintf(fptr,"\n");
    }
}

void print6(int height, char character_selection, char color_choice)
{
    color(color_choice);

    for (int row = 1; row <= height; row++)
    {
        for (int column = 1; column <= height; column++)
        {
            if (height % 2 == 0)
            {
                if ((row == height && (column != 1 && column != height)) ||
                    (row == 1 && (column != 1 && column != height)) ||
                    (column == 1 && (row != 1 && row != height && row != height / 2)) ||
                    (column == height && (row != 1 && row != height && row != height / 2 && row != 2 && row != 3)) ||
                    (row == height / 2 && (column != 1 && column != height)))
                {
                    printf("%c", character_selection);
                    fprintf(fptr, "%c", character_selection); // Use fprintf with fptr
                }
                else
                {
                    printf(" ");
                    fprintf(fptr, " "); // Use fprintf with fptr
                }
            }
            else
            {
                if ((row == height && (column != 1 && column != height)) ||
                    (row == 1 && (column != 1 && column != height)) ||
                    (column == 1 && (row != 1 && row != height && row != height / 2 + 1)) ||
                    (column == height && (row != 1 && row != height && row != height / 2 + 1 && row != height / 2 && row != 2 && row != 3)) ||
                    (row == height / 2 + 1 && (column != 1 && column != height)))
                {
                    printf("%c", character_selection);
                    fprintf(fptr, "%c", character_selection); // Use fprintf with fptr
                }
                else
                {
                    printf(" ");
                    fprintf(fptr, " "); // Use fprintf with fptr
                }
            }
        }
        printf("\n");
        fprintf(fptr, "\n"); // Use fprintf with fptr
    }
}

void print7(int height, char character_selection, char color_choice)
{
    color(color_choice);

    for (int rows = height; rows >= 1; rows--)
    {

        for (int columns = rows; columns <= height; columns++)
        {
            printf(" ");
            fprintf(fptr, " "); // Use fprintf with fptr
        }

        for (int columns = 1; columns <= rows; columns++)
        {
            if (rows == height || columns == rows)
            {
                printf("%c", character_selection);
                fprintf(fptr, "%c", character_selection); // Use fprintf with fptr
            }
            else
            {
                printf(" ");
                fprintf(fptr, " "); // Use fprintf with fptr
            }
        }

        printf("\n");
        fprintf(fptr, "\n"); // Use fprintf with fptr
    }
}

void print8(int height, char character_selection, char color_choice)
{
    color(color_choice);

    for (int row = 1; row <= height; row++)
    {
        for (int column = 1; column <= height; column++)
        {
            if (height % 2 == 0)
            {
                if ((row == height && (column != 1 && column != height)) ||
                    (row == 1 && (column != 1 && column != height)) ||
                    (column == 1 && (row != 1 && row != height && row != height / 2)) ||
                    (column == height && (row != 1 && row != height && row != height / 2)) ||
                    (row == height / 2 && (column != 1 && column != height)))
                {
                    printf("%c", character_selection);
                    fprintf(fptr, "%c", character_selection); // Use fprintf with fptr
                }
                else
                {
                    printf(" ");
                    fprintf(fptr, " "); // Use fprintf with fptr
                }
            }
            else
            {
                if ((row == height && (column != 1 && column != height)) ||
                    (row == 1 && (column != 1 && column != height)) ||
                    (column == 1 && (row != 1 && row != height && row != height / 2 + 1)) ||
                    (column == height && (row != 1 && row != height && row != height / 2 + 1)) ||
                    (row == height / 2 + 1 && (column != 1 && column != height)))
                {
                    printf("%c", character_selection);
                    fprintf(fptr, "%c", character_selection); // Use fprintf with fptr
                }
                else
                {
                    printf(" ");
                    fprintf(fptr, " "); // Use fprintf with fptr
                }
            }
        }
        printf("\n");
        fprintf(fptr, "\n"); // Use fprintf with fptr
    }
}

void print9(int height, char character_selection, char color_choice)
{
    color(color_choice);

    for (int row = 1; row <=height; row++)
    {
        for (int column = 1; column <=height; column++) 
        {
          if (height%2==0)
            {
                if ((row == height && (column != 1 && column != height)) || 
             (row == 1 && (column != 1 && column != height)) ||
             (column == 1 && (row != 1 && row != height  && row<height/2)) ||
             (column == height && (row != 1 && row != height && row!=height/2))||
             (row==height/2 && ( column!=1 )))
               {
                   printf("%c", character_selection);
                   fprintf(fptr,"%c",character_selection);
                }    
                else
                {
                   printf(" ");
                   fprintf(fptr," ");
                }
            }
            else
            {
                if ((row == height && (column != 1 && column != height)) || 
             (row == 1 && (column != 1 && column != height)) ||
             (column == 1 && (row != 1 && row != height  && row<height/2+1)) ||
             (column == height && (row != 1 && row != height && row!=height/2+1))||
             (row==height/2+1 && ( column!=1 )))
               {
                   printf("%c", character_selection);
                   fprintf(fptr,"%c",character_selection);
               }    
                else
               {
                   printf(" ");
                   fprintf(fptr," ");
               }
            }
        }
        printf("\n");
        fprintf(fptr,"\n");
    }
    }
