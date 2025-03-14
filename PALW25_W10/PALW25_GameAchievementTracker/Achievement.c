#define _CRT_SECURE_NO_WARNINGS

#include "Achievement.h"
#include "Utilities.h"

void SetAchievementUnlocked(PACHIEVEMENT pAchievement, bool unlocked)
{
	pAchievement->unlocked = unlocked; // nothing really to 'verify'
}

bool SetAchievementName(PACHIEVEMENT pAchievement, char* newName, int length)
{
	bool set = false;

	if (length >= 0 && length <= MAX_NAME)
	{
		strncpy(pAchievement->name, newName, length);
		pAchievement->name[length - 1] = '\0';
		set = true;
	}

	return set;
}

bool SetAchievementDescription(PACHIEVEMENT pAchievement, char* newDesc, int length)
{
	bool set = false;

	if (length >= 0 && length <= MAX_DESC)
	{
		strncpy(pAchievement->description, newDesc, length);
		pAchievement->description[length - 1] = '\0';
		set = true;
	}

	return set;
}

bool GetAchievementUnlocked(ACHIEVEMENT achievement)
{
	return achievement.unlocked;
}

bool GetAchievementName(ACHIEVEMENT achievement, char* outBuf)
{
	bool hasValidName = false;

	if (achievement.name != NULL)
	{
		size_t len = strlen(achievement.name);
		if (len >= 0 && len <= MAX_NAME)
		{
			strncpy(outBuf, achievement.name, len);
			outBuf[len] = '\0';
			hasValidName = true;
		}
	}

	return hasValidName;
}

bool GetAchievementDescription(ACHIEVEMENT achievement, char* outBuf)
{
	bool hasValidDesc = false;

	if (achievement.description != NULL)
	{
		size_t len = strlen(achievement.description);
		if (len >= 0 && len <= MAX_NAME)
		{
			strncpy(outBuf, achievement.description, len);
			outBuf[len] = '\0';
			hasValidDesc = true;
		}
	}

	return hasValidDesc;
}

// there is a flaw here... this opens the file and reads an achievement,
// but what if we need to read multiple of them?
bool ReadAchievementFromFile(char* filename, PACHIEVEMENT pAchievement)
{
	bool read = false;

	FILE* fpRead = fopen(filename, "r");

	if (fpRead != NULL)
	{
		char tempUnlocked[MAX_UNLOCKED_STR];
		char tempName[MAX_NAME];
		char tempDesc[MAX_DESC];

		fgets(tempUnlocked, MAX_UNLOCKED_STR, fpRead);
		fgets(tempName, MAX_NAME, fpRead);
		fgets(tempDesc, MAX_DESC, fpRead);

		RemoveTrailingNewLine(tempUnlocked);
		RemoveTrailingNewLine(tempName);
		RemoveTrailingNewLine(tempDesc);

		bool unlocked = !strcmp(UNLOCKED_STR, tempUnlocked) ? true : false;
		SetAchievementUnlocked(pAchievement, unlocked);

		if (!SetAchievementName(pAchievement, tempName, MAX_NAME) ||
			!SetAchievementDescription(pAchievement, tempDesc, MAX_DESC))
		{
			fprintf(stderr, "Error parsing achievement data...");
		}
		else
		{
			read = true;
		}
	}
	else
	{
		fprintf(stderr, "Error opening file %s", filename);
	}

	return read;
}

bool WriteAchievementToFile(char* filename, ACHIEVEMENT achievement)
{
	bool written = false;

	FILE* fpWrite = fopen(filename, "w");

	if (fpWrite != NULL)
	{
		fprintf(fpWrite, "%s\n", achievement.unlocked ? UNLOCKED_STR : NOT_UNLOCKED_STR);
		fprintf(fpWrite, "%s\n", achievement.name);
		fprintf(fpWrite, "%s\n", achievement.description);
		written = true;
	}
	else
	{
		fprintf(stderr, "Error opening file %s", filename);
	}

	return written;
}