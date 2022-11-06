#include<iostream>
#include<string>
#include<vector>
using namespace std;

//Michael Belmear
//Lab5 CSCI 112 
//11/6/2022

void errorfunc(string s){//runtime error function that prints a descriptive error message based on the type of error committed by the user
    throw runtime_error("Error: " + s);
}

vector<string> populate(string input){//vector function to populate a vector based on the users command line arguments 
    vector<string> words;//creating a vector of strings
    if(input.length() == 4){//if the length of the usersinput is 4 characters, then add specific strings to the vector based on each character and the order in which it lies
        switch(input[0]){
            case '1':
                words.push_back(" one thousand");
                break;
            case '2':
                words.push_back(" two thousand");
                break;
            case '3':
                words.push_back(" three thousand");
                break;
            case '4':
                words.push_back(" four thousand");
                break;
            case '5':
                words.push_back(" five thousand");
                break;
            case '6':
                words.push_back(" six thousand");
                break;
            case '7':
                words.push_back(" seven thousand");
                break;
            case '8':
                words.push_back(" eight thousand");
                break;
            case '9':
                words.push_back(" nine thousand");
                break;
            }
        switch(input[1]){
            case '1':
                words.push_back(" one hundred");
                break;
            case '2':
                words.push_back(" two hundred");
                break;
            case '3':
                words.push_back(" three hundred");
                break;
            case '4':
                words.push_back(" four hundred");
                break;
            case '5':
                words.push_back(" five hundred");
                break;
            case '6':
                words.push_back(" six hundred");
                break;
            case '7':
                words.push_back(" seven hundred");
                break;
            case '8':
                words.push_back(" eight hundred");
                break;
            case '9':
                words.push_back(" nine hundred");
                break;
            }
        switch(input[2]){
            case '1':
                errorfunc("digit in the tens place cannot be 1");//calling our error function if the digit in the tens place is a 1
                break;
            case '2':
                words.push_back(" twenty");
                break;
            case '3':
                words.push_back(" thirty");
                break;
            case '4':
                words.push_back(" forty");
                break;
            case '5':
                words.push_back(" fifty");
                break;
            case '6':
                words.push_back(" sixty");
                break;
            case '7':
                words.push_back(" seventy");
                break;
            case '8':
                words.push_back(" eighty");
                break;
            case '9':
                words.push_back(" ninety");
                break;
            }
        switch(input[3]){
            case '1':
                words.push_back(" one");
                break;
            case '2':
                words.push_back(" two");
                break;
            case '3':
                words.push_back(" three");
                break;
            case '4':
                words.push_back(" four");
                break;
            case '5':
                words.push_back(" five");
                break;
            case '6':
                words.push_back(" six");
                break;
            case '7':
                words.push_back(" seven");
                break;
            case '8':
                words.push_back(" eight");
                break;
            case '9':
                words.push_back(" nine");
                break;
            }
    }
    if(input.length() == 3){//if the length of the users input is 3 characters, then add specific strings to the vector based on the character and the order in which it lies
        switch(input[0]){
            case '1':
                words.push_back(" one hundred");
                break;
            case '2':
                words.push_back(" two hundred");
                break;
            case '3':
                words.push_back(" three hundred");
                break;
            case '4':
                words.push_back(" four hundred");
                break;
            case '5':
                words.push_back(" five hundred");
                break;
            case '6':
                words.push_back(" six hundred");
                break;
            case '7':
                words.push_back(" seven hundred");
                break;
            case '8':
                words.push_back(" eight hundred");
                break;
            case '9':
                words.push_back(" nine hundred");
                break;
            }
        switch(input[1]){
            case '1':
                errorfunc("digit in the tens place cannot be 1");//calling our error function if the digit in the tens place is 1
                break;
            case '2':
                words.push_back(" twenty");
                break;
            case '3':
                words.push_back(" thirty");
                break;
            case '4':
                words.push_back(" forty");
                break;
            case '5':
                words.push_back(" fifty");
                break;
            case '6':
                words.push_back(" sixty");
                break;
            case '7':
                words.push_back(" seventy");
                break;
            case '8':
                words.push_back(" eighty");
                break;
            case '9':
                words.push_back(" ninety");
                break;
            }
        switch(input[2]){
            case '1':
                words.push_back(" one");
                break;
            case '2':
                words.push_back(" two");
                break;
            case '3':
                words.push_back(" three");
                break;
            case '4':
                words.push_back(" four");
                break;
            case '5':
                words.push_back(" five");
                break;
            case '6':
                words.push_back(" six");
                break;
            case '7':
                words.push_back(" seven");
                break;
            case '8':
                words.push_back(" eight");
                break;
            case '9':
                words.push_back(" nine");
                break;
            }
    }       
    if(input.length() == 2){//if the length of the users input is 2 characters, then add specific strings to the vector based on the character and the order in which it lies
        switch(input[0]){
            case '1':
                errorfunc("digit in the tens place cannot be 1");//calling our error function if the digit in the tens place is 1
                break;
            case '2':
                words.push_back(" twenty");
                break;
            case '3':
                words.push_back(" thirty");
                break;
            case '4':
                words.push_back(" forty");
                break;
            case '5':
                words.push_back(" fifty");
                break;
            case '6':
                words.push_back(" sixty");
                break;
            case '7':
                words.push_back(" seventy");
                break;
            case '8':
                words.push_back(" eighty");
                break;
            case '9':
                words.push_back(" ninety");
                break;
            }
        switch(input[1]){
            case '1':
                words.push_back(" one");
                break;
            case '2':
                words.push_back(" two");
                break;
            case '3':
                words.push_back(" three");
                break;
            case '4':
                words.push_back(" four");
                break;
            case '5':
                words.push_back(" five");
                break;
            case '6':
                words.push_back(" six");
                break;
            case '7':
                words.push_back(" seven");
                break;
            case '8':
                words.push_back(" eight");
                break;
            case '9':
                words.push_back(" nine");
                break;
            }
    }
    if(input.length() == 1){//if the length of the users input is 1 character, then add specific strings to the vector based on the character and the order in which it lies
        switch(input[0]){
            case '1':
                words.push_back(" one");
                break;
            case '2':
                words.push_back(" two");
                break;
            case '3':
                words.push_back(" three");
                break;
            case '4':
                words.push_back(" four");
                break;
            case '5':
                words.push_back(" five");
                break;
            case '6':
                words.push_back(" six");
                break;
            case '7':
                words.push_back(" seven");
                break;
            case '8':
                words.push_back(" eight");
                break;
            case '9':
                words.push_back(" nine");
                break;
            }
    }

    return words;//returning our completed vector
}

int main(int argc, char** argv){//main function that takes in command line arguments
    if(argc != 2){//if there are no arguments given or if the number of arguments isn't equal to 2, call our error function
        errorfunc("incorrect number of arguments");//calling our error function and passing in a descriptive error message
        return 1;//returning 1 to let the compiler know that our program contains errors
    }

    string input = argv[1];//setting a string equal to the users command line arguments 
    vector<string> output;//creating a vector to be used as our output for printing
    output = populate(input);//calling our vector funtion on our users input and setting it equal to the output vector we just created
    if(input.length() == 1){//if statement to print our output if the length of the users input is 1 character
        cout<<"Number "<<input<<" is written as";
        for(string word : output){
            cout<<word;//printing our vector of words
        }
    }else if(input.length() == 2){//else if statement to print our ouput if the length of the users input is 2 characters
        cout<<"Number "<<input<<" is written as";
        for(string word : output){
            cout<<word;//printing our vector of words
        }
    }else if(input.length() == 3){//else if statement to print our output if the length of the users input is 3 characters
        cout<<"Number "<<input<<" is written as";
        for(string word : output){
            cout<<word;//printing our vector of words
        }
    }else if(input.length() == 4){//else if statement to print our output if the length of the users input is 4 characters
        cout<<"Number "<<input<<" is written as";
        for(string word : output){
            cout<<word;//printing our vector of words
        }
    }
    cout<<endl;
    return 0;//letting the compiler know we have no errors
}
