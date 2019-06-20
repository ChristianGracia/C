#include <cs50.h>
#include <stdio.h>


typedef struct node
{
    int number;
    struct node *next;
}node;



int main(void)
{
    //memory for numbers

    node *numbers = NULL;

    //prompt for numbers (until EOF)
    while(true)
    {
        //prompt for number
        int number = get_int("number: ");

        //check for EOF
        if (number == INT_MAX)
        {
            break;
        }

        //allocate space for number

        node *n = malloc(sizeof(node));

        if (!n)
        {
            return 1;
        }

        //add number to list

        n->number = number;
        n->next = NULL;
    }

}