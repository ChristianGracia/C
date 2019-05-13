#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    //get a string
    char *s = get_string("s: ");

    if(!s)
    {
        return 1;
    }
    //allocate memory for another string
    char *t = malloc((strlen(s) + 1));

    if(!t){
        return 1;
    }
    //copy string into memory

    for (int i = 0, n = strlen(s); i <= n; i++){
        t[i] = s[i];
    }

    //capitalize first letter in string
    if(strlen(t) > 0){
        t[0] = toupper(t[0]);
    }

    //print string twice

    printf("t: %s\n", t);
    printf("s: %s\n", s);
}

//copying a string without changing the original string while accessing the memory location by creating a new memory location with malloc()