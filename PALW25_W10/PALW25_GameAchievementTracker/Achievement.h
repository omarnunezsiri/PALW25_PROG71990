#pragma once

#include "Globals.h"
#include <stdbool.h>

typedef struct Achievement {
	bool unlocked;
	char name[MAX_NAME];
	char description[MAX_DESC];
}ACHIEVEMENT, *PACHIEVEMENT;

void SetAchievementUnlocked(PACHIEVEMENT, bool);
bool SetAchievementName(PACHIEVEMENT, char*, int);
bool SetAchievementDescription(PACHIEVEMENT, char*, int);

bool GetAchievementUnlocked(ACHIEVEMENT);
bool GetAchievementName(ACHIEVEMENT, char*);
bool GetAchievementDescription(ACHIEVEMENT, char*);

bool ReadAchievementFromFile(char*, PACHIEVEMENT);
bool WriteAchievementToFile(char*, ACHIEVEMENT);