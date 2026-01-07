// //
// // Created by Paulo Munhoz on 2025-12-02.
// //

#include <iostream>

void log(std::string text) {
    if (text.empty()) return;
    std::cout <<"Text:"<< text << std::endl;
}

int main() {
    log("");
    log("ok");
    return 0;

}