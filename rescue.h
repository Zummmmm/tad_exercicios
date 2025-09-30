#ifndef RESCUE_H
#define RESCUE_H
#include<stdbool.h>

typedef struct _node TNode;

typedef struct _list TList;

int rescueSequence();

TList *createList();

TNode *createNode(int id, float value, int id_prox);

bool insertNode(TList* list, int id, float value, int id_prox);

#endif
