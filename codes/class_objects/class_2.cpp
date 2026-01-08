//
// Created by Paulo Munhoz on 2025-11-27.
//

#include <iostream>
#include <string>

class Product {
public:
    std::string name;
    double price;
    double discount;
    double finalPrice() {
        return price - price * discount;
    };

};

int main() {
    Product p1{};
    p1.name = "Notebook";
    p1.price = 1600.45;
    p1.discount = 0.15;

    std::cout << p1.name << std::endl;
    std::cout << p1.price << std::endl;
    std::cout << p1.discount << std::endl;
    std::cout << p1.finalPrice() << std::endl;

    Product p2{"Ipad", 899, 0.1};

    std::cout << p2.name << std::endl;
    std::cout << p2.price << std::endl;
    std::cout << p2.discount << std::endl;
    std::cout << p2.finalPrice() << std::endl;
    return 0;

}