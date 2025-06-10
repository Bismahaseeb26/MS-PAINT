#include "interface_header.h"
void auto_saving()
{
    fptr = fopen("kashaf.txt", "w");
}
void file_saving()
{
    system("cls");
    char ch;
    char file_name[100];
    printf("Enter name of file like this C:\\kashaf\\MSPAINT\\file_name\n");
    printf("Ab mein idher hoon");
    gets(file_name);
    gets(file_name);
    strcat(file_name, ".txt");
    fclose(fptr);
    FILE *fptr2;
    fptr2 = fopen(file_name, "w");
    fptr = fopen("kashaf.txt", "r");
    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("Chal raha bhi");
    }
    printf("Ab mein idher hoon");
}
void view_file()
{
    char ch;
    FILE *fptr2;
    char file_name[100];
    printf("Enter name of file like this C:\\kashaf\\MSPAINT\\file_name\n");
    gets(file_name);
    strcat(file_name, ".txt");
    fptr2 = fopen(file_name, "r");

    if (fptr2 == NULL)
    {
        printf("Error creating/appending the file\n");
    }
    while ((ch = fgetc(fptr2)) != EOF)
    {
        printf("%c", ch);
    }
}
void file_edit()
{
    char ch;
    fclose(fptr);
    FILE *fptr2;
    char file_name[100];
    printf("Enter name of file like this C:\\kashaf\\MSPAINT\\file_name\n");
    gets(file_name);
    strcat(file_name, ".txt");
    fptr2 = fopen(file_name, "r");

    if (fptr2 == NULL)
    {
        printf("Error creating/appending the file\n");
    }
    while ((ch = fgetc(fptr2)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fptr2);
    fptr = fopen(file_name, "a");
}

// function to print instruction screen
int instruction_screen()
{
    system("cls");
    int terminal_width = get_terminal_width();

    if (terminal_width == -1)
    {
        fprintf(stderr, "Unable to determine terminal width.\n");
        return 1;
    }

    char option_text[] = "INSTRUCTIONS TO DRAW ON TERMINAL";
    int text_width = strlen(option_text);
    int padding = (terminal_width - text_width) / 2;

    if (padding < 0)
    {
        fprintf(stderr, "Terminal width is too small to display the text.\n");
        return 1;
    }

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);

    for (int i = 0; i < padding; i++)
    {
        putchar(' ');
    }
    printf("%s\n", option_text);

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);
}
// print drawing screen
int drawing_screen()
{
    system("cls");
    int terminal_width = get_terminal_width();

    if (terminal_width == -1)
    {
        fprintf(stderr, "Unable to determine terminal width.\n");
        return 1;
    }

    char option_text[] = "ENJOY DRAWING ON TERMINAL!";
    int text_width = strlen(option_text);
    int padding = (terminal_width - text_width) / 2;

    if (padding < 0)
    {
        fprintf(stderr, "Terminal width is too small to display the text.\n");
        return 1;
    }

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);

    for (int i = 0; i < padding; i++)
    {
        putchar(' ');
    }
    printf("%s\n", option_text);

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);
}

// to make welcome screen
void print_horizontal_line(char symbol, int width)
{
    for (int i = 0; i < width; i++)
    {
        putchar(symbol);
    }
    putchar('\n');
}
// print welcome screen
int welcome()
{
    int terminal_width = get_terminal_width();

    if (terminal_width == -1)
    {
        fprintf(stderr, "Unable to determine terminal width.\n");
        return 1;
    }

    char welcome_text[] = "WELCOME TO MS PAINT";
    int text_width = strlen(welcome_text);
    int padding = (terminal_width - text_width) / 2;

    if (padding < 0)
    {
        fprintf(stderr, "Terminal width is too small to display the text.\n");
        return 1;
    }

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);

    for (int i = 0; i < padding; i++)
    {
        putchar(' ');
    }
    printf("%s\n", welcome_text);

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);
}
// print option screen
int option()
{
    system("cls");
    int terminal_width = get_terminal_width();

    if (terminal_width == -1)
    {
        fprintf(stderr, "Unable to determine terminal width.\n");
        return 1;
    }

    char option_text[] = "OPTIONS";
    int text_width = strlen(option_text);
    int padding = (terminal_width - text_width) / 2;

    if (padding < 0)
    {
        fprintf(stderr, "Terminal width is too small to display the text.\n");
        return 1;
    }

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);

    for (int i = 0; i < padding; i++)
    {
        putchar(' ');
    }
    printf("%s\n", option_text);

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);
}

// print exit screen
int exit_screen()
{
    system("cls");
    int terminal_width = get_terminal_width();

    if (terminal_width == -1)
    {
        fprintf(stderr, "Unable to determine terminal width.\n");
        return 1;
    }

    char option_text[] = "THANKS FOR USING OUR MS PAINT!";
    int text_width = strlen(option_text);
    int padding = (terminal_width - text_width) / 2;

    if (padding < 0)
    {
        fprintf(stderr, "Terminal width is too small to display the text.\n");
        return 1;
    }

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);

    for (int i = 0; i < padding; i++)
    {
        putchar(' ');
    }
    printf("%s\n", option_text);

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);
}
// print alphabets screen
int alphabet_screen()
{
    system("cls");
    int terminal_width = get_terminal_width();

    if (terminal_width == -1)
    {
        fprintf(stderr, "Unable to determine terminal width.\n");
        return 1;
    }

    char option_text[] = "MAKE ALPHABETS";
    int text_width = strlen(option_text);
    int padding = (terminal_width - text_width) / 2;

    if (padding < 0)
    {
        fprintf(stderr, "Terminal width is too small to display the text.\n");
        return 1;
    }

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);

    for (int i = 0; i < padding; i++)
    {
        putchar(' ');
    }
    printf("%s\n", option_text);

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);
}
// print shapes screen
int shapes_screen()
{
    system("cls");
    int terminal_width = get_terminal_width();

    if (terminal_width == -1)
    {
        fprintf(stderr, "Unable to determine terminal width.\n");
        return 1;
    }

    char option_text[] = "MAKE SHAPES";
    int text_width = strlen(option_text);
    int padding = (terminal_width - text_width) / 2;

    if (padding < 0)
    {
        fprintf(stderr, "Terminal width is too small to display the text.\n");
        return 1;
    }

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);

    for (int i = 0; i < padding; i++)
    {
        putchar(' ');
    }
    printf("%s\n", option_text);

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);
}
// print numbers screen
int numbers_screen()
{
    system("cls");
    int terminal_width = get_terminal_width();

    if (terminal_width == -1)
    {
        fprintf(stderr, "Unable to determine terminal width.\n");
        return 1;
    }

    char option_text[] = "MAKE NUMBERS";
    int text_width = strlen(option_text);
    int padding = (terminal_width - text_width) / 2;

    if (padding < 0)
    {
        fprintf(stderr, "Terminal width is too small to display the text.\n");
        return 1;
    }

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);

    for (int i = 0; i < padding; i++)
    {
        putchar(' ');
    }
    printf("%s\n", option_text);

    print_horizontal_line('-', terminal_width);
    print_horizontal_line('-', terminal_width);
}
// function to take alphabets inputs from user
void main_alphabets()
{
    int height = 9;

    inputs alpha;
    strcpy(alpha.name, "alphabet");

    printf("Enter the starting upper case character: ");
    scanf(" %c", &alpha.start_char);
    printf("Enter the ending upper case character: ");
    scanf(" %c", &alpha.end_char);
    printf("Enter the character you want the shape to be printed in\n");
    scanf(" %c", &alpha.character_type);
    printf("Enter\n'r' for red\n'y'for yellow\n'b' for blue\n'g' for green\n'w' for white\n");
    scanf(" %c", &alpha.color_choice);
    system("cls");
    alphabet_screen();

    alphabets_functions(height, alpha.start_char, alpha.end_char, alpha.character_type, alpha.color_choice);
}
// function to take number inputs from user
void main_numbers()
{
    int height = 9;
    inputs num;
    strcpy(num.name, "numbers");

    printf("Enter the starting number\n");
    scanf(" %c", &num.start_num);
    printf("Enter the ending number\n");
    scanf(" %c", &num.end_num);
    printf("Enter the character\n");
    scanf(" %c", &num.character_selection);
    printf("Enter\n'r' for red\n'y'for yellow\n'b' for blue\n'g' for green\n'w' for white\n");
    scanf(" %c", &num.color_choice);
    system("cls");
    numbers_screen();

    numbers_functions(height, num.start_num, num.end_num, num.character_selection, num.color_choice);
}
// function to take traingle inputs from user
void main_triangle()
{
    system("cls");
    shapes_screen();
    inputs tri;
    strcpy(tri.name, "triangle");

    printf("Enter\n0 for inverted pyramid triangle\n1 for pyramid triangle\n2 for right triangle\n3 for mirrored triangle\n4 for right inverted triangle\n5 for right inverted mirrored triangle\n");
    scanf("%d", &tri.type_input);
    printf("Enter the character you want the shape to be printed in\n");
    scanf(" %c", &tri.character_input);

    printf("Enter the shape size as your choice\n");
    scanf(" %d", &tri.size);

    printf("Enter 1 for filled shape and 0 for hollow shape\n");
    scanf(" %d", &tri.fill_input);
    printf("Entetr 'l' to make shape at the left of terminal\n'm' for middle\nand \'r' for right\n");
    scanf(" %c", &tri.pos);

    if (tri.fill_input == 1)
    {
        printf("Enter fill color in lowercase letters (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &tri.fill_col);
        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &tri.outline_col);
    }
    else
    {
        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &tri.outline_col);
    }
    system("cls");
    shapes_screen();

    triangle_functions(tri.fill_input, tri.pos, tri.type_input, tri.size, tri.character_input, tri.fill_col, tri.outline_col);
}
// function to take sqaure from user
void main_sqaure()
{

    system("cls");
    shapes_screen();
    inputs sq;
    strcpy(sq.name, "square");
    printf("Enter the character you want the shape to be printed in\n");
    scanf(" %c", &sq.character_input);
    printf("Enter the shape size as your choice\n");
    scanf(" %d", &sq.size);
    printf("Enter 1 for filled shape and 0 for hollow shape\n");
    scanf(" %d", &sq.fill_input);
    printf("Entetr 'l' to make shape at the left of terminal\n'm' for middle\nand \'r' for right\n");
    scanf(" %c", &sq.pos);
    if (sq.fill_input == 1)
    {
        printf("Enter fill color in lowercase letters (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &sq.fill_col);

        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &sq.outline_col);
    }
    else
    {
        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &sq.outline_col);
    }

    system("cls");
    shapes_screen();
    sqaure_function(sq.fill_input, sq.pos, sq.size, sq.character_input, sq.fill_col, sq.outline_col);
}
// function to take butterfly shape inputs from user
void main_butterfly()
{
    system("cls");
    shapes_screen();
    inputs but;
    strcpy(but.name, "butterfly");

    printf("Enter the character you want the shape to be printed in\n");
    scanf(" %c", &but.character_input);
    printf("Enter the shape size as your choice\n");
    scanf(" %d", &but.size);
    printf("Enter 1 for filled shape and 0 for hollow shape\n");
    scanf(" %d", &but.fill_input);
    printf("Entetr 'l' to make shape at the left of terminal\n'm' for middle\nand \'r' for right\n");
    scanf(" %c", &but.pos);
    if (but.fill_input == 1)
    {
        printf("Enter fill color in lowercase letters (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &but.fill_col);

        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &but.outline_col);
    }
    else
    {
        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &but.outline_col);
    }

    system("cls");
    shapes_screen();
    butterfly_function(but.fill_input, but.pos, but.size, but.character_input, but.fill_col, but.outline_col);
}
void main_daimond()
{
    inputs dai;
    strcpy(dai.name, "daimond");

    printf("Enter 0 to make half daimond\n1 to make full daimond\n");
    scanf("%d", &dai.type_input);

    printf("Enter the character you want the shape to be printed in\n");
    scanf(" %c", &dai.character_input);
    printf("Enter the shape size as your choice\n");
    scanf(" %d", &dai.size);
    printf("Enter 1 for filled shape and 0 for hollow shape\n");
    scanf(" %d", &dai.fill_input);
    printf("Entetr 'l' to make shape at the left of terminal\n'm' for middle\nand \'r' for right\n");
    scanf(" %c", &dai.pos);
    if (dai.fill_input == 1)
    {
        printf("Enter fill color in lowercase letters (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &dai.fill_col);

        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &dai.outline_col);
    }
    else
    {
        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &dai.outline_col);
    }

    system("cls");
    shapes_screen();

    daimond_function(dai.fill_input, dai.pos, dai.size, dai.character_input, dai.fill_col, dai.outline_col, dai.type_input);
}
void main_oval()
{
    inputs oval;
    strcpy(oval.name, "oval");
    printf("Enter the character you want the shape to be printed in\n");
    scanf(" %c", &oval.character_input);
    printf("Enter the shape size as your choice\n");
    scanf(" %d", &oval.size);
    printf("Enter 1 for filled shape and 0 for hollow shape\n");
    scanf(" %d", &oval.fill_input);
    printf("Entetr 'l' to make shape at the left of terminal\n'm' for middle\nand \'r' for right\n");
    scanf(" %c", &oval.pos);
    if (oval.fill_input == 1)
    {
        printf("Enter fill color in lowercase letters (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &oval.fill_col);

        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &oval.outline_col);
    }
    else
    {
        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &oval.outline_col);
    }

    system("cls");
    shapes_screen();
    oval_function(oval.fill_input, oval.pos, oval.size, oval.character_input, oval.fill_col, oval.outline_col);
}
void main_heart()
{
    inputs hrt;
    strcpy(hrt.name, "heart");
    printf("Enter the character you want the shape to be printed in\n");
    scanf(" %c", &hrt.character_input);
    printf("Enter the shape size as your choice\n");
    scanf(" %d", &hrt.size);
    printf("Enter 1 for filled shape and 0 for hollow shape\n");
    scanf(" %d", &hrt.fill_input);
    printf("Entetr 'l' to make shape at the left of terminal\n'm' for middle\nand \'r' for right\n");
    scanf(" %c", &hrt.pos);
    if (hrt.fill_input == 1)
    {
        printf("Enter fill color in lowercase letters (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &hrt.fill_col);

        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &hrt.outline_col);
    }
    else
    {
        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &hrt.outline_col);
    }

    system("cls");
    shapes_screen();
    heart_function(hrt.fill_input, hrt.pos, hrt.size, hrt.character_input, hrt.fill_col, hrt.outline_col);
}
void main_hexagon()
{
    inputs hex;
    strcpy(hex.name, "hexagon");
    printf("Enter the character you want the shape to be printed in\n");
    scanf(" %c", &hex.character_input);
    printf("Enter the shape size as your choice\n");
    scanf(" %d", &hex.size);
    printf("Enter 1 for filled shape and 0 for hollow shape\n");
    scanf(" %d", &hex.fill_input);
    printf("Entetr 'l' to make shape at the left of terminal\n'm' for middle\nand \'r' for right\n");
    scanf(" %c", &hex.pos);
    if (hex.fill_input == 1)
    {
        printf("Enter fill color in lowercase letters (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &hex.fill_col);

        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &hex.outline_col);
    }
    else
    {
        printf("Enter fill color in lowercase letters (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &hex.fill_col);

        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &hex.outline_col);
    }
    system("cls");
    shapes_screen();
    hexagon_function(hex.fill_input, hex.pos, hex.size, hex.character_input, hex.fill_col, hex.outline_col);
}
void main_trapezium()
{
    inputs trap;
    strcpy(trap.name, "trapezium");
    printf("Enter the character you want the shape to be printed in\n");
    scanf(" %c", &trap.character_input);
    printf("Enter the shape size as your choice\n");
    scanf(" %d", &trap.size);
    printf("Enter 1 for filled shape and 0 for hollow shape\n");
    scanf(" %d", &trap.fill_input);
    printf("Entetr 'l' to make shape at the left of terminal\n'm' for middle\nand \'r' for right\n");
    scanf(" %c", &trap.pos);
    if (trap.fill_input == 1)
    {
        printf("Enter fill color in lowercase letters (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &trap.fill_col);

        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &trap.outline_col);
    }
    else
    {
        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &trap.outline_col);
    }

    system("cls");
    shapes_screen();
    trapezium_function(trap.fill_input, trap.pos, trap.size, trap.character_input, trap.fill_col, trap.outline_col);
}
void main_parallelogram()
{
    inputs par;
    strcpy(par.name, "parralellogram");
    printf("Enter the character you want the shape to be printed in\n");
    scanf(" %c", &par.character_input);
    printf("Enter the shape size as your choice\n");
    scanf(" %d", &par.size);
    printf("Enter 1 for filled shape and 0 for hollow shape\n");
    scanf(" %d", &par.fill_input);
    printf("Entetr 'l' to make shape at the left of terminal\n'm' for middle\nand \'r' for right\n");
    scanf(" %c", &par.pos);
    if (par.fill_input == 1)
    {
        printf("Enter fill color in lowercase letters (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &par.fill_col);

        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &par.outline_col);
    }
    else
    {
        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &par.outline_col);
    }

    system("cls");
    shapes_screen();
    parallelogram_function(par.fill_input, par.pos, par.size, par.character_input, par.fill_col, par.outline_col);
}
void main_pentagon()
{
    inputs pent;
    strcpy(pent.name, "pentagon");
    printf("Enter the character you want the shape to be printed in\n");
    scanf(" %c", &pent.character_input);
    printf("Enter the shape size as your choice\n");
    scanf(" %d", &pent.size);
    printf("Enter 1 for filled shape and 0 for hollow shape\n");
    scanf(" %d", &pent.fill_input);
    printf("Entetr 'l' to make shape at the left of terminal\n'm' for middle\nand \'r' for right\n");
    scanf(" %c", &pent.pos);
    if (pent.fill_input == 1)
    {
        printf("Enter fill color in lowercase letters (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &pent.fill_col);

        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &pent.outline_col);
    }
    else
    {

        printf("Enter outline color (r for red, y for yellow, g for green, w for white, b for blue): ");
        scanf(" %c", &pent.outline_col);
    }

    system("cls");
    shapes_screen();
    pentagon_function(pent.fill_input, pent.pos, pent.size, pent.character_input, pent.fill_col, pent.outline_col);
}
void main_arrow()
{
    inputs arrow;
    strcpy(arrow.name, "pentagon");

    printf("Enter 0 to make right arrow\n1 to make left arrow\n2 to make up arrow\n3 to make down arrow\n");
    scanf("%d", &arrow.type_input);

    printf("Enter the character you want the shape to be printed in\n");
    scanf(" %c", &arrow.character_input);
    printf("Enter the shape size as your choice\n");
    scanf(" %d", &arrow.size);

    printf("Entetr 'l' to make shape at the left of terminal\n'm' for middle\nand \'r' for right\n");
    scanf(" %c", &arrow.pos);

    printf("Enter fill color in lowercase letters (r for red, y for yellow, g for green, w for white, b for blue): ");
    scanf(" %c", &arrow.fill_col);

    system("cls");
    shapes_screen();

    arrow_function(arrow.type_input, arrow.pos, arrow.size, arrow.character_input, arrow.fill_col);
}
// function for option 2
void free_handrawing()
{
    system("cls");
    instruction_screen();

    char drawChar;
    int Color;
    printf("INSTRUCTIONS:\n* use arrow keys to move\n* use spacebar and arrow keys to draw\n* use backspace to undo\n");
    char check;
    printf("\nIf you want to continue, press 'C' or\n'E' to exit\n");
    scanf(" %c", &check);

    if (check == 'C')
    {
        system("cls");
        drawing_screen();
        printf("Enter a character to draw: ");
        drawChar = _getche(); // Get the character to draw

        printf("\nEnter a color (1 for blue, 2 for green, 4 for red, 6 for yellow, 7 for white): ");
        scanf("%d", &Color);
        free_hand(drawChar, Color);
    }
    else if (check == 'E')
    {
        exit;
    }
}
void free_hand(char drawChar, int colour)
{
    int x = 0, y = 0;

    system("cls"); // Clear the screen

    while (1)
    {
        gotoxy(x, y);

        if (_kbhit())
        {
            char ch = _getch();

            if (ch == 0 || ch == -32 || ch ==109)
            {
                ch = _getch();

                switch (ch)
                {
                case 72: // Up arrow
                    if (y > 0)
                        y--;
                    break;
                case 80: // Down arrow
                    if (y < 24)
                        y++;
                    break;
                case 75: // Left arrow
                    if (x > 0)
                        x--;
                    break;
                case 77: // Right arrow
                    if (x < 79)
                        x++;
                    break;
                case 109: // Right arrow
                    main_options();
                    break;
                }
            }
            else if (ch == 8) // Backspace key
            {
                clearCell(x, y); // Clear the character at the current position
                if (x > 0)
                    x--; // Move left one column
            }
            else if (isSpacebarPressed() && isArrowKeyPressed())
            {
                setConsoleColor(colour);
                gotoxy(x, y);
                printf("%c", drawChar);
                setConsoleColor(7); // Set text color back to default (value 7)
                if (x < 79)
                    x++; // Move right one column
            }
        }
    }
}

// options function
void main_options()
{
    option();
    inputs inter;
    printf("1)Press 1 to make shapes\n2)Press 2 to draw on termianl\n3)Press 3 to save a file\n4)Press 5 to view file\n6)Press 5 to edit an existig file\n6)Press 6 to exit file\n");

    while (1)
    {
        inter.key = getch();
        if (inter.key == '1')
        {

            system("cls");
            sha_pes();
        }
        else if (inter.key == '2')
        {
            free_handrawing();
        }
        else if (inter.key == '3')
        {
            file_saving();
        }
        else if (inter.key == '4')
        {
            view_file();
        }
        else if (inter.key == '5')
        {
            file_edit();
        }
        else if (inter.key == 'q')
        {
            system("cls");
            exit_screen();
            exit;
        }
    }
}
// main menu options function
void sha_pes()
{
    inputs inter;
    printf("Press in upper case letters\n'A' to make alphabets\n'S' to print shapes\nor\n'N' to print numbers\n ");
    while (1)
    {
        inter.main_type = getch();

        if (inter.main_type == 'A')
        {
            system("cls");
            alphabet_screen();
            main_alphabets();
        }
        else if (inter.main_type == 'N')
        {
            system("cls");
            numbers_screen();
            main_numbers();
        }
        else if (inter.main_type == 'S')
        {
            system("cls");
            shapes_screen();

            printf("Enter in Upper case letters\n'T' to make triangles\n'S'to make sqaure\n'B' to make butterfly\n'O' to make ovals\n'H'to make heart\n'D' to make daimond\n'X'to make hexagon\n'Z' to make trapezium\n'P'to make parallelogram\n'A' to make arrows\n'N'to make pentagon\n");
            inter.choice = getch();
            if (inter.choice == 'T')
            {
                main_triangle();
            }
            else if (inter.choice == 'S')
            {

                main_sqaure();
            }
            else if (inter.choice == 'B')
            {
                main_butterfly();
            }
            else if (inter.choice == 'D')
            {
                main_daimond();
            }
            else if (inter.choice == 'O')
            {

                main_oval();
            }
            else if (inter.choice == 'H')
            {
                main_heart();
            }
            else if (inter.choice == 'X')
            {

                main_hexagon();
            }
            else if (inter.choice == 'Z')
            {

                main_trapezium();
            }
            else if (inter.choice == 'P')
            {

                main_parallelogram();
            }
            else if (inter.choice == 'N')
            {
                main_pentagon();
            }
            else if (inter.choice == 'A')
            {
                main_arrow();
            }
            else if (inter.choice == 'M')
            {

                system("cls");
                main_interface();
            }
        }

        sleep(10);
        color('w');
        main_options();
    }
}

void main_interface()
{
    system("cls");
    inputs inter;
    strcpy(inter.name, "trapezium");

    printf("\n\n");
    welcome();

    printf("\n\n");
    printf("Press 'c' to continue\nor 'e' to exit\n");
    inter.ch = getch();

    if (inter.ch == 'c')
    {
        printf("\n");
        option();
        printf("\n\n");
        main_options();
    }

    else if (inter.ch == 'e') // exit the program
    {
        system("cls");
        exit_screen();
        exit;
    }
}