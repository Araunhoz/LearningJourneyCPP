//
// Created by Paulo Munhoz on 2025-12-03.
//

#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 1) {
            continue;
        }
        cout << i << endl;
    }

    for (int j = 1; j < 10; j++) {
        for (int k = 1; k < 10; k++) {
            if (j % 2 ) {
                break;
            }
            cout << j << " " << k << endl;
        }
    }
    return 0;
}
