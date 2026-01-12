#include <iostream>
#include <vector>

// custom type definition for a vector of pairs (string, int)
typedef std::vector<std::pair<std::string, int>> StringIntPairList;

int main() {

    StringIntPairList list = { {"apple", 1}, {"banana", 2}, {"cherry", 3} };
    for (const auto& item : list) {
        std::cout << "Fruit: " << item.first << ", Quantity: " << item.second << std::endl;
    }
    return 0;
}