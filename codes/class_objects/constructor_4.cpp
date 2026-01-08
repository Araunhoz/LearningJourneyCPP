//
// Created by Paulo Munhoz on 2025-11-27.
//

#include <iostream>

class Actor {
    public:
    std::string name;
    std::string email;

    Actor(std::string name = "Anonymous", std::string email = "???") : name(name), email(email) {}
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
