//
// Created by Paulo Munhoz on 2025-12-01.
//

#include <iostream>

int main() {

    /*
     *Why not "int & xRef = &x;" ?
     *
     *At compile time all instances of xRef
     *are replaced with the address of 'x'
     *
     */

    int x = 7;
    int& xRef = x;
    std::cout << x << "\t" << &x << std::endl;
    std::cout << xRef << "\t" << &xRef << std::endl;

    x++;
    std::cout << xRef << std::endl;

    xRef--;
    std::cout << x <<std::endl;


    return 0;
}