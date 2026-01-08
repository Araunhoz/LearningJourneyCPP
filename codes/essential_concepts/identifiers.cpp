//
// Created by Paulo Munhoz on 2025-12-04.
//

#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

double add (double a, double b) {
    return a + b + 1000;
}

double add (int  a, double b) {
    return a + b + 2000;
}

int main() {
    cout << add(10, 20) << endl;
    cout << add(10, 20, 30) << endl;
    cout << add(10.0, 20.0) << endl;
    cout << add(10, 20.0) << endl;
    return 0;
}
