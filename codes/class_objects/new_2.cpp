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
    Person* p = new Person("Peter");
    return p;
}

void changePerson(Person& p) {
    p.name += " Parker";
}

int main() {
    // new operator allocates memory on the heap
    //and calls constructor
    Person* person1 = new Person("Aunt May Parker");

    //delete operator frees memory
    // and calls destructor

    delete person1;

    Person* person2 = (Person*)malloc(sizeof(Person));
    free(person2);

    Person* person3 = createPerson();
    changePerson(*person3);
    cout << person3->name << endl;

    delete person3;

    return 0;
}
