//Michael Belmear
//Classwork Wednesday
//10/26/2022

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char** argv){
    if (argc == 1){
        cout<<"No arguments taken\n";
        return(1);
    }else{
        int num = atoi(argv[1]);
        cout<<"Number is "<<num*2<<endl;
    }
    return(0);
}
