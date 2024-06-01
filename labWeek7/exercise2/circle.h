#pragma once

namespace shapes {
    class Circle {
        private:
            int mRadius;

        public:
            Circle();
            Circle(int newRadius);
            ~Circle();

            int getRadius();
    };
};