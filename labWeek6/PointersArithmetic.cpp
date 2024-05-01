#include <iostream>
#define print(x) std::cout << x << std::endl;

int main() {

    int* pPointer = nullptr;

    int numbersArray[3] = {10, 20, 30};

    pPointer = numbersArray;

    print("Address at pPointer:  " << pPointer );
    print("Address of numbersArray[0]" << numbersArray);

    print("Value at pPointer:  " << *pPointer);

    print("Value at ++pPointer:   " << *(++pPointer));

    pPointer = numbersArray;

    print("Value at pPointer++  " << *(pPointer++));

    return 0;
}