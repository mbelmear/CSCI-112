#include <stdio.h>
#include <unistd.h>

//Michael Belmear
//Classwork Week15
//12/7/22

int main(void){
    //make a pipe
    int fd[2];
    pipe(fd);
    //fork
    int id = fork();
    //if child, get int from user, write to pipe
    if(id == 0){
        int input;
        printf("In the child process\n");
        printf("Please enter an integer: ");
        scanf("%d", &input);
        //write to pipe
        write(fd[1], &input, sizeof(int));
        close(fd[1]);
    }else{
        close(fd[1]);
        int passed_data;
        read(fd[0], &passed_data, sizeof(int));
        close(fd[0]);
        printf("In the parent process\n");
        printf("The integer received from the child is: %d\n", passed_data);
    }
    //else read from pipe and print
    return 0;
}
