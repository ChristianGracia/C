#include <stdio.h>
#include <cs50.h>
#include <string.h>

//casting with (int) to change data type
//dont need (int) usually because compiler knows what is being done

int main(void)
{
    string s = get_string("what is your name?\n");
    for (int i = 0; i < strlen(s); i++)
    {
           int c = (int) s[i];
           printf("%c : %i\n", s[i], c);
    }
}
