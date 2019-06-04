#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef struct NODE
{
    int value;
    struct NODE *next;
} NODE;

NODE *rootNode;

void addNode(int value)
{
    NODE *newNode = malloc(sizeof(NODE));
    newNode->value = value;
    newNode->next = NULL;

    if (rootNode == NULL)
    {
        rootNode = newNode;
        return;
    }

    NODE *trav = rootNode;

    while(trav->next != NULL)
    {
        trav = trav->next;
    }

    trav->next = newNode;
}

void displayList(NODE* trav)
{
    while(trav != NULL)
    {
        printf("%i", trav->value);
        trav = trav->next;

        if(trav == NULL)
        {
            printf("");
        }
        else
        {
            printf(", ");
        }
    }
}

int main(void)
{
    addNode(5);
    addNode(10);
    addNode(8);
    addNode(17);
    displayList(rootNode);
}