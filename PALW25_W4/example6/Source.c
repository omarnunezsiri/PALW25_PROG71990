// PAL Week 4 - Examine a C Program - Factors of a Number using a for loop
// 
// PROG71990-W25
// 
// revision history
// 1.0			01/20/2025		initial

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h> // what is this library for?

int main(void)
{
	int number;
	printf("Please enter a number to determine its factors: ");
	int items_scanned = scanf("%d", &number);

	// trust the user, but always verify ;)
	if (items_scanned != 1)
	{
		printf("You did not enter an integer");
		exit(EXIT_FAILURE);
	}

	for (int counter = 1; counter <= number; counter++) // do we need to include the number given or not?
	{
		if (number % counter == 0)
			printf("%d is a factor of %d\n", counter, number);
	}

	return 0;
}