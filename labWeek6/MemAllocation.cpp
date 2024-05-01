#include <iostream>
#define print(x) std::cout << x << std:: endl;
using namespace std;

int main() {
    int numberOfElements = 0;
    int* dynamicArray = nullptr;

    print("How many numbers would you like to type?" );
    cin >> numberOfElements;

    dynamicArray = new int[numberOfElements];
    
    if (dynamicArray == nullptr) {
        print("Error : memory could not be allocated")
    }
    else {
        for (int i = 0; i < numberOfElements; i++) {
            print("Enter number :");
            cin >> dynamicArray[i];
        }
        print("you have entered:");

        for(int j = 0; j < numberOfElements; j++) {
            print(dynamicArray[j])
        }

        delete[] dynamicArray;
    }
    return 0;


}