//Michael Belmear
//Program 1 functions file
//10/23/2022

#include <stdio.h>
#include "class.h"
#include <string.h>

//function to format output correctly
int print(Class* classes){
    printf("%-40s %-10s %-30s %-5s %-5s %s", classes->Title, classes->ID, classes->Professor, classes->Seats, classes->Days, classes->Time);        
    return(0);
}
//function to print class by ID number
int printclassbynum(Class* classes, int numClasses, char* options){
    for(int i = 0; i < numClasses; i++) {//iterating through the array of structs
        Class* cur = classes + i;//creating a variable that is equal to the array of structs at our ith index
        if(strcmp(cur->ID, options) == 0){//checking if the id the user input is equal to the course id
            print(cur);//calling our print function to print each class that matches the users id input
        }
    }
    return(0);
}
//function to print classes by the day they are on
int printclassesbyday(Class* classes, int numClasses, char* options){
    for(int i = 0; i < numClasses; i++){//iterating through the array of structs
        Class* cur = classes + i;//creating a variable that is equal to the array of structs at our ith index
        if(strcmp(cur->Days, options) == 0){//checking if the the days that the class is offered is equal to the user's input
            print(cur);//calling our print function to print each class that falls on the day the user input
        }
    }
    return(0);
}
//function to print all the classes taught by a particular professor
int printclassbyprof(Class* classes, int numClasses, char* options){
    for(int i = 0; i < numClasses; i++){//iterating through the array of classes
        Class* cur = classes + i;//creating a variable that is equal to the array of structs at our ith index
        char name[50];//creating a character array or a string varible to use as a name place holder
        strcpy(name, cur->Professor);//copying the professor's name currently in our struct into our name varible
        if(strcmp(strtok(name, " "), options) == 0){//checking if the last name that the user has input is equal to a professor's name within our struct array
            print(cur);//calling our print function to print all the courses taught by a particular professor
        }
    }
    return(0);
}
