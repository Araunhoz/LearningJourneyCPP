//
// Created by Paulo Munhoz on 2025-12-02.
//

#include <iostream>

int main(int argc, const char * argv[]) {

    std::cout << argc <<std::endl;
    std::cout << argv[0] <<std::endl;
    if (argc >=2) {
        std::cout << argv[1] <<std::endl;
    }

}
