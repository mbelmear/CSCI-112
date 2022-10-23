//Michael Belmear
//CSCI 112 Program 1
//10/23/2022

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "class.h"

int main(void){
    char line[100];//creating an array to keep track of each line
    FILE *fptr = fopen("/public/pgm1/classes.csv", "r");//opening our file
    char userinput;//creating a variable to be used as the user's input
    Class classes[50];//creating an array of structs
    int i = 0;//creating a counter variable
    while(fgets(line, 100, fptr) != NULL){//getting each line in our file and putting it into our array we declared earlier
        strcpy(classes[i].ID, strtok(line, ","));//setting the ID variable within our struct array
        strcpy(classes[i].Title, strtok(NULL, ","));//setting the title variable within our struct array
        strtok(NULL, ",");//discarding extra information that we don't need
        strcpy(classes[i].Seats, strtok(NULL, ","));//setting our seats variable within our struct array
        strtok(NULL, ",");//discarding extra information
        strtok(NULL, ",");//discarding extra information
        strcpy(classes[i].Professor, strtok(NULL, ","));//setting our professor variable within our struct array
        strcpy(classes[i].Days, strtok(NULL, " "));//setting our days variable within our struct array
        strcpy(classes[i].Time, strtok(NULL, " "));//setting our time variable within our struct array
        i++;//incrementing our counter to move onto the next line in our file
    }
    //loop until the user wants to exit
    while(userinput != 'q'){
        //printing the choices everytime we run through the program
        printf("Choices:\n");
        printf("n - print given class number\n");
        printf("d - print all classes for a given day combo\n");
        printf("p - print all classes for a given professor\n");
        printf("q - quit\n");
        printf("Please make a choice: ");
        scanf("%[^\n]%*c", &userinput);//scanning the user's choice from the options above
        char options[10];//variable to keep track of the user's input depending on the choice they make 
    //switchboard to check each input
        switch(userinput){
            case 'n'://if the user inputs n
                printf("Enter a class number: ");//prompt the user for a course ID 
                scanf("%[^\n]%*c", options);//scanner to get the user's input
                printclassbynum(classes, i, options);//calling our function to print a class based on its course number
                break;
            case 'd'://if the user inputs d
                printf("Enter class days to print (MWF or TR): ");//prompt the user for a day combo
                scanf("%[^\n]%*c", options);//scanner to get the user's input
                printclassesbyday(classes, i, options);//calling our function that prints all the classes by a given day combo
                break;
            case 'p'://if the user inputs p 
                printf("Enter a professor's last name: ");//prompt the user for a last name
                scanf("%[^\n]%*c", options);//scanner to get the user's input
                printclassbyprof(classes, i, options);//calling our function that prints classes by a professor
                break;
        }
    }
    fclose(fptr);//closing our file
    return(0);
}
