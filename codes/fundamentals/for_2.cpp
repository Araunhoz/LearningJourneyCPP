//
// Created by Paulo Munhoz on 2025-12-03.
//

#include <iostream>
using namespace std;

int main() {
     //Infinite loop
    // for (;;) {
    //     cout << "For";
    // }
    int number = 0;
    int total = 0;
    int qty = 0;

    for(;number != -1;) {
        cout << "Enter a number or -1 to finish: ";
        cin >> number;

        if (number != -1) {
            total += number;
            qty++;
        }
    }

    //cast

    double avg = ((double) total) / qty;
    cout << total << endl;
    cout << avg << endl;
    return 0;

}
