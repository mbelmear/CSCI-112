#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

//Michael Belmear
//classwork week14
//11/28/2022

vector<string> tokenize_string(string line){
    vector<string> tokens;
    stringstream sstream(line);
    while(sstream.good()){
        string substr;
        getline(sstream, substr, ',');
        tokens.push_back(substr);
    //going to need variables to store the different parts of each line and put them into a vector, then print the vector
    }
    return tokens;
}

int main(void){
    //open the file
    ifstream inpfile;
    inpfile.open("/public/pgm2/employees.csv");
    
    string line;
    //read each line
    while(getline(inpfile, line)){
       // cout<<line<<endl;
       vector<string> token = tokenize_string(line);
       string tok = token.at(0);
       //for(string c : tok){
       cout << tok << endl;//printing only the last names
      // }
    }
    //closing the file
    inpfile.close();

    return(0);
}
