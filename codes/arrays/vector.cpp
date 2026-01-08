//
// Created by Paulo Munhoz on 2025-12-19.
//

#include <iostream>
using namespace std;

int main() {

    vector<int> nums = {1,2 ,3};
    nums.push_back(4);
    nums.push_back(5);
    nums.push_back(6);
    nums.push_back(7);
    nums.push_back(8);

    nums[0] = 0;

    for (int n : nums) {
        cout << n << endl;
    }
    cout << endl;

    for (auto i = nums.begin(); i != nums.end(); ++i) {
        *i +=100;
        cout << *i << endl;
    }

    cout << endl;
    for (auto i = nums.cbegin(); i != nums.cend(); ++i) {
       // *i +=100;
        cout << *i << endl;
    }

    cout << endl;
    for (auto i = nums.rbegin(); i != nums.rend(); ++i) {
        *i +=100;
        cout << *i << endl;
    }

    cout << endl;
    for (auto i = nums.crbegin(); i != nums.crend(); ++i) {
        // *i +=100;
        cout << *i << endl;
    }

    return 0;
}
