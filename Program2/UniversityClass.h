#include<iostream>
#include<string>
using namespace std;

//Michael Belmear
//Program 2 CSCI 112
//12/11/2022

class UniversityClass{//declaring our University Class object 
    private://declaring our variables to be private
        string courseNum;//variable to hold each course's number
        string courseTitle;//variable to hold each course's title
        string Instructor;//variable to hold each course's instructor
        string Time;//variable to hold each course's meeting time
        string Classroom;//variable to hold each course's classroom
        int Credits;//variable to hold each course's credits

    public://making our methods public
        //constructor
        UniversityClass(string n, string t, string i, string when, string c, int cr){
            courseNum = n;
            courseTitle = t;
            Instructor = i;
            Time = when;
            Classroom = c;
            Credits = cr;
        }

        //getter methods
        string getCourseNum(){
            return courseNum;
        }
        string getCourseTitle(){
            return courseTitle;
        }
        string getInstructor(){
            return Instructor;
        }
        string getTime(){
            return Time;
        }
        string getClassroom(){
            return Classroom;
        }
        int getCredits(){
            return Credits;
        }

        //setter methods
        void set_CourseNum(string n){
            courseNum = n;
        }
        void set_CourseTitle(string t){
            courseTitle = t;
        }
        void set_Instructor(string i){
            Instructor = i;
        }
        void set_Time(string when){
            Time = when;
        }
        void set_Classroom(string c){
            Classroom = c;
        }
        void set_Credits(int cr){
            Credits = cr;
        }
};
