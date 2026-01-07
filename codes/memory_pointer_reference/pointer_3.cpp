//
// Created by Paulo Munhoz on 2025-12-01.
//

#include <iostream>

int main () {

    int values[] = {47, 33, 72, 13, 88};
    //std::cout << &values[0] << std::endl;

    int* p1 = &values[0];
    std::cout << *p1 << std::endl;

    p1++;
    std::cout << *p1 << std::endl;

    p1++;
    std::cout << *p1 << std::endl;

    std::cout << "..." << std::endl;
    std::cout << p1 << std::endl;
    std::cout << p1[0] << std::endl;
    std::cout << p1[1] << std::endl;
    std::cout << p1[2] << std::endl;


    int w = 123;
    int* p2 = &w;

    std::cout << p2 << std::endl;
    std::cout << *p2 << std::endl;
    std::cout << p2[0] << std::endl;

    *p2 = 321;

    std::cout << *p2 << std::endl;
    std::cout << w << std::endl;

    return 0;


}