#include <iostream>
#include "square.h"
#include "triangle.h"
#include "circle.h"
#include "Area.h"

using namespace shapes;
using namespace std;

int main() {
    while(true) {
     cout << " *********************** CHOOSE AN OPERATION ************************" << "\n" << "\n"
                    
                    " 1. Calculate the area of a square" << "\n"
                    " 2. Calculate the area of a triangle" << "\n"
                    " 3. Calculate the area of a circle" << "\n"
                    " 4. Quit " << endl;
    int choice ;
    cin >> choice;
    switch(choice) {
        case 1: {
            Square square1;

            int length;
            cout << "enter length of square" << endl;
            cin >> length;

            square1 = Square(length);

            cout << "area is " << Area::AreaOfSquare() << endl;
        }
         case 2: {
            Triangle triangle1;

            int base;
            cout << "enter length of base : " << endl;
            cin >> base;

            int height;
            cout << "enter height :" << endl;
            cin >> height;

            triangle1 = Triangle(base, height);

            cout << "area is " << Area::AreaOfTriangle() << endl;
        }
         case 3: {
            Circle circle1;

            int radius;
            cout << "enter radius of circle" << endl;
            cin >> radius;

            circle1 = Circle(radius);

            cout << "area is " << Area::AreaOfCircle() << endl;
        }
        

    }
     
    }
}    


