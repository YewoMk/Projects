#include "circle.h"
using namespace shapes;

Circle::Circle() {
    mRadius = 0;

}

Circle::Circle(int newRadius) {
    mRadius = newRadius;
}

Circle::~Circle() {

}
int Circle::getRadius() {
    return mRadius;
}
