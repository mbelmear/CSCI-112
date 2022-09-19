#include <stdio.h>

//Michael Belmear
//CSCI 112 Classwork6 Pointers

int main(void){
    //create pointers of different data types
    int *ip;
    double *dp;
    char *cp;

    //set the values
    int n = 5;
    double d = 2.5;
    char c = 'a';

    //set pointers equal to the addresses
    ip = &n;
    dp = &d;
    cp = &c;

    //print the address of each (where it points to)
    printf("ip's value: %p\n", ip);
    printf("dp's value: %p\n", dp);
    printf("cp's value: %p\n", cp);

    //print the value of the location in memory that each pointer is pointing to
    printf("ip points to: %d\n", *ip);
    printf("dp points to: %lf\n", *dp);
    printf("cp points to: %c\n", *cp);

    return(0);
}
