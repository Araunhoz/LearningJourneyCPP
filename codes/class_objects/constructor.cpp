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

    Date() {
        day = 1;
        month = 1;
        year = 1;
    }
};

int main() {
    Date d1;

    cout << d1.day << "/" << d1.month << "/" <<d1.year << endl;

    return 0;

}