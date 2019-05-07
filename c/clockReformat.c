#include <cs50.h>
#include <stdio.h>

int getCurrentTime(int);
int getTimeChange(int);
int getNewTime(int, int);

int main(void)
{
    int timeCurrent = 0;
    int newTime = 0;
    int timeAdded = 0;

    while (timeCurrent > 12 || timeCurrent < 1)
    {
       timeCurrent = getCurrentTime(timeCurrent);
    }

    timeAdded = getTimeChange(timeAdded);
    newTime = getNewTime(timeCurrent, timeAdded);
    printf("The new time is: %i\n", newTime);
}



int getCurrentTime(int n)
{
    n = get_int("enter current time\n");
    return n;
}

int getTimeChange(int n){
    n = get_int("enter the time you want to add\n");
    return n;
}

int getNewTime (int n, int c)
{
    if (c > 12)
    {
        int d = (n + (c % 12)) % 12 ;
        return d;
    }
    else if (c < 12 && c > 0)
    {
        int d = (c + n) % 12;
        return d;
    }
    else if (c < 0)
    {
        int d = n - - (c % 12);
        return d;
    }
    else return 0;
}