// PAL W25 - Game Achievement Tracker
// 
//		Source file
// 
// PROG71990-W25
// 
// revision history
// 1.0			3/11/2025		initial
// 1.1			3/18/2025		improvements

#include "Achievement.h"
#include "Utilities.h"
#include "Color.h"
#include "Game.h"

#define ACHIEVEMENTS_DATA_FILE "achievements_data_file.txt"

#define SAMPLE_ACHIEVEMENTS_COUNT 9  // to simplify this exercise we will read only 9 achievements (instead of a bigger amount) for now

int main(void)
{
	/* DO NOT EDIT THIS SECTION */
	int err_code = 0;

	MintGreen();
	printf("\t\t\t--------------------------------------\n");
	printf("\t\t\t|                                    |\n");
	printf("\t\t\t|                                    |\n");
	printf("\t\t\t|          Game Achievement          |\n");
	printf("\t\t\t|              Tracker               |\n");
	printf("\t\t\t|                                    |\n");
	printf("\t\t\t|                                    |\n");
	printf("\t\t\t|                       PROG71990-W25|\n");
	printf("\t\t\t--------------------------------------\n\n\n");
	Reset();


	/* USER CODE */

	FILE* fpRead = NULL;
	if (!GetReadFilePointer(ACHIEVEMENTS_DATA_FILE, &fpRead) || fpRead == NULL)
	{
		err_code = 1; // file I/O error
	}
	else
	{
		int i = 0;
		ACHIEVEMENT achievements[SAMPLE_ACHIEVEMENTS_COUNT];

		// continue looping until we reach the end of the file,
		// or an error occurs
		while (i < SAMPLE_ACHIEVEMENTS_COUNT && err_code == 0)
		{
			if (!ReadAchievementFromFile(fpRead, &achievements[i]))
			{
				err_code = 2; // unusual data format
			}

			i++;
		}

		// only display the achievements if there were no errors
		if (err_code == 0)
		{
			for (int i = 0; i < SAMPLE_ACHIEVEMENTS_COUNT; i++)
			{
				DisplayAchievement(achievements[i]);
			}
		}

		// don't forget to close the file
		fclose(fpRead);
	}

	GAME fortnite; 
	if (CreateGame("Fortnite", 0, 45, &fortnite))
	{
		DisplayGameInformation(fortnite);
	}
	else
	{
		err_code = 2; // unusual data format
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