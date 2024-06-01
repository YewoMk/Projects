#include <iostream>
#include <string>
using namespace std;

int main() {
   
    

   

    return 0;
}
int& Add(int inputA, int inputB) {

    int result = inputA + inputB;

    return result;
}
float& Add(float inputA , float inputB) {
    float* pResult = new float;
    *pResult = inputA + inputB;
    return *pResult;

}