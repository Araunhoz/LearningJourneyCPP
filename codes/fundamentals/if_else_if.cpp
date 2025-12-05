//
// Created by Paulo Munhoz on 2025-12-03.
//

#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;

    cin >> n1;
    cin >> n2;
    cin >> n3;

    if (n1 >= n2 && n1 >= n3) {
        cout << n1 << endl;
    } else if (n2 >= n1 && n2 >= n3) {
        cout << n2 << endl;
    } else {
        cout << n3 << endl;
    }
    return 0;
}
