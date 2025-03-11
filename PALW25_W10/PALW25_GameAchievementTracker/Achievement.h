#pragma once

#include "Globals.h"
#include <stdbool.h>

typedef struct Achievement {
	bool unlocked;
	char name[MAX_NAME];
	char description[MAX_DESC];
}ACHIEVEMENT;