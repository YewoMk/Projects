#include "Rectangle.h"
using namespace std;

Rectangle::Rectangle() {

    mlength = 0;
    mwidth = 0;

}

Rectangle::~Rectangle() {
    
}

void Rectangle::setLength(float newLength) {
    
    mlength = newLength;
}
void Rectangle::setWidth(float newWidth) {

    mwidth = newWidth;
}

float Rectangle::getLength() {

    return mlength;
}

float Rectangle::getWidth() {

    return mwidth;
}
float Rectangle::areaFunction() {

    return mlength * mwidth;

}