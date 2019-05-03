#include <cs50.h>
#include <stdio.h>

int main (int argc, string argv[])
{
    if (argc == 2)
    {
        printf("Hello %s\n", argv[1]);
    }
    else
    {
        printf("Hi");
    }
}

//.argv0 x runs the program with x already as an argument