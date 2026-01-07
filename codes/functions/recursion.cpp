//
//Created by Paulo Munhoz on 2025-12-02.
//

#include <iostream>

int factorial(int n) {

    if (n < 0) return -1;

    if (n == 0) return 1;

    if (n == 1) return 1;

    return n * factorial(n - 1);
}

int main() {

    std::cout<<factorial(5)<<std::endl;
    std::cout<<factorial(-5) << std::endl;
    std::cout<<factorial(0) << std::endl;

    return 0;

}