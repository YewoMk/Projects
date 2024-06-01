#pragma once 

namespace shapes {
    class Triangle {
        private:
             int mBase;
             int mHeight;
        public:
            Triangle();
            Triangle(int newBase, int newHeight);
            ~Triangle();

            int getBase();
            int getHeight();

    };
};