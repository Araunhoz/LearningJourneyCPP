//
// Created by Paulo Munhoz on 2025-12-04.
//

//
// Created by Paulo Munhoz on 2025-12-04.
//
#define ZERO 0
//#define SQUARE(X) X * X
#include <iostream>
using namespace std;

int main() {

    #ifdef SQUARE
        cout << SQUARE(ZERO) << endl;
        cout << SQUARE(10 * 10) << endl;
        cout << SQUARE(1 + 2) << endl;
    #else
        cout << "else..." << endl;
    #endif

    #if DEBUG == 0
        cout << "end ..." <<endl;
    #endif

    return ZERO;

}
