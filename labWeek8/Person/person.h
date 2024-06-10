#pragma once 
#include <string>

using namespace std;

class Person {
    public:
         Person();
         Person(float newWeight);

         ~Person();
         float operator+ (const Person& otherperson);

    private:
        float mWeight;
        string mFirstname;
        int mAge;

};