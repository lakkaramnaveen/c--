#include <iostream>
#include <vector>

// custom type definition for a vector of pairs (string, int)
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;

int main() {
    text_t greeting = "Hello, World!";
    number_t year = 2024;
    std::cout << greeting << " The year is " << year << "." << std::endl;

    year++;
    year+=1;
    year--;
    year-=1;
    year*=1;
    year/=1;
    year%=1;
    year += 2024;
    std::cout << "Next year will be " << year + 1 << "." << std::endl;

    return 0;
}