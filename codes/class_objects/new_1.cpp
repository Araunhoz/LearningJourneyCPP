//
// Created by Paulo Munhoz on 2025-12-19.
//

#include <iostream>
using namespace std;

int main() {
    int x = 5; //stack

    // malloc() + constructor
    int* y = new int(10); //heap 4 bytes

    cout << x * *y << endl;

    delete y;  //free() + desctructor

    int* w = new int(100); // 4 bytes * 100 =  400 bytes
    w[49] = 123;
    cout << w[49] << endl;

    delete[] w;

    return 0;

}

