#include <cs50.h>
#include <stdio.h>

//size = amount of items in something currently
//capacity = amount of items that could possible fit

int main(void)
{
    int capacity;
    do
    {
        capacity = get_int("Capacity: ");
    }
    while (capacity < 1);



    int numbers[capacity];

    int size = 0;
    while (size < capacity)
    {
        int number = get_int("Number: ");
        numbers[size] = number;
        size++;
    }

    for (int i = 0; i < size; i++)
    {
        printf("You inputted %i\n", numbers[i]);
    }

}