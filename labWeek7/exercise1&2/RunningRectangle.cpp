#include <iostream>
#include "Rectangle.cpp"

using namespace std;

int main() {


    Rectangle rectangle1;

    float length ;
    cout << " Enter the length of the rectangle" << endl;
    cin >> length;

    float width;
    cout << "Enter the width  of the rectangle  " << endl;
    cin >> width;
    
    rectangle1.setLength(length);
    rectangle1.setWidth(width);

    cout << "The Area of the Rectangle is : " << rectangle1.areaFunction() << endl;


}