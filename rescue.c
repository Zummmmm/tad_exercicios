#include<stdio.h>
#include"rescue.h"
#include<stdlib.h>
#include<stdbool.h>

 struct _node {
    int id;
    float value; 
    struct _node* id_prox;
};

 struct _list {
    TNode* inicio;
};


TList *createList()
{
    TList* nova = malloc(sizeof(TList));
    if (nova == NULL) {
        printf("Erro ao alocar memoria para TList\n");
        return NULL;
    }
    nova->inicio = NULL;
    return nova;
}

TNode *createNode(int id, float value, int id_prox)
{
    TNode* novo = (malloc(sizeof(TNode)));
    if(novo == NULL)
    {
        return NULL;
    }
    novo->id = id;
    novo->value = value;
    novo->id_prox = NULL;
    return novo;
}

bool insertNode(TList* list, int id, float value, int id_prox)
{
    TNode* novo = createTNode(id, value, id_prox);
    if(novo == NULL)
    {
        return false;
    }
    if(list->inicio == NULL)
    {
        list->inicio = novo;
        return true;
    }
    else
    {
        TNode* aux = list->inicio;
        while(aux->id_prox != NULL)
        {
            aux = aux->id_prox;
        }
        aux->id_prox = novo;
    }
    return true;
}

int rescueSequence()
{
    TList* list = createList();
    while(1)
    {
        int id, id_prox;
        float value;

        printf("Digite uma linha da sequencia(0 para sair):\n ");
        scanf("%d %f %d", &id, &value, &id_prox);
        if(id == 0){
            break;
        }
        else{
            insertNode(list, id, value, id_prox);
        }

    }
    free(list);
    return 0;
}
