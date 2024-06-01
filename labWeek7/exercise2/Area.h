#pragma once
#include "square.h"
#include "circle.h"
#include "triangle.h"

using namespace shapes;
class Area{
    public:
         static int AreaOfSquare(Square);
         static int AreaOfTriangle(Triangle);
         static int AreaOfCircle(Circle);
};