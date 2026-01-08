//
// Created by Paulo Munhoz on 2025-12-19.
//

#include <iostream>
using namespace std;

class Person {
public:
    string name;
    Person(string name) : name(name) {
        cout << "Hello World, My name is: " << name  << endl;
    }

    ~Person() {
        cout << "Goodbye World, My name is: " << name << endl;
    }
};

Person* createPerson() {
    Person p("Hanna");
    return &p;
}
int main() {

    Person* pp1;


    if (true){
        Person p1("Peter");
        pp1 = &p1;
    }

    cout << pp1->name << endl;

    Person* pp2 = createPerson();
    cout << pp2->name << endl;
    cout << "End of code" << endl;
    return 0;
}