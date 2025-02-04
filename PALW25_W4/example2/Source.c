// PAL Week 4 - Examine a C Program - Switch Menu
// 
// PROG71990-W25
// 
// revision history
// 1.0			01/20/2025		initial

#include <stdio.h>

int main(void)
{
    printf("MENU\n");
    printf("a) Connect to MySQL Database\n");
    printf("b) Enter SSP Auth Key\n");
    printf("c) Import .AXX or .CHA file\n");
    printf("Please enter your option: ");

    char option = getchar();

    // what is going on here? how else can we implement the following?
    switch (option)
    {

    case 'a':
        printf("MySQL Root Form\n");
        break;
    case 'b':
        printf("SSP Auth Key Form\n");
        break;
    case 'c':
        printf("Import pop-up");
        break;
    default:  // whats a "default"?
        printf("Only a-c.\n");
        break;
    }

    return 0;
}