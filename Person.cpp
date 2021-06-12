
#include "Person.h"

using namespace std;

Person::Person(string i, string n, const Address &ad) {
    id = i;
    name = n;
    address = ad;
}

Person::Person(const Person &cp) {
    id = cp.id;
    name = cp.name;
    address = cp.address;
}

void Person::setId(std::string i) {
    id = i;
}

void Person::setName(std::string n) {
    name = n;
}

void Person::setAddress(const Address &ad) {
    address = ad;
}

std::string Person::getId() {
    return id;
}

std::string Person::getName() {
    return name;
}

Address Person::getAddress() {
    return address;
}

