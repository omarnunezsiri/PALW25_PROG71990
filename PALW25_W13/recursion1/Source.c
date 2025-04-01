// PAL Week 13 - Examine a C Program - Recursion example 1
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-04-02		initial

#include <stdio.h>
#include <Windows.h>

void CountDownOnwards(int number)
{
	printf("%d\n", number);

	if (number == 0) // base case
	{
		printf("We reached the bottom of the count!\n");
	}
	else // recursive case
	{
		CountDownOnwards(number - 1); // recursive call
	}
}

int main(void)
{
	CountDownOnwards(10);
	return 0;
}