//
// Created by Paulo Munhoz on 2025-12-01.
//

#include <iostream>

int main() {

    // std::string& badRef = nullptr;

    std::string greeting = "Hi";
    std::string& ref = greeting;

    std::cout <<greeting <<std::endl;
    std::cout << ref << std::endl;

    std::string name = "Peter";
    ref =  name;

    std::cout << name << "\t" <<&name << std::endl;
    std::cout << ref << "\t" <<&ref << std::endl;
    std::cout << greeting << "\t" <<&greeting << std::endl;

    ref.append("!!!!!!");
    std::cout << ref << std::endl;

    return 0;
}