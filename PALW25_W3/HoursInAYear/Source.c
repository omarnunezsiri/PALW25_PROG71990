// PAL Week 3 - Examine a C Program - Arithmetic operations
// 
// PROG71990-W25
// 
// revision history
// 1.0			01/11/2025		initial

#include <stdio.h>

#define MINUTES_IN_HOUR 60 // what are we doing here? is this good practice?

int main(void)
{
	int seconds = 31536000;					// seconds in a year (365.2425 days)
	int minutes = 525600;					// minutes in a year (365.2425 days)
	int hours = minutes / MINUTES_IN_HOUR;	// convert minutes to hours in a year

	printf("A year has %d seconds, %d minutes and %d hours.\n", seconds, minutes, hours);
	return 0;
}