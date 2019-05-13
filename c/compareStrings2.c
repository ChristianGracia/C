#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool compare_strings(char *a, char *b);

int main(void)
{
    char *i = get_string("i: ");
    if (i == NULL)
    {
        return 1;
    }

    char *j = get_string("j: ");
    if (j == NULL)
    {
        return 1;
    }

    if (strcmp(i,j) == 0)
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }

    return 0;
}



//strcmp can be used not one to check if strings are equal but it returns a negative or postive number if the compared letter is unequal which can be used to alphabetize
