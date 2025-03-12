// PAL W25 - Game Achievement Tracker
// 
//		Source file
// 
// PROG71990-W25
// 
// revision history
// 1.0			3/11/2025		initial

#include "Achievement.h"
#include "Color.h"

#define ACHIEVEMENTS_DATA_FILE "achievements_data_file.txt"

#define SAMPLE_ACHIEVEMENTS_COUNT 5  // to simplify this exercise we will read only 5 achievements (instead of 35) for now

int main(void)
{
	/* DO NOT EDIT THIS SECTION */
	int err_code = 0;

	MintGreen();
	printf("\t--------------------------------------\n");
	printf("\t|                                    |\n");
	printf("\t|                                    |\n");
	printf("\t|          Game Achievement          |\n");
	printf("\t|              Tracker               |\n");
	printf("\t|                                    |\n");
	printf("\t|                                    |\n");
	printf("\t|                       PROG71990-W25|\n");
	printf("\t--------------------------------------\n");
	Reset();


	/* USER CODE */

	// Read achievements
	// Ideally display them

	ACHIEVEMENT achievement;

	if (ReadAchievementFromFile(ACHIEVEMENTS_DATA_FILE, &achievement))
	{
		char name[MAX_NAME];
		char desc[MAX_DESC];

		if (GetAchievementName(achievement, name) && GetAchievementDescription(achievement, desc))
		{
			printf("\n%d (unlocked?) ---> %s (name) ---> %s (desc)\n", GetAchievementUnlocked(achievement), name,
				desc);
		}
	}
	else
	{
		err_code = 1;
	}

	/* DO NOT EDIT THIS SECTION */
	return err_code;
}


/*
* 
* PROMPTS PROG71990-W25
* 
* Prompt 3/11/2025
* Write a program that reads information about Game Achievement from a plaintext file
* Use a pointer (pass by reference) to edit any member of the Achievement, that is, 
* you must NOT edit the ADT directly (using the dot “.” notation).
* Design functions that will set and get attributes of an Achievement
* 
*/