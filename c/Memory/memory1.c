#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

//demostrating memory leaks

void f(void)
{
    int *x = malloc(10 * sizeof(int));
    x[10] = 50;
    printf("You inputted: %i. \n", x[10]);
    free(x);
}

int main(void)
{
    f();
}