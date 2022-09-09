#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//Michael Belmear 
//CSCI 112 Lab1 9/9/2022

int in_military(double costed){
    double lower;
    double higher;
    double costed2;
    if(costed >= 200.00){
         higher = costed*.2;
         printf("Military discount (20%%)\t $");
         printf("%.2lf", higher);
         printf("\n");
         costed2 = costed - higher;
         printf("Discounted total \t $%.2lf", costed2);
         printf("\n");
         return costed2;
    }else{
         lower = costed*.15;
         printf("Military discount (15%%)\t $");
         printf("%.2lf", lower);
         printf("\n");
         costed2 = costed - lower;
         printf("Discounted total \t $%.2lf", costed2);
         printf("\n");
         return costed2;
    }
    return(0);
}

int main(void){
    double cost;
    char isinmil;
    printf("Cost of purchase:\t $");
    scanf("%lf", &cost);
    printf("In military (y or n)?\t ");
    scanf(" %c", &isinmil);
    double total;
    if(isinmil == 'y' || isinmil == 'Y'){
        double tot = in_military(cost); 
        printf("Sales tax (6%%)\t\t ");
        double disctaxed = tot*.06;
        printf("$%.2lf\n",disctaxed);
        total = tot + disctaxed;
        printf("Total\t\t\t $%.2lf", total);
        printf("\n");
    }
    else if(isinmil == 'n' || isinmil == 'N'){
        printf("Sales tax (6%%)\t\t ");
        double taxed = .06*cost;
        printf("$%.2lf\n",taxed);
        total = cost + taxed;
        printf("Total\t\t\t $%.2lf", total);
        printf("\n");
    }
    else{
        printf("Error: bad input\n");
    }
    return(0);
    
    //if person is in the military
    //they get a 20% discount if they spend $200 or more
    //else if they get a 15% discount
    //otherwise they get no discount
    //sales tax is 6%
}
