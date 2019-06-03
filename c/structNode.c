#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct NODE
{
    int value;
    struct NODE *next;

} NODE;

void addNode(int value, NODE *homeNode)
{
    NODE* trav = homeNode;
    while(true)
    {
    if (trav->next == NULL)
    {
        NODE *newNode = malloc(sizeof(NODE));
        newNode->value = value;
        newNode->next = NULL;
        trav->next = newNode;
        break;
    }
    else
    {
        trav = trav->next;
        printf("moved deeper \n");

    }
    }
}

int main(void)
{
    NODE rootNode;
    rootNode.value = 5;
    rootNode.next = NULL;

    addNode(10, &rootNode);

    printf("%i\n", rootNode.value);
    printf("%i\n", rootNode.next -> value);

    addNode(8, &rootNode);
    addNode(17, &rootNode);
    // printf("%i\n%i\n", rootNode.next->next->value, rootNode.next->next->next->value);
}