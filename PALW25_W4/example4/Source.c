// PAL Week 4 - Examine a C Program - Another Switch example
// 
// PROG71990-W25
// 
// revision history
// 1.0			01/20/2025		initial

#include <stdio.h>

int main(void)
{
	printf("MENU\n");
	printf("a) Add two numbers\n");
	printf("b) Substract two numbers\n");
	printf("c) Multiply two numbers\n");
	printf("d) Divide two numbers\n");
	printf("Please enter your option: ");

	char option = getchar(); // get a menu option from user input

	switch (option)
	{
	case 'a': // like if (option == 'a')
		printf("Add");
		break;
	case 'b':
		printf("Substract");
		break;
	case 'c':
		printf("Multiply");
		break;
	case 'd':
		printf("Divide");
		break;
	default: // else (if its not any of the options, this is the default)
		printf("??");
		break;
	}

	return 0;
}