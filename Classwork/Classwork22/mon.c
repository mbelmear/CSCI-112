#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Michael Belmear
//Classwork Week15
//12/6/22

//define person struct
typedef struct{
    char name[20];
    int age;
} Person;

//change to take in person
//print name and age
void *hello(void *input){
    //cast input to a person pointer
    //access name and age to print out
    printf("name: %s\n", ((Person*)input)->name);
    printf("age: %d\n", ((Person*)input)->age);
    return NULL;
}

int main(){
    //instead of string, make person
    Person *p1 = malloc(sizeof(Person));
    //set name and age
    strcpy(p1->name, "John");
    p1->age = 18;

    Person *p2 = malloc(sizeof(Person));
    strcpy(p2->name, "Elton");
    p2->age = 57;

    //make two threads
    pthread_t tid1;
    pthread_create(&tid1, NULL, hello, (void *)p1);
    //join both
    pthread_join(tid1, NULL);

    pthread_t tid2;
    pthread_create(&tid2, NULL, hello, (void *)p2);
    pthread_join(tid2, NULL);
    return 0;
}
