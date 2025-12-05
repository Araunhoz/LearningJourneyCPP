//
// Created by Paulo Munhoz on 2025-12-03.
//

#include <iostream>
using namespace std;

int main() {
    bool sunny = true;
    string result = sunny ? ":)" : ":(";
    cout << result << endl;

    double balance = 1234.56;
    double value;
    cout << "Enter the value: ";
    cin >> value;

    char creditOrDebit;
    cout << "Enter the Credit (c)/ Debit (d): ";
    cin >> creditOrDebit;

    cout << "Balance [Before]:"<<balance << endl;

    balance += creditOrDebit == 'c' ? value : -value;
    cout << "Balance [After]:" << balance << endl;
    return 0;
}
