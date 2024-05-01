#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string elementsArray[] = {"B123", "C234", "C15", "B177", "G30003", "C235", "B179"};

   
    int arraySize = sizeof(elementsArray) / sizeof(elementsArray[0]);
    
    //cout << "element at kind 0" << elementsArray[0][3] << endl ;

    for (int i = 0; i < arraySize; i++) {
       
        if (elementsArray[i][0] == 'B') {
            
            cout << elementsArray[i] << endl;
        }
    }

    return 0;
}
