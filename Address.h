
#ifndef HW6_2_ADDRESS_H
#define HW6_2_ADDRESS_H


#include <string>
#include <iostream>

class Address {
    // IO operators
    friend std::ostream &operator<<(std::ostream &out, const Address &address) {
        out << address.street << '/' << address.city << '/' << address.country;
        return out;
    }

    friend std::istream &operator>>(std::istream &in, Address &address) {
        std::cout << "please enter street - city - country : " << std::endl;
        in >> address.street >> address.city >> address.country;
        return in;
    }


private:
    std::string country, city, street;
public:
    // Constructors
    Address() = default;

    Address(std::string co, std::string ci, std::string st) :
            country(co),
            city(ci),
            street(st) {}

    // getter & setters
    void setStreet(std::string st);

    void setCity(std::string ci);

    void setCountry(std::string co);

    std::string getStreet();

    std::string getCity();

    std::string getCountry();

};


#endif //HW6_2_ADDRESS_H
