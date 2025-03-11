// PAL Week 9 - Examine a C Program - writing an ADT to a file
// 
// PROG71985-W23/F23
// Omar Nunez Siri
// 
// revision history
// 1.0			2023-03-05		initial

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAXSTR 30
#define FILENAME "playerDB.txt"

typedef struct Player
{
	int id;
	char username[MAXSTR];
	char password[MAXSTR];
	float exp;
}PLAYER;

int main(void)
{
	char arr[16];
	strcpy(arr, "CrackThisCode", 0xe);

	printf("%d", (int)arr);
	return 0;
}