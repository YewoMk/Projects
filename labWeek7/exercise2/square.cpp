#include "square.h"
using namespace std;

using namespace shapes;


Square::Square() {
    sideLength = 0;

}
Square::Square(int newLength) {
    sideLength = newLength;
}
Square::~Square() {
    
}
int Square::getLength() {
    return sideLength;

}
