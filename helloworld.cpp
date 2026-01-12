#include <iostream>

namespace first {
    int x = 10;
}

namespace second {
    int x = 20; 
}

int main(){
    using namespace std;

    int x = 0;

    cout << first::x << endl;  // Outputs 10
    cout << second::x << endl; // Outputs 20
    cout << x << endl;         // Outputs 0
    return 0;
}