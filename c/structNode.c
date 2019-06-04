#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

typedef struct NODE
{
    int value;
    struct NODE *next;
} NODE;

int add(int *x, int y)
{
    *x += 3;
    return *x + y;
}

void addNode(int value, NODE *homeNode)
{
    NODE *trav = homeNode;

    while(trav->next != NULL)
    {
        trav = trav->next;
    }
    NODE *newNode = malloc(sizeof(NODE));
    newNode->value = value;
    newNode->next = NULL;
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
    NODE rootNode;
    rootNode.value = 5;
    rootNode.next = NULL;
    addNode(10, &rootNode);
    addNode(8, &rootNode);
    addNode(17, &rootNode);
    displayList(&rootNode);
}