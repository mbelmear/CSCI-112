#include <stdio.h>
#include "Class.h"
#include <string.h>

//Michael Belmear 
//CSCI 112 classwork 11
//10/12/22

int main(void){
    //declaring a class
    Class c1;
    char line[100];
    char *num, *title;
    //opening the file
    FILE *file = fopen("/public/pgm1/classes.csv", "r");
    //getting the first line in the file
    fgets(line, 100, file);
    //getting the class number and class title
    num = strtok(line, ",");
    title = strtok(NULL, ",");
    //set classnumber and classtitle
    strcpy(c1.classnumber, num);
    printf("c1.classnumber is %s\n", c1.classnumber);
    strcpy(c1.classtitle, title);
    printf("c1.classtitle is %s\n", c1.classtitle);
    fclose(file);
    return(0);
}
