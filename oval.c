
#include "data_header.h"
void filled_oval(int size,char pos, char character_input, char fill_col, char outline_col)
{
    int x = set_x_axis(pos,size*3);
    int y=10;
    gotoxy(x,y);

    int centerX = size;
    int centerY = size;

    for (int row = 0; row <= 2 * size; row++)
    {
        for (int column = 0; column <= 2 * size; column++)
        {
            double distance = sqrt((row - centerX) * (row - centerX) + (column - centerY) * (column - centerY));

            if (distance <= size + 0.5)
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
        gotoxy(x,y);
    }
}
void hollow_oval(int size,char pos, char character_input, char outline_col)
{
    int x = set_x_axis(pos,size*3);
    int y=10;
    gotoxy(x,y);
;
    int centerX = size;
    int centerY = size;

    for (int row = 0; row <= 2 * size; row++)
    {
        for (int column = 0; column <= 2 * size; column++)
        {
            double distance = sqrt((row - centerX) * (row - centerX) + (column - centerY) * (column - centerY));

            if (distance <= size + 0.5)
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
        gotoxy(x,y);
    }
}