#include<iostream>
#include<vector>
using namespace std;

//Michael Belmear 
//Classwork week 12
//11/10/2022

enum month {
    Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec
};

int main(void){
    vector<int> days = {31,29,31,30,31,30,31,31,30,31,30,31};

    for(int i = Jan; i <= Dec; i++){
        cout<<"Month "<<i+1<<" has "<<days[i]<<" days\n";
    }
    return 0;
}
