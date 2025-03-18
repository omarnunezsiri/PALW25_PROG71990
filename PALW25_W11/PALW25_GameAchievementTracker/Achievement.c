#define _CRT_SECURE_NO_WARNINGS

#include "Achievement.h"
#include "Utilities.h"
#include "Color.h"

bool CreateAchievement(bool unlocked, char* name, char* desc, PACHIEVEMENT pAchievement)
{
	bool created = false;

	*pAchievement = (ACHIEVEMENT){ 0 }; // safe initialization
	SetAchievementUnlocked(pAchievement, unlocked);

	if (SetAchievementName(pAchievement, name, MAX_NAME) &&
		SetAchievementDescription(pAchievement, desc, MAX_DESC))
	{
		created = true;
	}

	return created;
}

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


void DisplayAchievement(ACHIEVEMENT achievement)
{
	// this assumes that the achievement has a valid name and description
	printf("Achievement %s (%s) has ", achievement.name, achievement.description);
	MintGreen();
	printf("%s\n", achievement.unlocked ? "been unlocked" : "not been unlocked");
	Reset();
}

bool ReadAchievementFromFile(FILE* fpRead, PACHIEVEMENT pAchievement)
{
	bool read = false;

	if (fpRead != NULL) // trust, but verify
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

		if (!CreateAchievement(unlocked, tempName, tempDesc, pAchievement))
		{
			fprintf(stderr, "Error creating achievement...");
		}
		else
		{
			read = true;
		}
	}
	else
	{
		fprintf(stderr, "File read pointer is NULL\n");
	}

	return read;
}

bool WriteAchievementToFile(FILE* fpWrite, ACHIEVEMENT achievement)
{
	bool written = false;

	if (fpWrite != NULL) // trust, but verify
	{
		fprintf(fpWrite, "%s\n", achievement.unlocked ? UNLOCKED_STR : NOT_UNLOCKED_STR);
		fprintf(fpWrite, "%s\n", achievement.name);
		fprintf(fpWrite, "%s\n", achievement.description);
		written = true;
	}
	else
	{
		fprintf(stderr, "File write pointer is NULL\n");
	}

	return written;
}