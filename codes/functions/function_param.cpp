//
// Created by Paulo Munhoz on 2025-12-02.
//

#include <iostream>

using binaryop = int(*)(int, int);

int exec(int (*func)(int, int ), int a, int b) {
    return(*func)(a,b);
}

int exec_bin(binaryop func, int a, int b) {
    return(*func)(a,b);
}

int add(int a, int b) {
    return a + b;

}

int subtract(int a, int b) {
    return a - b;

}

int min(int a, int b) {
    return a < b ? a : b;

}


int main() {

    std::cout << exec(add,33,44)<<std::endl;
    std::cout << exec(subtract,7,2)<<std::endl;
    std::cout << exec_bin(subtract,7,2)<<std::endl;
    std::cout << exec_bin(subtract,33,44)<<std::endl;
    std::cout << exec_bin(min,33,44)<<std::endl;

    return 0;

}
