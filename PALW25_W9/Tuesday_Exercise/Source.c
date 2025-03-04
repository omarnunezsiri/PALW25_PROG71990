// PAL Week 9 - Write a C Program
// 
// 
// 
// Using the defined Player structure from the previous example, create a data file with 12 players.
// Create a program that will read these 12 players into a collection of your choice and display it to the standard output stream.
// CHALLENGE: You cannot access / modify the members of the Player structure directly(e.g., p1.id = 1).
// 
// 
// 
// PROG71990-W25
// Omar Nunez Siri
// 
// revision history
// 1.0			2024-03-04		initial

#define MAXSTR 30

typedef struct Player
{
	int id;
	char username[MAXSTR];
	char password[MAXSTR];
	float exp;
}PLAYER;

int main(void)
{
	return 0;
}