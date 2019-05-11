#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main (int argc, string argv[]){
    if (argc !=2){
        printf("missing command line argument");
        return 1;
    }
    else {
        printf("hello %s", argv[1]);
    }
}

//using echo $? to get error code. If no return value is given then the default echo$? = 0
// any other number signals an error.