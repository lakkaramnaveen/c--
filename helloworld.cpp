#include <iostream>

int main(){
    // pointer to a constant character array
    const char* message = "Hello, World!";

    double radius = 5.0;
    const double pi = 3.14159;
    // pi = 2323.123; // This line will cause a compilation error
    double circumference = 2 * pi * radius;
    std::cout << circumference << std::endl;


    const int LightSpeed = 299792458; // in meters per second
    std::cout << "Light speed is " << LightSpeed << " m/s" << std::endl;

    const int WIDTH = 800;
    const int HEIGHT = 600;

    std::cout << message << std::endl;
    std::cout << "Screen Width: " << WIDTH << ", Height: " << HEIGHT << std::endl;

    return 0;
}