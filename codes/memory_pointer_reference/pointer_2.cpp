//
// Created by Paulo Munhoz on 2025-12-01.
//

#include <iostream>

int main () {

    int* p1;
    int* p2 = nullptr;

    int x = 5;
    int y = 10;

    p1 = &x;

    std::cout << *p1 << std::endl;

    p1 = &y;

    std::cout << *p1 << std::endl;

    p2 = p1;    // copy the memory address
    std::cout << *p2 << std::endl;
    return 0;


}