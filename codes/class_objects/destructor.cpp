//
// Created by Paulo Munhoz on 2025-11-28.
//

#include<iostream>

class Person {
    public:
    std::string name;
    Person(std::string name) : name(name) {
        std::cout << "Hello" << name << std::endl;
    }
    ~Person() {
        std::cout << "Bye" << name << std::endl;
    }
};

void createPerson() {
    Person p5 = {"Pascal"};
}

int main() {
    Person* p0 = new Person("Test");

    Person p1(" Mary");
    createPerson();
     {
         Person p2{" Albert"};
         Person p3{" John"};
         Person p4 = Person{" May"};
     }
    std::cout << "End of code!" << std::endl;
    return 0;
}