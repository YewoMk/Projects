#include "triangle.h"


using namespace shapes;

Triangle::Triangle() {
    mBase = 0;
    mHeight = 0;

}

Triangle::Triangle(int newBase, int newHeight) {
    mBase = newBase;
    mBase = newHeight;
}

Triangle::~Triangle(){

}

int Triangle::getBase() {
    return mBase;
} 

int Triangle::getHeight() {
    return mHeight;
}
