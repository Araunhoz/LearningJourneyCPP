//
// Created by Paulo Munhoz on 2025-12-01.
//

#include <iostream>

int main() {

    double pi = 3.14;
    double& piRef = pi;

    std::cout << piRef << std::endl;

    // * -> fereference operator
    // Think of as "Get Value At ..."

    std::cout << *&pi << std::endl;
    std::cout << &*&pi << std::endl;
    std::cout << &*&*&pi << std::endl;

    // * is used to create a pointer!

    return 0;
}