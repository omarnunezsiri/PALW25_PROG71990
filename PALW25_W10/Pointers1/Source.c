// PAL Week 10 - Examine a C Program - Reviewing pointers using arrays
//									   
// 
// PROG71985-W23/W24
// 
// revision history
// 1.0			2023-03-12		initial
// 1.1			2024-03-09		reviewed

#include <stdio.h>

#define MAXARRAY 5

int main(void)
{
	/* Arrays reduce to pointers */
	int array[MAXARRAY] = {1, 6, 3, 4, 5};
	int* ptr = array; // the 'name' array would be the memory address of the first element

	printf("array: %p -- ", array);					// 0xA
	printf("&array[0]: %p -- ", &array[0]);			// 0xA
	printf("&array[1]: %p -- ", &array[1]);			// 0xB
	printf("ptr: %p\n", ptr);						// 0xA

	printf("*array: %d -- ", *array);				// 1
	printf("array[0]: %d -- ", array[0]);			// 1
	printf("*ptr: %d\n", *ptr);						// 1

	printf("*(array + 1): %d -- ", *(array + 1));	// 6
	printf("array[1]: %d -- ", array[1]);			// 6
	printf("*(ptr + 1): %d\n", *(ptr + 1));			// 6

	return 0;
}