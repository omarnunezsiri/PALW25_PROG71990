#define _CRT_SECURE_NO_WARNINGS

#include "Game.h"
#include "Utilities.h"
#include "Color.h"

bool CreateGame(char* name, int achievedCount, int maxAchievements, PGAME pGame)
{
	bool created = false;

	*pGame = (GAME){ 0 }; // safe initialization

	if (SetGameName(pGame, name, MAX_NAME) &&
		SetGameAchievedCount(pGame, achievedCount) &&
		SetGameTotalAchievements(pGame, maxAchievements))
	{
		created = true;
	}

	return created;
}


bool SetGameName(PGAME pGame, char* newName, int length)
{
	bool set = false;

	if (length >= 0 && length <= MAX_NAME)
	{
		strncpy(pGame->name, newName, length);
		pGame->name[length - 1] = '\0';
		set = true;
	}

	return set;
}

bool SetGameAchievedCount(PGAME pGame, int achievedCount)
{
	bool set = false;

	if (achievedCount >= 0 && achievedCount <= pGame->totalAchievements)
	{
		pGame->achievedCount = achievedCount;
		set = true;
	}

	return set;
}


bool SetGameTotalAchievements(PGAME pGame, int total)
{
	bool set = false;

	if (total >= 0)
	{
		pGame->totalAchievements = total;
		set = true;
	}

	return set;
}

void DisplayGameInformation(GAME game)
{
	SkyBlue();
	printf("\nYou have unlocked %d/%d achievements for %s\n", game.achievedCount, game.totalAchievements, game.name);
	printf("%s has the following achievements: ", game.name);
	Reset();

	// display list of achievements (when linked list is implemented)
}

// implement when linked list is implemented
bool ReadGameFromFile(FILE*, PGAME);
bool WriteGameToFile(FILE*, GAME);