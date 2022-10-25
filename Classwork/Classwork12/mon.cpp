#include <iostream>
using namespace std;

//Michael Belmear
//10/24/2022

int main(){
    string fname;
    string lname;
    string age;
    cout<<"Enter first name: ";
    getline(cin, fname);
    cout<<"Enter last name: ";
    getline(cin, lname);
    cout<<"Enter age: ";
    getline(cin, age);
    cout<<"Hello "<<fname<<" "<<lname<<", "<<age<<" is a wonderful age!\n";
    return 0;
}
