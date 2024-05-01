#include <iostream>
#include <cmath>

// Function to calculate the area of a square
double calculateSquareArea(double sideLength) {
    return sideLength * sideLength;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    double side, length, width, base, height;

    while (true) {
        std::cout << "Please select the area of the shape to calculate\n"
                  << "1. Square\n"
                  << "2. Rectangle\n"
                  << "3. Triangle\n"
                  << "4. Quit Program\n"
                  << "Enter selection: ";
        std::cin >> choice;

        if (choice == 4) {
            std::cout << "Exiting program. Goodbye!\n";
            break;
        }

        switch (choice) {
            case 1:
                std::cout << "Enter the side length of the square: ";
                std::cin >> side;
                std::cout << "Area of the square: " << calculateSquareArea(side) << std::endl;
                break;
            case 2:
                std::cout << "Enter the length of the rectangle: ";
                std::cin >> length;
                std::cout << "Enter the width of the rectangle: ";
                std::cin >> width;
                std::cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << std::endl;
                break;
            case 3:
                std::cout << "Enter the base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;
                std::cout << "Area of the triangle: " << calculateTriangleArea(base, height) << std::endl;
                break;
            default:
                std::cout << "Invalid input. Please try again.\n";
                break;
        }
    }

    return 0;
}
