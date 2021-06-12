
#include "Address.h"

using namespace std;

void Address::setStreet(string st) {
    street = st;
}

void Address::setCity(string ci) {
    city = ci;
}

void Address::setCountry(string co) {
    country = co;
}

string Address::getStreet() {
    return street;
}

string Address::getCity() {
    return city;
}

string Address::getCountry() {
    return country;
}

