//
// Created by Paulo Munhoz on 2025-12-02.
//

#include <iostream>

const double PI = 3.14;
int g = 1;

void func3() {
    std::cout<<g<<std::endl;
    std::cout<<"exec..."<<std::endl;
    int g =0;
    g+=100;
}

void func2() {
    g+=10;
    func3();
}

void func1() {
    g++;
    func2();
}

int main() {

    func1();

    std::cout<<g<<std::endl;
    return 0;

}

//stack;

//func3()
//func2()
//func1()
//main
