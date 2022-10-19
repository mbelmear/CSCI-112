#include <stdio.h>

//Michael Belmear classwork 9/28/22

void compute(int num1, int num2, int num3, double *sum, double *avg){

    *sum = num1 + num2 + num3;

    *avg = *sum/3;

    return;
}

int main(void){

    double input1;
    double input2;
    double input3;

    printf("Please enter a number: ");
    scanf(" %lf", &input1);

    printf("Enter another number: ");
    scanf(" %lf", &input2);

    printf("Enter one more number: ");
    scanf(" %lf", &input3);
    
    double avg;
    double sum;

    compute(input1, input2, input3, &sum, &avg);
    printf("Average of your numbers is %.2lf, and the sum of your numbers is %.2lf\n", avg, sum);

    return(0);
}
