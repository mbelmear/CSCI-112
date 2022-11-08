#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<algorithm>
using namespace std;

//Michael Belmear
//Classwork week12
//11/8/2022

int main(void){
    ifstream inpfile;
    inpfile.open("/public/lab7/addresses.txt");
    if(!inpfile.is_open()){
        cout<<"Unable to open file\n";
        return 1;
    }
    vector<string> address;
    string numbers;
    while(inpfile>>numbers){
        address.push_back(numbers);
    }
    sort(address.begin(), address.end());
    for(string s : address){
        cout<<s<<" \n";
    }
    inpfile.close();
    return 0;
}
