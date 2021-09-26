#include "Person.h"
#include <iostream>

Person::Person(const string &name, int age, int luck) : name(name), age(age), luck(luck) {
    this->name = name;
    this->age = age;
    this->luck = luck;
}

Person::Person() {
    this->name = "None";
    this->age = 0;
    this->luck = 0;
}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

int Person::getLuck() const {
    return luck;
}

void Person::setLuck(int luck) {
    Person::luck = luck;
}
