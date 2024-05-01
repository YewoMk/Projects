#include <iostream>
#define print(x) std::cout << x << std::endl;

int main () {

    int x = 3;

    int y = x++;

    print(x);
    print(y);

    

    return 0;
}