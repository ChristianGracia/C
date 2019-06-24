#include <stdio.h>
#include <stdlib.h>

#define true 1;
#define false 0;

typedef struct NODE
{
    int value;
    struct NODE *low;
    struct NODE *high;

} NODE;

NODE *rootNode;

void addNode(int value)
{
    NODE *newNode = malloc(sizeof(NODE));
    newNode->value = value;
    newNode->high = NULL;
    newNode->low = NULL;

    if (rootNode == NULL)
    {
        rootNode = newNode;
        return;
    }

    //if value of new node is less the root node attach to low
    //else add to high

    NODE *trav = rootNode;

    while(1)
    {
        if (newNode->value < trav->value)
        {
            if (trav->low == NULL)
            {
                trav->low = newNode;
                return;
            }
            trav = trav-> low;
            continue;
        }
        else
        {
            if (trav->high == NULL)
            {
                trav->high = newNode;
                return;
            }
            trav = trav->high;
            continue;
        }
    }
}
void displayTreeOnEnter(NODE *curNode)
{
    printf("%i, ", curNode->value);

    if (curNode->low != NULL)
    {
        displayTreeOnEnter(curNode->low);
    }
    if (curNode->high != NULL)
    {
        displayTreeOnEnter(curNode->high);
    }
}

void displayOnDeparture(NODE *curNode)
{
    if (curNode->low != NULL)
    {
        displayOnDeparture(curNode->low);
    }
    if (curNode->high != NULL)
    {
        displayOnDeparture(curNode->high);
    }
    printf("%i, ", curNode->value);
}

int doesContain(int value)
{
    if (rootNode->value == value)
    {
        return 1;
    }

    NODE *trav = rootNode;
    while(1)
    {
        if (trav->value == value)
        {
            return 1;
        }

        if (value < trav -> value)
        {
            if (trav->low == NULL)
            {
                return 0;
            }
            trav =trav->low;
            continue;
        }
        return 0;
    }
}

void freeMem(NODE *curNode)
{
    if (curNode->low)
    {
        freeMem(curNode->low);
    }
    if (curNode->high)
    {
        freeMem(curNode->high);
    }
    free(curNode);
}

int main(void)
{
    addNode(10);
    addNode(8);
    addNode(15);
    addNode(17);
    addNode(20);
    addNode(18);
    addNode(5);
    addNode(6);
    addNode(9);
    addNode(4);
    addNode(13);
    addNode(7);

    displayTreeOnEnter(rootNode);
    displayOnDeparture(rootNode);
    printf("\n");

    
    freeMem(rootNode);
}