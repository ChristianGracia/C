#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

//struct called node, containing an int identifier as 'value', reference to another node identified as  'next'

typedef struct NODE
{
    int value;
    struct NODE *next;

} NODE;

int main(void)
{
    NODE rootNode;
    rootNode.value = 5;

    printf("%i\n", rootNode.value);
}