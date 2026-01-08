//
// Created by Paulo Munhoz on 2025-11-27.
//

#include <iostream>
#include <sstream>

using namespace std;

class Date {
public:
    int day;
    int month;
    int year;

    string toString() {
        stringstream ss;
        ss << day << "/" << month << "/" << year;
        return ss.str();
    }
};

int main() {
    Date d1{}; // start all variables with 0

    d1.day = 3;
    d1.month = 11;
    d1.year = 2023;

    cout << d1.day << "/" << d1.month << "/" <<d1.year << endl;

    Date d2{};
    d2.day = 3;
    d2.month = 13;
    d2.year = 2024;

    cout << d2.day << "/" << d2.month << "/" <<d2.year << endl;
    cout << d1.toString() << endl;
    cout << d2.toString() << endl;
    return 0;

}