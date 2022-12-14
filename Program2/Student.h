#include<iostream>
#include<string>
using namespace std;

//Michael Belmear
//Program 2 CSCI 112
//12/11/2022

class Student : public Person{//declaring our Student object to inherit from our Person class
    private://making our data private(variables
        int credits;//variable to hold the credits of each student

    public://making our methods public
        //constructor method
        Student(string f, string l, int i, int c) : Person(f, l, i){
            credits = c;
        }

        //getter method
        int getCredits(){
            return credits;
        }

        //setter method
        void set_Credits(int c){
            credits = c;
        }
};
