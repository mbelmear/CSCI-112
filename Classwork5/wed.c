#include <stdio.h>

/*Michael Belmear 
  Classwork 9/14/22
  CSCI 112*/

int main(void){
//declare and open file
    FILE* fptr = fopen("/public/examples/chap7/wed_9-14_in.txt", "r");
    //check that fptr isn't null
    if(fptr == NULL){
        printf("Can't find file\n");
        return(1);
    }
    int arr[6][8];
    int num;
    int i = 0, j = 0;
    while(fscanf(fptr, "%d", &num) == 1){
        //put num in array
        if (num == 0){
            arr[i++][j] = num;
            j = 0;
        }
        else{
            arr[i][j++] = num;
        }
    }
    fclose(fptr);

    int total_rows = i;
    int sum = 0;
    for (int i = 0; i < total_rows; ++i){
        for (j = 0; j < 8; j++) {
            if (arr[i][j] != 0){
                //print the element
                sum += arr[i][j];
                //add to sum
            }
            else{
                //print the sum of the row
                printf("sum of row %d is %d\n", i, sum);
                sum = 0;
                break;
            }
        }
    }
    return(0);
}
