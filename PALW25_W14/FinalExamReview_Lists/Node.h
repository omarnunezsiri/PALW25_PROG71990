#pragma once
#include "Component.h"

typedef struct Node {
	COMPONENT component;
	struct Node* nextNode;
}NODE, * PNODE;

PNODE CreateNode(COMPONENT);

void SetNodeNextNode(PNODE, PNODE);
PNODE GetNodeNextNode(PNODE);
COMPONENT GetNodeComponent(PNODE);

void DisposeNode(PNODE);