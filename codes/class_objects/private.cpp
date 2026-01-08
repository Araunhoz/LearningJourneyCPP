//
// Created by Paulo Munhoz on 2025-11-28.
//

#include <iostream>

const double MINIMUM_WAGE = 1500;

class Employee {
private:
    std::string name;
    double wage = MINIMUM_WAGE;
public:

    std::string getName() {
        return name;
    }

    void setName(std::string name) {
        this->name = name;
    }
    double get_wage() {
        return wage > MINIMUM_WAGE ? wage : MINIMUM_WAGE;
    }
    void set_wage(double w) {
        if (w>= MINIMUM_WAGE) {
            this->wage = w;
        }
    }
};

int main() {
    Employee emp1;
    emp1.setName("Paul Smith");
    emp1.set_wage(5000);
    std::cout << emp1.get_wage() << std::endl;
    std::cout << emp1.getName() << std::endl;

    return 0;
}