//
// Created by Paulo Munhoz on 2025-12-19.
//


#include <iostream>
using namespace std;

int main() {

    string abc = "abcdefghijklmnoprstuvwxyz";

    cout << abc[9] << endl;
    abc[9] = '?';

    for (char l : abc) {
        cout << l << endl;
    }
    return 0;
}
