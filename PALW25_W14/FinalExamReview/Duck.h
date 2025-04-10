#pragma once
#include <stdbool.h>

#define MAXSTR 30
typedef struct Duck {
	bool fly;
	bool swim;
	bool quack;
	char quackBehaviour[MAXSTR];
	char flyBehaviour[MAXSTR];
	int age; // 0-14
}DUCK, * PDUCK;

void SetFlyFlag(PDUCK, bool);
void SetSwimFlag(PDUCK, bool);
void SetQuackFlag(PDUCK, bool);
void SetQuackBehaviour(PDUCK, char*);
void SetFlyBehaviour(PDUCK, char*);
bool SetDuckAge(PDUCK, int);

bool GetFlyFlag(DUCK);
bool GetSwimFlag(DUCK);
bool GetQuackFlag(DUCK);
char* GetQuackBehaviour(DUCK);
char* GetFlyBehaviour(DUCK);

void DisplayDuck(DUCK);