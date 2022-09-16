#include <stdio.h>
#include <math.h>

//Michael Belmear 
//Lab2 CSCI 112

int checker(int array[], int size){//function to print out the sum of each individual value in the array
    int i;
    int sum = 0;
    for(i = size - 1; i >= 0; i--){//iterating through the size of the array we passed in backwards
        sum = sum + array[i];//finding the sum of all the integers in the array
    }
    return sum;//returning the sum that we found from the array
}

int main(void){
    int numtocheck;
    int numtocheck2;
    int orignum;
    while(1){//while true
         printf("Enter number to check (0 to end): ");
         scanf("%d", &numtocheck);//scanning the user input 
         if(numtocheck == 0){//if the user inputs 0, break out of the loop
             break;
         }
         numtocheck2 = numtocheck;//copying the original number that the user input twice
         orignum = numtocheck;
         int j = 0;//declaring counter variable
         while(numtocheck != 0){//while loop to find the number of integers that make up the user's input 
             numtocheck /= 10;
             j++;//incrementing the counter
         }
         int arr[j];//declaring an array with the size of the counter we kept track of above
         int i = 0;//declaring new counter variable
         while(numtocheck2 != 0){//loop to iterate through the original number and put each individual integer in an array
             arr[i] = numtocheck2 % 10;
             numtocheck2 /= 10;
             i++;//incrementing the counter     
         }
         for(i = j - 1; i >= 0; i--){//iterating through the loop backwards
             printf("%d", arr[i]);//formatting if else and print statements
             if(i != 0){
                 printf(" + ");
             }else{
                 printf(" = ");
             }
         }
         int sum = checker(arr, j);//calling the function using the array we made and the size we kept track of
         printf("%d\n", sum);
         if(sum % 9 == 0){//checking if the sum we got from the function is divisible by 9
             printf("Since %d is divisible by 9, %d is divisible by 9\n", sum, orignum); 
         }else{
             printf("Since %d is not divisible by 9, %d is not divisible by 9\n", sum, orignum);
         }
    }
}
