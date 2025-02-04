// PAL Week 4 - Examine a C Program - WIN32 and Other environments + While Loop
// 
// PROG71990-W25
// 
// revision history
// 1.0			01/20/2025		initial

#include <stdio.h>

int main(void)
{
    int number;
    printf("Please enter a number to determine its factors: ");

#ifdef _WIN32 // review! what is going on here? if we're writing in Windows made by Microsoft
    scanf_s("%d", &number); // why is this greyed out and the next scanf isn't? we are not in Windows
    printf("Windows");
#else
    scanf("%d", &number);
    printf("Other");
#endif

    int counter = 1;
    while (counter <= number) // can we implement this differently?
    {
        if (number % counter == 0) // what is this line doing? what is %?
            printf("%d is a factor of %d\n", counter, number);
        counter++;
    }

    return 0;
}