#include <stdio.h>
#include <string.h>

//Michael Belmear
//Classwork Week7
//10/3/2022

int main(void){
    char line[100];
    char *name, *cat, *date;

    FILE *fptr = fopen("/public/lab4/hurricanes.csv", "r");
    fgets(line, 100, fptr);
    name = strtok(line, ",");
    cat = strtok(NULL, ",");
    date = strtok(NULL, " ");

    printf("Hurrican name: %s\n", name);
    printf("Type: %s\n", cat);
    printf("Date: %s", date);

    return(0);
}
