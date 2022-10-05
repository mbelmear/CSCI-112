//Michael Belmear
//Classwork9
//10/5/2022

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *fileptr = fopen("/public/lab4/hurricanes.csv", "r");
    char *line[100];
    for(int i = 0; i < 37; i++){
        line[i] = malloc(sizeof(char) * 100);
        fgets(line[i], 100, fileptr);
    }
    for(int i = 0; i < 37; i++){
        printf("line is %s", line[i]);
    }
    return(0);
}
