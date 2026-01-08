//
// Created by Paulo Munhoz on 2025-12-19.
//

#include <iostream>
using namespace std;

int main() {

    string names[] = {"Hanna", "Peter", "Mary", "Mike", "James"};

    int size = sizeof names / sizeof names[0];

    for (int i = 0; i < size; i++) {
        cout << names[i] << endl;
    }


    return 0;
}
