// PAL Week 5 - Program 1:
//					implement findMax function
// 
// PROG71985-W23/F23/W24
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-04		initial
// 1.1			2023-09-28		reviewed
// 2.0			2024-02-03		reviewed for W24
// 3.0			2025-02-01		reviewed for W25

#include <stdio.h>

// what are the 3 components of a function?
//
// 1. 
// 2.
// 3.
int FindMax(int firstNum, int secondNum)
{
	int max;

	if (firstNum > secondNum)
		max = firstNum;
	else
		max = secondNum;

	return max;
}

int main(void)
{
	int firstNum = 30;
	int secondNum = 20;

	int max = FindMax(firstNum, secondNum);

	printf("The max between %d and %d is: %d", firstNum, secondNum, max);
	return 0;
}