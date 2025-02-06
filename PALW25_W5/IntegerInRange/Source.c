// PAL Week 5 - Program 2:
//					implement integerInRange function
// 
// PROG71985-W23/F23/W24
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-02-04		initial
// 1.1			2023-09-28		reviewed
// 2.0			2024-02-03		refactored (function takes 3 arguments)
// 3.0			2025-02-01		reviewed for W25

#include <stdio.h>
#include <stdbool.h>

#define LOWER_LIMIT 0
#define UPPER_LIMIT 65536 // 16-bit integer limits (2^16)

bool integerInRange(int, int, int); // prototype

int main(void)
{
	int num;
	bool inRange = false;
	printf("16-bit Encoder\n");

	do
	{
		printf("Please enter an integer in the 0-2^16 range: ");

#ifdef _WIN32
		int symbols_returned = scanf_s("%d", &num); // review - what does _s indicate? 
#else
		int symbols_returned = scanf("%d", &num);
#endif

		if (symbols_returned != 1) // what does this check for?
		{
			printf("Invalid input. Please enter an integer.\n");
			while (getchar() != '\n'); // what does this do?
			continue;
		}

		inRange = integerInRange(num, LOWER_LIMIT, UPPER_LIMIT);
		if (inRange)
			printf("%d is in the %d-%d range!\n", num, LOWER_LIMIT, UPPER_LIMIT);
		else
			printf("%d is not in the %d-%d range.\n", num, LOWER_LIMIT, UPPER_LIMIT);

	} while (!inRange);

	return 0;
}

bool integerInRange(int integer, int lowerLimit, int upperLimit)
{
	// can we simplify this?
	if (integer >= lowerLimit && integer <= upperLimit)
		return true;
	else
		return false;
}