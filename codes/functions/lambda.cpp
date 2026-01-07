//
// Created by Paulo Munhoz on 2025-12-02.
//

#include <iostream>

auto add = [](int x, int y) -> int { return x + y; };
auto subtract = [](int x, int y) -> int { return x - y; };

int main() {
    std::cout << add(10, 20) << std::endl;
    std::cout << subtract(20, 26) << std::endl;
    return 0;
}