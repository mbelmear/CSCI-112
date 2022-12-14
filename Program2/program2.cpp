#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<cstring>
#include"Person.h"
#include"Employee.h"
#include"Student.h"
#include"UniversityClass.h"
using namespace std;

//Michael Belmear
//Program 2 CSCI 112
//12/11/2022

vector<string> tokenize_string(string line){//function to break apart our files and put them into a vector of strings
    vector<string> tokens;//declaring our vector of strings
    int lastC = 0;
    int prevC = 0;

    while(line.find(",", lastC) != string::npos){//while loop to iterate through each line in our file while there is still another comma
        prevC = lastC;
        lastC = line.find(",", prevC+1);//setting the last comma to be the previous comma + 1 position
        if(prevC == 0){
            tokens.push_back(line.substr(prevC, lastC-prevC));//populating our vector of strings based on the position of the commas
        }
        else{
            tokens.push_back(line.substr(prevC+1, lastC-prevC-1));
        }
    }
    return tokens;//returning our completed vector of strings
}

Employee emp_populate(vector<string> tokens){//function to populate our Employee object using the vector of strings from our previous function
    int i = stoi(tokens[2]);//converting one element of our vector of strings to an integer 
    Employee e(tokens[1], tokens[0], i, tokens[3], tokens[4]);//filling our employee object 
    return e;//returning our filled employee object
}

Student stu_populate(vector<string> tokens){//function to populate our Student object using the vector of string from our first function
    int i = stoi(tokens[2]);//converting two our elements from the vector of strings into integers
    int c = stoi(tokens[3]);
    Student s(tokens[1], tokens[0], i, c);//filling our student object 
    return s;//returning our student object 
}

UniversityClass cla_populate(vector<string> tokens){//function to populate our UniversityClass object using the vector of strings from the first function
    int cr = stoi(tokens[9]);//converting one element of our vector of strings into an integer
    UniversityClass c(tokens[0], tokens[1], tokens[6], tokens[7], tokens[8], cr);//filling our University Class object 
    return c;//returning our University Class object 
}

int main(void){
    ifstream inpfile1;//declaring variables to hold our input files
    ifstream inpfile2;
    ifstream inpfile3;

    inpfile1.open("/public/pgm2/employees.csv");//opening our input files using the variables we created above
    inpfile2.open("/public/pgm2/students.csv");
    inpfile3.open("/public/pgm2/classes.csv");

    string line1;//declaring variables to hold each line from each input file 
    string line2;
    string line3;

    vector<Employee> emp;//declaring a vector Employees 
    vector<Student> stu;//declaring a vector of Students
    vector<UniversityClass> cla;//declaring a vector of University Classes

    while(getline(inpfile1, line1)){//while loop to loop through each line in our first input file 
        vector<string> tokens1 = tokenize_string(line1);//calling our function to populate our vector of strings
        emp.push_back(emp_populate(tokens1));//calling our function to populate our vector of employees with each employee
    }

    while(getline(inpfile2, line2)){//while loop to loop through each line in our second input file 
        vector<string> tokens2 = tokenize_string(line2);//calling our function to populate our vector of strings
        stu.push_back(stu_populate(tokens2));//calling our function to populate our vector of students with each student
    }

    while(getline(inpfile3, line3)){//while loop to loop through each line in our third input file
        vector<string> tokens3 = tokenize_string(line3);//calling our function to populate our vector of strings
        cla.push_back(cla_populate(tokens3));//calling our function to populate our vector of University Classes with each class
    }

    string userinput1, ui;//declaring a variable to hold our user's name
    cout<<"Enter a first name and last name: ";
    cin>>userinput1>>ui;//taking in the person's first name 

    string userinput2, userinput3, userinput4;//declaring variables to hold the user's class choices
    cout<<"Enter classes to take - one line with spaces between:\n";
    cin>>userinput2>>userinput3>>userinput4;//taking in the user's class choices

    int count = 0;//declaring a counter variable

    for(unsigned i = 0; i <= stu.size(); i++){//logic to iterate through our student vector and print out the necessary info based on the user's input compared to our vector of classes
        if(userinput1 == stu[i].getFirst() && ui == stu[i].getLast()){
            cout<<"Student name: "<<stu[i].getFirst()<<" "<<stu[i].getLast()<<" ID: "<<stu[i].getID()<<" Current credits: "<<stu[i].getCredits()<<endl;
            cout<<"Is registered for:\n";
            for(unsigned j = 0; j <= cla.size(); j++){//iterating through our studetn vector
                if(userinput2 == cla[j].getCourseNum() || userinput3 == cla[j].getCourseNum() || userinput4 == cla[j].getCourseNum()){
                    count += cla[j].getCredits();
                    if(count <= 21){//checking to make sure the number of credits doesn't exceed more than 21
                        cout<<cla[j].getCourseNum()<<" "<<cla[j].getCourseTitle()<<" taught by "<<cla[j].getInstructor()<<" on "<<cla[j].getTime()<<" in "<<cla[j].getClassroom()<<endl;
                    }
                }
            }
        }
    }

    for(unsigned i = 0; i <= emp.size(); i++){//logic to iterate through our employee vector and print out the necessary info based on the user's input compared to our vector of classes
        if(userinput1 == emp[i].getFirst() && ui == emp[i].getLast()){
            cout<<"Employee name: "<<emp[i].getFirst()<<" "<<emp[i].getLast()<<" ID: "<<emp[i].getID()<<" Type: "<<emp[i].getType()<<" Works in: "<<emp[i].getDepartment()<<endl;
            cout<<"Is registered for:\n";
            for(unsigned j = 0; j <= cla.size(); j++){//iterating through the class vector
                if(userinput2 == cla[j].getCourseNum() || userinput3 == cla[j].getCourseNum() || userinput4 == cla[j].getCourseNum()){
                    if(emp[i].getType() == "PT"){//checking if the employee is part time and enrolling them accordingly, ie only 1 class
                        count += cla[j].getCredits();
                        if(count <= 3){
                            cout<<cla[j].getCourseNum()<<" "<<cla[j].getCourseTitle()<<" taught by "<<cla[j].getInstructor()<<" on "<<cla[j].getTime()<<" in "<<cla[j].getClassroom()<<endl;
                        }
                        else{
                            cout<<"Could not register for "<<cla[j].getCourseNum()<<endl;
                        }
                    }
                    else{//if the employee isn't part time then they must be full time so enroll them in a max of 7 credits
                        count += cla[j].getCredits();
                        if(count <= 7){
                             cout<<cla[j].getCourseNum()<<" "<<cla[j].getCourseTitle()<<" taught by "<<cla[j].getInstructor()<<" on "<<cla[j].getTime()<<" in "<<cla[j].getClassroom()<<endl;
                        }
                        else{
                            cout<<"Could not register for "<<cla[j].getCourseNum()<<endl;
                        }
                    }
                }
            }
        }
    }

    inpfile1.close();//closing our input files
    inpfile2.close();
    inpfile3.close();

    return 0;//letting the compiler know that we have run successfully
}
