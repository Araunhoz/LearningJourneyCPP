//
// Created by Paulo Munhoz on 2025-12-03.
//

#include <iostream>
using namespace std;

int main() {

    bool isAdmin = true; // true false 0 1
    cout << "isAdmin : " << isAdmin << endl;


    //char symbol = '#';

    char symbol('#');
    cout << "symbol : " << symbol << endl;

    //datatype modifiers
    //signed unsigned long short

    short int age = 31;
    cout << age << " age : " << age << endl;

    float pi = 3.14; // 32 bits - single precision floating point type

    const float PI = 3.141592; // 64 bits - double precision floating
    cout << "pi: " << pi << endl;
    cout << "PI: " << PI << endl;

    short int n1 = 1;
    long int n2 = 1;
    unsigned int n3 = 1;
    long long int n4 = 1;
    cout << n1 + n2 + n3 + n4 << endl;

    cout << sizeof(char) << " byte" << endl;
    cout << sizeof(char16_t) << " byte" << endl;
    cout << sizeof(char32_t) << " byte" << endl;
    cout << sizeof(wchar_t) << " byte" << endl;
    cout << sizeof(int) << " byte" << endl;
    cout << sizeof(long int) << " byte" << endl;
    cout << sizeof(long long int) << " byte" << endl;
    cout << sizeof(float) << " byte" << endl;
    cout << sizeof(double) << " byte" << endl;


    return 0;

}