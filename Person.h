//
// Created by Webhouse on 6/12/2021.
//

#ifndef HW6_2_PERSON_H
#define HW6_2_PERSON_H


#include <iostream>
#include "Address.h"

class Person {


    friend std::ostream &operator<<(std::ostream &out, const Person &p) {
        out << "Id : " << p.id << " Name : " << p.name << " Address : " << p.address << std::endl;
        return out;
    }

    friend std::istream &operator>>(std::istream &in, Person &p) {
        in >> p.id >> p.name >> p.address;
        return in;
    }

private:
    std::string id, name;
    Address address;
public:
    Person() = default;

    Person(std::string i, std::string n, const Address &ad);

    Person(const Person &cp);

    void setId(std::string i);

    void setName(std::string n);

    void setAddress(const Address &ad);

    std::string getId();

    std::string getName();

    Address getAddress();

    virtual Person &operator=(const Person &person);

    virtual bool validate();
};


#endif //HW6_2_PERSON_H
