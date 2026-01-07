//
// Created by Paulo Munhoz on 2025-12-02.
//

#include <iostream>

void sayHello() {

    std::cout << "Hello world!" << std::endl;

}

void sayHeloTo(std::string name) {
    std::cout << "Hello " << name << std::endl;

}

std::string returnHi() {

    return std::string("Hi");

}

std::string returnHi(std::string name) {
    return "Hi " + name + "!";
}

int main () {

    sayHello();
    sayHeloTo("Lilly");
    std::string result = returnHi();
    result.append("!!!");
    std::cout << result << std::endl;
    std::cout << returnHi("Mike") <<std::endl;
    return 0;
}