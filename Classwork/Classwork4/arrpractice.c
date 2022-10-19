#include <stdio.h>

//Michael Belmear
//Classwork Week4 9/12/2022
//CSCI 112

int main(void){
    int digits[5];
    int num;
    printf("Please enter a 5 digit number: \t");
    scanf("%d", &num);
    printf("\n");
    //read in the number
    for (int i = 0; i < 5; ++i){
        digits[i] = num %10;
        num /= 10;
    }
    //print backwards
    for (int j = 4; j >= 0; j--){
        printf("%d ", digits[j]);
    }
    printf("\n");
    return(0);
}
