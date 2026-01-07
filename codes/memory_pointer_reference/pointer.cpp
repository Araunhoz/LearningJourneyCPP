//
// Created by Paulo Munhoz on 2025-12-01.
//

#include <iostream>

int main () {
    /*
     *What is pointer?
     *
     *Pointer is a variable whose values is the address
     *of another variable, i.e,
     *direct address of the memory location
     *
     */

    int value = 98765;
    int & ref = value;
    int* pot = &value;

    std::cout << value << "\t" << ref << "\t" << *pot << std::endl;
    std::cout << &value << "\t" << &ref << "\t" << pot << std::endl;


     return 0;
}