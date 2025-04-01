// PAL Week 13 - Examine a C Program - Recursion example 5
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-04-02		initial

#include <stdio.h>

int arraySum(int[], int, int);

int main(void)
{
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(array) / sizeof(array[0]);
	printf("Sum of array elements: %d", arraySum(array, size, 0));

	return 0;
}

int arraySum(int array[], int size, int index)
{
	if (index == size)
		return 0;
	else
	{
		return array[index] + arraySum(array, size, index + 1);
	}
}