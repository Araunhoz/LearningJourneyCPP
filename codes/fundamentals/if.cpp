//
// Created by Paulo Munhoz on 2025-12-03.
//

#include <iostream>
using namespace std;

int main() {
    double finalGrade;
    cout << "Please enter the final grade: ";
    cin >> finalGrade;

    if (finalGrade >= 7) {
        cout << "Excellent grade." <<endl;
        cout << "Congratulations" <<endl;
    }
    return 0;
}
