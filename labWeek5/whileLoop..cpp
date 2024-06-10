#include <iostream>
#include <limits>

int main() {
    int num;
    while (true) {
        std::cout << "Please enter an integer between 5 and 10: ";
        if (std::cin >> num) {
            if (num >= 5 && num <= 10) {
                std::cout << "Your input value is " << num << ". This value is accepted.\n";
                break;
            } else {
                std::cout << "You entered " << num << " please enter a number between 5 and 10.\n";
            }
        } else {
            std::cout << "Sorry, you entered an invalid number. Please try again.\n";
            std::cin.clear(); 
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
        }
    }
    return 0;
}
