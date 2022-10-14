//Michael Belmear
//CSCI 112 Lab 4

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//selection sort algorithm
void SelectionSort(char *strs[], int size){
    int i, j;
    char temp[100];
    
    for(i = 0; i < size-1; i++){
        for(j = i+1; j < size; j++){
            if (strcmp(strs[i], strs[j]) > 0){
                strcpy(temp, strs[i]);
                strcpy(strs[i], strs[j]);
                strcpy(strs[j], temp);
            }
        }
    }
        
    return;
}

//file reader function
int filereadfilewrite(){
    FILE *fileptr = fopen("/public/lab4/hurricanes.csv", "r");//opening the file and telling the computer that we want to read from it
    FILE *fptr = fopen("hurricanes.txt", "w");//creating a file to write to 
    char *hurricanes[100];//making a char array to store each line of our file

    if(fileptr == NULL){//if statement to check if the file is a valid file, if not it prints an error message
        printf("This file does not exist!\n");       
        return(1);
    }

    for(int i = 0; i < 37; i++){//for loop to store each line from our file into memory allocated specifically for each line
        hurricanes[i] = malloc(sizeof(char) * 100); 
        fgets(hurricanes[i], 100, fileptr);
    }

    SelectionSort(hurricanes, 37);//calling our selection sort function
    fprintf(fptr, "Hurricanes in Florida with category and date\n");
    char *hurricane, *category, *date1, *date2, *date3;//declaring pointer variables to keep track of the hurricane name, category, and date
    for(int i = 0; i < 37; i++){//for loop to iterate through each line and pull out the information that we want
        hurricane = strtok(hurricanes[i], ",");
        strtok(NULL, " ");
        category = strtok(NULL, " ");
        strtok(NULL, ",");
        date1 = strtok(NULL, "-");
        date2 = strtok(NULL, ",");
        date3 = strtok(NULL, " ");
        fprintf(fptr, "%s\t\t\t%s\t %s-%s %s", hurricane, category, date1, date2, date3);//printing our ouput to the file
    }

    fclose(fileptr);
    fclose(fptr);
    return(0);
}

int main(void){
    filereadfilewrite();//calling our file read and write function   
    return(0);
}
