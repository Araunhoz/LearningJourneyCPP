//
// Created by Paulo Munhoz on 2025-12-02.
//

#include <iostream>



int nextId() {
    static int id = 1;
    return id++;
}

int main() {
    std::cout << nextId() << std::endl;
    std::cout << nextId() << std::endl;
    std::cout << nextId() << std::endl;
    std::cout << nextId() << std::endl;
    std::cout << nextId() << std::endl;

}