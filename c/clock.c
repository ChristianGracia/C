#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int c;
    do
    {
        c = get_int("enter the current time\n");
        int t = get_int("enter the amount of hours you want to add\n");
        if (c <= 12 && c > 0)
        {
            if (t < 0)
            {
                int d = c - - (t % 12);
                printf("The subtracted time is: %i", d);
            }
            else if (t > 0)
            {
                int d = (c + (t % 12)) % 12;
                printf("The time is: %i", d);
            }
        }
    }
    while (c > 12 || c <= 0);
}