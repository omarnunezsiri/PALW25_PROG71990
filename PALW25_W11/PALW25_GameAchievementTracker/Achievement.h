#pragma once

#include "Globals.h"
#include <stdbool.h>
#include <stdio.h>

typedef struct Achievement {
	bool unlocked;
	char name[MAX_NAME];
	char description[MAX_DESC];
}ACHIEVEMENT, *PACHIEVEMENT;

bool CreateAchievement(bool, char*, char*, PACHIEVEMENT);

void SetAchievementUnlocked(PACHIEVEMENT, bool);
bool SetAchievementName(PACHIEVEMENT, char*, int);
bool SetAchievementDescription(PACHIEVEMENT, char*, int);

bool GetAchievementUnlocked(ACHIEVEMENT);
bool GetAchievementName(ACHIEVEMENT, char*);
bool GetAchievementDescription(ACHIEVEMENT, char*);

void DisplayAchievement(ACHIEVEMENT);

bool ReadAchievementFromFile(FILE*, PACHIEVEMENT);
bool WriteAchievementToFile(FILE*, ACHIEVEMENT);