#include "Person.h"

Person::Person() : mWeight(0.0f), mFirstName(""), mAge(0) {}

Person::Person(const string& firstName, float newWeight)
    : mFirstName(firstName), mWeight(newWeight), mAge(0) {}

Person::~Person() {}

float Person::operator+(const Person& otherPerson) {
    return this->mWeight + otherPerson.mWeight;
}

bool Person::operator==(const Person& otherPerson) const {
    return this->mFirstName == otherPerson.mFirstName;
}

bool Person::operator!=(const Person& otherPerson) const {
    return this->mFirstName != otherPerson.mFirstName;
}

bool Person::operator<(const Person& otherPerson) const {
    return this->mAge < otherPerson.mAge;
}

bool Person::operator>(const Person& otherPerson) const {
    return this->mAge > otherPerson.mAge;
}

Person::operator int() {
    return mAge;
}

Person::operator string() {
    return mFirstName;
}

Person::operator float() {
    return mWeight;
}
