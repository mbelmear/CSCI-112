#include <iostream>
#include <vector>
using namespace std;

//Michael Belmear
//CSCI 112 Classwork
//11/3/2022

vector<string> fillWords(string input){
    vector<string> toReturn;
    for(unsigned int i = 0; i < input.length(); i++){
        toReturn.push_back("Go Cats! ");
    }
    return toReturn;
}

int main(int argc, char** argv){
    if(argc != 2){
        cout<<"Wrong number of arguments\n";
        return 1;
    }

    string input = argv[1];
    vector<string> words;
    words = fillWords(input);
    for(string word : words){
        cout << word;
    }
    cout<<endl;
    return 0;
}

