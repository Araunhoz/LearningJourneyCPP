//
// Created by Paulo Munhoz on 2025-12-19.
//

//
// Created by Paulo Munhoz on 2025-12-19.
//

#include <iostream>
using namespace std;

int main() {

    string names[] = {"Hanna", "Peter", "Mary", "Mike", "James"};

    for (int i = 0; i < 5; i++) {
        cout << names[i] << endl;
    }

    cout << "\nForeach...\n";

    for (string s: names) {
        cout << s << endl;
    }


    return 0;
}
