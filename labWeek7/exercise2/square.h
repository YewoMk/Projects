#pragma once 


namespace shapes {
    class Square {
        private:
             int sideLength ;

        public:
            Square();
            Square(int newLength);
            ~Square();

            int getLength();

    };
};