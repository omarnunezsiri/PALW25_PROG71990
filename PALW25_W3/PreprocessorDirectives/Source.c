// PAL Week 3 - Examine a C Program - Preprocessor Directives
// 
// PROG71990-W25
// 
// revision history
// 1.0			01/11/2025		initial

#include <stdio.h> // Accessing/Getting a library from <somewhere/compiler(?)> 

int main(void)
{
	float centimeters;
	printf("Please enter a value (cm): ");

	// What is going on in the following lines of code?
	// Scanf is unsafe / not trusted
	// WIN32 is an API that requires direct access to Windows
	//		We are checking if we are in the Windows environment
#ifdef _WIN32 
	scanf_s("%f", &centimeters);
#else
	scanf("%f", &centimeters);
#endif

	float meters = centimeters / 100;

	printf("%f cm is %f meters", centimeters, meters);
}