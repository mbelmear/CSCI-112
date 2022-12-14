#include<iostream>
#include<string>
using namespace std;

//Michael Belmear
//Program 2 CSCI 112
//12/11/2022

class Person{//declaring our person Object
    protected://Person class member variables
        string firstname;//variable to hold each person's first name
        string lastname;//variable to hold each person's last name
        int id;//variable to hold each person's id
    
    public:
        //constructors
        Person(string f, string l, int i){
            firstname = f;
            lastname = l;
            id = i;
        }

        //getter functions
        string getFirst(){
            return firstname;
        }
        string getLast(){
            return lastname;
        }
        int getID(){
            return id;
        }

        //setter functions
        void set_First(string f){
            firstname = f;
        }
        void set_Last(string l){
            lastname = l;
        }
        void set_ID(int i){
            id = i;
        }
};
