#include <iostream>
#include <vector>
using namespace std;

//Michael Belmear 
//classwork 11/1/2022

void error(string s){
    throw runtime_error("Error: " + s);
}

int main(void){
    vector<int> numbers;
    int userinput;
    cout<<"Enter an integer (0 to quit)\n";
    cin>>userinput;
    while (userinput != 0){
        numbers.push_back(userinput);
        cout<<"Enter an integer (0 to quit)\n";
        cin>>userinput;
        if(userinput < 0){
            error("cannot be negative");
        }
    }

    int total;
    for (int num : numbers){
        total += num;
    }
    cout << "Sum/2 = " <<total/2<<endl;
    return 0;
}
