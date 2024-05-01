#include <iostream>
#define print(x) std:: cout << x << std :: endl;

using namespace std;

int main() {

        int firstValue ;
        int secondValue;

        int* pPointer = nullptr;

        pPointer = &firstValue;
        *pPointer = 10;

        pPointer = &secondValue;
        *pPointer = 20;

        print(firstValue);
        print(secondValue);

        return 0;
}