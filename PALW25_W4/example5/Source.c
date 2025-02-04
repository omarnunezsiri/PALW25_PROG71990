// PAL Week 4 - Examine a C Program - Complex User Validation
// 
// PROG71990-W25
// 
// revision history
// 1.0			01/20/2025		initial

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	const int BOOT_UP = 123192; // AUTH Protocol Key dedicated to this client
	const int BOOT_UP2 = 10000; // Addition of a second Protocol Key for double auth

	int key;
	int anotherKey;
	bool isConnected = false;

	printf("Hello Client! Validation to connect to the server is required.\n");
	do // keep going until isConnected is true, and this happens when key is BOOT_UP and anotherKey is BOOT_UP2
	{
		printf("Please enter the boot_up AUTH keys to establish connection with the server: ");
		int symbols_returned = scanf("%d %d", &key, &anotherKey); // return value (internet: returns the number of fields that successfully converted and assigned)

		// what does this condition mean? why '2'? the amount of inputs that we're looking for
		if (symbols_returned != 2)
		{
			printf("Invalid input. Only two integers are allowed!\n");
			while ((getchar()) != '\n'); // what's going on here?
		}
		else if (key == BOOT_UP && anotherKey == BOOT_UP2)
			isConnected = true;
		else
			printf("That's not correct!\n");
	} while (isConnected == false);

	printf("\nServer says: Welcome Back!\n");
	return 0;
}