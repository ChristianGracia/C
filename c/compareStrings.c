#include <cs50.h>
#include <stdio.h>
#include <string.h>

bool compare_strings(string a, string b);

int main(void)
{
    string i = get_string("i: ");
    string j = get_string("j: ");

    if (compare_strings(i, j))
    {
        printf("same\n");
    }
    else
    {
        printf("different\n");
    }
}


bool compare_strings(string a, string b)
{
    if (strlen(a) != strlen(b)){
        return false;
    }
    for (int i = 0, n = strlen(a); i < n; i++){
        if (a[i] != b[i]){
            return false;
        }
    }

    return true;
}