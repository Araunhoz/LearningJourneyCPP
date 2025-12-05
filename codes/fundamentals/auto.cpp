//
// Created by Paulo Munhoz on 2025-12-03.
//

#include <iostream>
using namespace std;

int main () {

    //type inference
    auto a = 1;
    auto b = 1.2;
    auto c = false;

    cout << typeid(a).name() <<endl
         << typeid(b).name() <<endl
         << typeid(c).name() <<endl;
    return 0;

}