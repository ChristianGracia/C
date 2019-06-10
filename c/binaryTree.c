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

}