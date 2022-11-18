#include <iostream>
using namespace std;

enum class Month {jan = 1, feb, mar, apr, may, jun, jul, aug, sep, 
                  oct, nov, dec};
class Date {
public:
    class Invalid {};  // to be used as an exception
    Date(int, Month, int);
    int add_day();
    Month add_month();
    int add_year();
    // int month(){ return m; } // inline function
    int day() const { return d; } // inline function
    int year() const { return y; } // inline function
    Month month() const { return m; } // inline function
    friend ostream &operator<<(ostream&, const Date&);
    friend istream &operator>>(istream&, Date&);
private:
    int y, d;  // year, month, day
    Month m;
    bool is_valid();
};
