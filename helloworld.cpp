#include <iostream>
#include <vector>

// custom type definition for a vector of pairs (string, int)
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main() {
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    std::cout << "Enter your age: ";
    std::cin >> age;
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;

    return 0;
}