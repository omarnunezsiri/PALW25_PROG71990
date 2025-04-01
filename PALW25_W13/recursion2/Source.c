// PAL Week 13 - Examine a C Program - Recursion example 2
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-04-02		initial

#include <stdio.h>

long long factorial(long long num)
{
	if (num == 1) // base case
	{
		return num;
	}
	else // recursive case
	{
		return num * factorial(num - 1);
	}
}

int main(void)
{
	long long number = 6;
	printf("Factorial of %lli is: %lli", number, factorial(number));

	return 0;
}