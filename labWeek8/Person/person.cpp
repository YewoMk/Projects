#include "person.h"
#include <string>

Person::Person() {
    string mFirstname = "";
    mWeight = 0;
    mAge = 0;
}
Person::Person(float newWeight) {
    mFirstname = "";
    mWeight = newWeight;
    mAge = 18;
}
float Person::operator+(const Person& otherperson) {
    Person person;
   
    person.mWeight = this-> mWeight + otherperson.mWeight;
    return person.mWeight;
}


