#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define true 1
#define false 0

typedef struct NODE
{
    int value;
    struct NODE *low;
    struct NODE *high;
} NODE;

NODE *rootNode;

typedef struct QUEUE
{
    NODE *pointer;
    struct QUEUE *next;
} QUEUE;

QUEUE *first;

void popQueue()
{
    //remove last node from queue

}

void pushQueue()
{
    //populate to first item in queue
    QUEUE *newAddress = malloc(sizeof(QUEUE));
    newAddress->pointer = rootNode;
    newAddress->next = NULL;
    if (rootNode == NULL)
    {
        rootNode = newAddress;
        return;
    }
}

void lengthQueue()
{
    //display nodes in queue
}

void peekQueue()
{
    //display last item in queue
}

void addNode (int value)
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

    NODE *trav = rootNode;
    while(1)
    {
        if (newNode->value < trav->value)
        {
            if(trav->low == NULL)
            {
                trav->low = newNode;
                return;
            }
            trav = trav->low;

            continue;
            return;
        }
        else
        {
            if(trav->high == NULL)
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
    //printf("%i, ", curNode->value);
    if (curNode->low != NULL)
    {
        displayTreeOnEnter(curNode->low);
    }
    if (curNode->high)
    {
        displayTreeOnEnter(curNode->high);
    }
}

void displayTreeOnDeparture(NODE *curNode)
{
//prints children of nodes first
    if (curNode->low != NULL)
    {
        displayTreeOnDeparture(curNode->low);
    }

    if (curNode->high != NULL)
    {
        displayTreeOnDeparture(curNode->high);
    }
}
int doesContain(int value)
{
    NODE *curNode = rootNode;
    while(1)
    {
        if (curNode->value == value)
        {
            printf("Match\n");
            return 1;
        }
        if (curNode->value > value)
        {
            //printf("%i\n", curNode->value);
            if (curNode->low == NULL)
            {
                return 0;
            }
            curNode = curNode->low;
            continue;
            //return 0;
        }
        //printf("%i\n", curNode->value);
        if (curNode->high == NULL)
        {
            return 0;
        }
        curNode = curNode->high;
        continue;
        //return 0;
    }
}

void tests ()
{

}

void freeListSelf(NODE *curNode)
{
    if (curNode->low != NULL)
    {
        freeListSelf(curNode->low);
    }

    if (curNode->high != NULL)
    {
        freeListSelf(curNode->high);
    }
    //printf("%i, ", curNode->value);
    free(curNode);
}

int main (void)
{
    //printf("hello\n");
    addNode(10);
    addNode(8);
    addNode(15);
    // addNode(17);
    // addNode(19);
    // addNode(20);
    addNode(17);
    addNode(20);
    addNode(18);
    addNode(5);
    addNode(6);
    addNode(9);
    addNode(4);
    addNode(13);
    freeListSelf(rootNode);
    //assert(doesContain(10) && "tree does contain 10");
    pushQueue();
    //displayTreeOnEnter(rootNode);
    //displayTreeOnDeparture(rootNode);
    doesContain(14);

    printf("\n");
}