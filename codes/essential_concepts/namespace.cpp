//
// Created by Paulo Munhoz on 2025-12-04.
//

#include <iostream>
using namespace std;

int add (int a, double b) {
    a = a + b +10;
}
namespace calc {
    class Product{};
    double buffer;
    int add (int a, double b) {
        return a + b + 20;
    }

}

int main() {
    cout << add(10, 20) << endl;
    cout << calc::add(10, 20) << endl;
    return 0;
}
