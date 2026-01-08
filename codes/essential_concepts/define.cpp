//
// Created by Paulo Munhoz on 2025-12-04.
//
#define ZERO 0
#define SQUARE(X) X * X
#include <iostream>
using namespace std;

int main() {

    cout << SQUARE(ZERO) << endl;
    cout << SQUARE(10 * 10) << endl;
    cout << SQUARE(1 + 2) << endl;
    // 1+2 *1+2
    return ZERO;
}
