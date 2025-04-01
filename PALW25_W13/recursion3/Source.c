// PAL Week 13 - Examine a C Program - Recursion example 3
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-04-02		initial

#include <stdio.h>
int power(int base, int exponent)
{
	if (exponent == 0) // base case
	{
		return 1;
	}
	else
	{
		return base * power(base, exponent - 1);
	}
}

int main(void)
{
	int base = 5;
	int exponent = 6;

	printf("%d^%d is: %d", base, exponent, power(base, exponent));

	return 0;
}