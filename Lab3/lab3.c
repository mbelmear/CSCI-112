/*
  Michael Belmear 
  Lab 3 CSCI 112
  9/25/2022
*/

#include <stdio.h>
#include <stdlib.h>

//function to calculate each students grade
int calcgrades(char arr[], char arr2[], int size){
    int counter = 0;//creating a counter variable to keep track of correct questions
    for(int i = 0; i < size; i++){//for loop to iterate through each array 
        if(arr[i] == arr2[i]){//checking if the answer array at each index is equal to the student answer array at each index
            counter++;//if it is, add to the counter, otherwise pass
        }
    }
    float total = (float)counter/(float)size * 100.0;//calculate each students grade by dividing the the number of questions that matched by the size of the array
    printf("%.2f", total);//printing the total
    return(0);//returning to main
}


void handlestudent(FILE * filed, char arr[], char array2[], int array3[], int numqs, char id[]) {
    printf("%s \t", id);
    fgetc(filed);//getting each new line character at the end of every line
    for(int i = 0; i < numqs; i++){//for loop to populate our second array with each students answers 
        array2[i] = fgetc(filed);
        if(array2[i] != arr[i]) {
            array3[i]++;
        }
    }
    calcgrades(arr, array2, numqs);//calling our function to calculate each student's grade
    printf("\n");
}

int main(void){
    FILE * filed;//file pointer
    char grades;//variable to keep track of grades
    int numqs;//variable to keep track of the number of questions
    filed = fopen("/public/lab3/exam.txt", "r");//opening the file
    numqs = fgetc(filed)-'0';//getting the number of questions from the first character of the input file
    fgetc(filed);//getting/discarding the space in the file
    int i;
    printf("Question\t");
    for(i = 0; i < numqs; i++){//for loop to print the number of questions
        printf("%d ", i + 1);
    }
    printf("\n");
    printf("Answer\t\t");
    char array[numqs];//array with the size of the number of questions that we've found
    for(i = 0; i < numqs; i++){//for loop to get the correct answers and put them into an array
        grades = fgetc(filed);
        printf("%c ", grades);
        array[i] = grades;
    }
    printf("\n");
    printf("ID      Grade(%%)\n");
    char array2[numqs];//creating a second array with the size of the number of questions
    int array3[numqs];
    for (int i = 0; i < numqs; i++) {
        array3[i] = 0;
    }
    fgetc(filed);//getting the space and discarding it
    char id[3]; //creating a student id array to get each student's id
    while(fscanf(filed, "%s", id) != EOF){//loop to iterate through the file while we are not at the end
        handlestudent(filed, array, array2, array3, numqs, id);
    }
    printf("Question\t");//formatting
    for(int i = 0; i < numqs; i++){//for loop to print the number of questions
        printf("%d ", i + 1);
    }
    printf("\n");
    printf("Missed By\t");
    for(int i = 0; i < numqs; i++) {
        printf("%d ", array3[i]);
    }
    printf("\n");
    fclose(filed);//closing the file
    return(0);//letting the compiler know that our program has ran successfully
}
