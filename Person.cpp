
#include "Person.h"

using namespace std;

Person::Person(string i, string n, const Address &ad) {
    id = i;
    name = n;
    address = ad;
    if(!validate()){
        cout<<"invalid id"<<endl;
        exit(-1);
    }
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

Person &Person::operator=(const Person &person) {
    id = person.id;
    name = person.name;
    address = person.address;
    return *this;
}

bool Person::validate() {
    int len = id.length();
    if (len<8 || len >10 )
        return false;
    int mpl = len - 7;
    string tfn = id.substr(0 , 2); //tfn = two first numbers
    string mpc = id.substr(2 , mpl); //mpc = middle part character
    string lpn = id.substr(mpl+2 , 5); // lpn = last part numbers
    if (tfn <"84" || tfn>"99"){
        return false;
    }
    for (int i = 0; i < mpl; ++i) {
        if (mpc[i]>47 && mpc[i]<58){
            return false;
        }
    }
    for (int i = 0; i < 5; ++i) {
        if (lpn[i] == 53 || lpn[i]<48 || lpn[i] > 57){
            return false;
        }
    }
    return true;
}


