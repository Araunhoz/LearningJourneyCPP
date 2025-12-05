//
// Created by Paulo Munhoz on 2025-12-03.
//

#include <iostream>
using namespace std;

int main() {
    double finalGrade;
    cout << "Enter the final grade: ";
    cin >> finalGrade;

    bool goodBehavior;
    cout << "Is He/She well-behaved? ";
    cin >> goodBehavior;

    bool goodStudent = finalGrade >= 9 && goodBehavior;
    bool averageStudent = (finalGrade >= 9) ^ goodBehavior; // XOR
    bool badStudent = finalGrade <= 3 && !goodBehavior;
    bool badCancelled = finalGrade <= 3 || !goodBehavior;

    cout << "Good Student? " << goodStudent << endl;
    cout << "Average Student? " << averageStudent << endl;
    cout << "Bad Student? " << badStudent << endl;
    cout << "Will the loan be Cancelled? " << badCancelled << endl;
    return 0;
}
