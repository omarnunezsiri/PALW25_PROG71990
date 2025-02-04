// PAL Week 4 - Examine a C Program - Power For Loop
// 
// PROG71990-W25
// 
// revision history
// 1.0			01/20/2025		initial

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define PI 3.14159265359

int main(void)
{
    int exponent; // given by user input (PI ^ exponent)
    double power = 1;

    printf("PI to the power of: ");
    scanf("%d", &exponent);

    // How many components does a for loop consist of?
    // 1. int i = 1 // initialize as 1
    // 2. i <= exponent // if i is less than or equal to exponent (condition)
    // 3. add a 1 // assign to the new value (increment one)
    for (int i = 1; i <= exponent; i++)
    {
        power = power * PI;
    }

    printf("PI^%d = %lf\n", exponent, power);
    return 0;
}