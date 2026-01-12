#include <iostream>
#include <vector>

// custom type definition for a vector of pairs (string, int)
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main() {
    int a = (int)3.21;
    char x = 100;
    std::cout << x << std::endl;
    std::cout << a << std::endl;
    return 0;
}