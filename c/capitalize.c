#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void){

    string s = get_string("Enter string to be capitalized: ");
    printf("After: ");

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - ('a' - 'A'));
        }
        else printf("%c", s[i]);
    }
    printf("\n");


}