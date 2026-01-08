//
// Created by Paulo Munhoz on 2025-11-27.
//

#include <iostream>
#include <ostream>

class User {
    public:
    std::string name;
    std::string email;

    User() = default;

    User(std::string _name, std::string _email) {
        name = _name;
        email = _email;

    }

    std::string toString() {
        return name + " [" + email + "]";
    }
};

int main() {
    User user1;
    user1.name = "Peter Johnson";
    user1.email = "peter.john@hyux.com";

    User user2("Mary M.", "mym@hyux.com");
    User user3 = User("Brock S", "crocks@hyux.com");
    std::cout << user1.toString() << std::endl;
    std::cout << user2.toString() << std::endl;
    std::cout << user3.toString() << std::endl;
    return 0;

}