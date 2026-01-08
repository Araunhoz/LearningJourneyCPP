//
// Created by Paulo Munhoz on 2025-12-19.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums;
    nums.assign(10,1);

    nums[0] = 7;
    nums[3] = 7;
    nums[5] = 8;
    nums[9] = 7;

    nums.erase(nums.begin()+4);
    cout << "\n";
    cout << nums.size() << endl;


    for (auto n : nums) {
        cout << n << " ";
    }

    nums.clear();
    cout << "\n";
    cout << nums.size() << endl;
    return 0;
}
