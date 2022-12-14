#include<iostream>
#include<string>
using namespace std;

//Michael Belmear
//Program 2 CSCI 112
//12/11/2022

class Employee : public Person{//declaring our Employee object to inherit from our Person object
    private://setting our data/variables to be private
        string type;//variable to hold each employee's type either ft or pt
        string dept;//variable to hold each employee's department

    public://setting our methods to be public
        //constructors
        Employee(string f, string l, int i, string t, string d) : Person(f, l, i){
            type = t;
            dept = d;
        }

        //getter methods
        string getType(){
            return type;
        }
        string getDepartment(){
            return dept;
        }

        //setter methods
        void set_Type(string t){
            type = t;
        }
        void set_Department(string d){
            dept = d;
        }
};
