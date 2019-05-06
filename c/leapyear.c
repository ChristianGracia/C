#include <stdio.h>
#include<cs50.h>
#include<stdbool.h>

//checks if given year is a leap year according to leap year rules

bool isLeapYear(year){

    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        return true;
    }
    return false;

}


int main(){
    int year = get_int("enter a year: ");
    if (isLeapYear(year))
    {
        printf("%i is leapyear", year);
    }
    else{
        printf("%i is not leapyear", year);
    }
}