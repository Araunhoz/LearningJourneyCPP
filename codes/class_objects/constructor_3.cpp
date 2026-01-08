//
// Created by Paulo Munhoz on 2025-11-27.
//

#include <iostream>

class Actor {
    public:
    std::string name;
    std::string email;

    Actor() : Actor("Anonymous") {}

    Actor(std::string name, std::string email = "???") {
        // (*this).name = name;
        // (*this).email = email;
        this->name = name;
        this->email = email;

    }
    std::string toString() {
        return name + " [" + email+ "]";
    }

};

int main() {
    Actor actor1;
    Actor actor2("Steve","steve@office.com");
    std::cout << actor1.toString() << std::endl;
    std::cout << actor2.toString() << std::endl;
}