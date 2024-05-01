#include <iostream>
#define print(x) std:: cout << x << std :: endl;
using namespace std;



int main () {

        int* pPointer = nullptr;

        int intergerVar = 5;

        pPointer = &intergerVar;

        print(intergerVar);

        print(&intergerVar);

        print(pPointer);

        print(&pPointer);

        return 0;

        
}