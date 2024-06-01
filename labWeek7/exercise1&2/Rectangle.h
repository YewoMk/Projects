#pragma once

using namespace std;

class Rectangle {
    private:

    float mlength;
    float mwidth;

    public:

    Rectangle();
    ~Rectangle();

    void setLength(float newLength);
    void setWidth(float newWidth);

    float getLength();
    float getWidth();

    float areaFunction() ;

};