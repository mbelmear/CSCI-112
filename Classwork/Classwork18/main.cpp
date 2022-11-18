#include <iostream>
#include "Date.h"
using namespace std;

int main(void) {
    Date birthday(1970, Month::dec, 30);

    cout << birthday << endl;

    birthday.add_month();

    cout << birthday << endl;
    Date d(1970, Month::dec, 30);
    cin >> d;
    cout << d << endl;
}
