//
// Created by Paulo Munhoz on 2025-12-02.
//
#include <iostream>

void incCopy(int value) {
    value++;
}

void incRef(int& value) {
    value++;
}
int main() {
    int x = 1;;

    incCopy(x);
    incRef(x);

    std::cout << x << std::endl;

}