// PAL Week 3 - Examine a C Program - Escape Sequences
// 
// PROG71990-W25
// 
// revision history
// 1.0			01/11/2025		initial

#include <stdio.h>

void main(void)
{
	float wage;

	/* \a audible bell --> \n newline --> \t tab sequence (4 spaces) --> \r carriage return --> \b backspace */
	printf("\aStarting database connection...");
	printf("\t\tConnection Established!\n");
	printf("Enter wage: $_____\b\b\b\b\b");
	// research: what does the & in scanf mean? ideally we want to check what the user enters (if statements/conditions)
	scanf_s("%f", &wage);
	printf("\t\t\t\tThank you!");
	printf("\rWage: %f", wage);
}