//
// Created by Paulo Munhoz on 2025-12-19.
//

#include <iostream>
#include <vector>
using namespace std;
using mapfn = int(*)(int);

vector<int> map(vector<int> v, mapfn fn) {
    vector<int> newVector;
    for (auto el : v) {
        newVector.push_back((*fn)(el));
    }
    return newVector;
}


int main() {

    auto square = [](int x){return x * x;};

    auto triple = [](int x){return 3*x;};

    vector<int> nums = {2, 5, 8, 23, 56};
    vector<int> squares = map(nums, square);
    vector<int> triples = map(nums, triple);


    for (auto n : nums) cout << n << "\t";

    cout << "\n";

    for (auto sqr : squares) cout << sqr << "\t";

    cout << "\n";

    for (auto sqr : triples) cout << sqr << "\t";


    return 0;
}