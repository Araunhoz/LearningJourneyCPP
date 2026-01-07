//
// Created by Paulo Munhoz on 2025-12-02.
//
#include <iostream>

int max(int n1, int n2) {
    return n1 >= n2 ? n1 : n2;
}

int main() {
    int num1, num2, num3;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Enter third number: ";
    std::cin >> num3;

    std::cout << "Max: " << max(num1,max(num2, num3)) << std::endl;
}