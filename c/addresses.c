#include <cs50.h>
#include <stdio.h>


int main(void){

    char *s = get_string("S: ");
    char *t = get_string("t: ");

    printf("s: %p\n", s);
    printf("t: %p\n", t);
}