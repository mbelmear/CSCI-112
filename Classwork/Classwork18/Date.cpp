#include <iostream>
#include "Date.h"
using namespace std;

Date::Date(int year, Month month, int day)
    :y{year}, m{month}, d{day} {  // member initializer list
    if (!is_valid()) throw Invalid();
}

bool Date::is_valid() {
    if (m < Month::jan || m > Month::dec) {
        return false;
    }
    if (d < 1 || d > 31) {
        return false;
    }
    return true;
}

int Date::add_day() {
   d++;
    return d;
} 

Month operator++(Month& m) {
    m = (m == Month::dec) ? Month::jan : Month((int)m+1);
    return m;
}

Month Date::add_month() {
    y = (m==Month::dec ? ++y : y);
    // m = (m==Month::dec ? Month::jan : Month((int)m+1));
    ++m;

    
    return m;
}

ostream& operator<<(ostream &output, const Date &D) {
    output << (int)D.month() << "/" << D.day() << "/" << D.year();
    return output;
}

istream& operator>>(istream &input, Date &D){
    string inp_string;
    cin >> inp_string;
    int pos1, pos2;
    pos1 = inp_string.find("/");
    int month = stoi(inp_string.substr(0, pos1));
    D.m = Month(month);
    pos2 = inp_string.find("/", pos1+1);
    D.d = stoi(inp_string.substr(pos1+1, pos2-pos1));
    D.y = stoi(inp_string.substr(pos2+1, inp_string.length()-pos2));
    return input;
}
