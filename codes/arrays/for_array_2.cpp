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

    cout << "\nForeach #01 (Copy)...\n";

    for (string s: names) {
        s.append("!!!!");       //copy
        cout << s << endl;
    }

    cout << "\nForeach #02 (Ref)...\n";

    for (string &s: names) {
        s.append("!!!!");       //ref
        cout << s << endl;
    }

    cout << "\nForeach #03 (Ref CONST)...\n";

    for ( auto const &s: names) {
        cout << s << endl;
    }
    cout <<endl;
    cout << names[0] << endl;


    return 0;
}
