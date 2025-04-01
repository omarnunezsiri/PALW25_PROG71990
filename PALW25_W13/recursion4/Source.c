// PAL Week 13 - Examine a C Program - Recursion example 4
// 
// PROG71985-W23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-04-02		initial

#include <stdio.h>

int traverseArray(int[], int, int);
int main(void)
{
	int array[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int size = sizeof(array) / sizeof(array[0]);
	traverseArray(array, size, 0);
	printf("\n");
	return 0;
}

int traverseArray(int array[], int size, int index)
{
	if (index == size)
		return 0;
	else
	{
		printf("%d ", array[index]);
		return traverseArray(array, size, index + 1);
	}
}