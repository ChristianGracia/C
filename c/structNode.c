=#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

//struct called node, containing an int identifier as 'value', reference to another node identified as  'next'

typedef struct NODE
{
    int value;
    struct NODE *next;

} NODE;

void addNode(int value, NODE *homeNode)
{
    NODE* trav = homeNode;
    if (homeNode->next == NULL)
    {
        NODE *newNode = malloc(sizeof(NODE));
        newNode->value = value;
        newNode->next = NULL;
        homeNode->next = newNode;
    }
    else printf("ERROR: next node not null");

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
}