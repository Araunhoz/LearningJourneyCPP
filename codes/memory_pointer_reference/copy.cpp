//
// Created by Paulo Munhoz on 2025-12-01.
//

#include <iostream>

int main() {

    int a = 2;
    int b = a; //assignment copies the value


    a++;
    b--;
    std::cout << a << " " << b << std::endl;

    return 0;
}