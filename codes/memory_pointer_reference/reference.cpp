//
// Created by Paulo Munhoz on 2025-12-01.
//

#include <iostream>

int main() {

    int a = 10; // 32 bits = 4 bytes

    std::cout << a << "\t"<< &a << std::endl;

    std::string name = "John";
    std::cout << name << "\t"<< &name << std::endl;

    return 0;
}