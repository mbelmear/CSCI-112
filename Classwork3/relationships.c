#include <stdio.h>

//Michael Belmear
//classwork 9/7/22
//CSCI 112

int main(void) {
    int userinput;
    printf("Enter a number: ");
    scanf("%d", &userinput);
    
    int userinput2;
    printf("Enter another number: ");
    scanf("%d", &userinput2);

    if(userinput == userinput2){
        printf("%d is the same as %d \n", userinput, userinput2);
    }
    else if(userinput > userinput2){
        printf("%d is greater than %d \n", userinput, userinput2);
    }
    else{
        printf("%d is greater than %d \n", userinput2, userinput);
    }
    return(0);
}
