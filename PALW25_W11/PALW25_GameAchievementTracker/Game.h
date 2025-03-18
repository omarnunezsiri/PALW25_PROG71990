#pragma once

#include "Globals.h"
#include "Achievement.h"

typedef struct Game {
	int totalAchievements;
	int achievedCount;
	char name[MAX_NAME];
	ACHIEVEMENT achievements[MAX_ACHIEVEMENTS];
}GAME, *PGAME;

bool CreateGame(char*, int, int, PGAME);

bool SetGameName(PGAME, char*, int);
bool SetGameAchievedCount(PGAME, int);
bool SetGameTotalAchievements(PGAME, int);

void DisplayGameInformation(GAME);

bool ReadGameFromFile(FILE*, PGAME);
bool WriteGameToFile(FILE*, GAME);