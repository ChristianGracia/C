#include <cs50.h>
#include <stdio.h>

//reallocating memory with realloc and pointers

int main(void)
{
    int *numbers = NULL;
    int capacity = 0;

    int size = 0;

    while(true)
    {
        int number = get_int("Number: ");

        //using crtl + d to signal EOF and break when user is done inputting
        if (number == INT_MAX)
        {
            break;
        }

        if (size == capacity)
        {
            numbers = realloc(numbers, sizeof(int) * (size + 1));
        }
        numbers[size] = number;
        size++;

    }
     for (int i = 0; i < size; i++)
        {
            printf("You inputted %i\n", numbers[i]);
        }
}