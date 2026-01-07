//
// Created by Paulo Munhoz on 2025-12-02.
//

#include <iostream>

//Function prototype

void log(int number, bool newline);

int main () {

    log(3);
    log(4);
    log(5);
    log(6, false);
    log(7, false);
    log(8, false);


    return 0;
}

void log(int number = 0, bool newline = true){
    std::cout << "Number" << number;
    newline ? std::cout << std::endl : std::cout << " ";
}