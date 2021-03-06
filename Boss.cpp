#include "Boss.h"

Boss::Boss(const std::string &id, const std::string &name, const Address &add, int hw, int sph, int wtd, int wd,
           int numberOfEmployees) : Employee(id, name, add, hw, sph, wtd, wd), numberOfEmployees(numberOfEmployees) {}

Boss::Boss(const Boss &cp) : Employee(cp) {
    numberOfEmployees = cp.numberOfEmployees;
}

Boss &Boss::operator=(const Boss &boss) {
    Employee::operator=(boss);
    numberOfEmployees = boss.numberOfEmployees;
    return *this;
}

int Boss::getNumberOfEmployees() const {
    return numberOfEmployees;
}

void Boss::setNumberOfEmployees(int numberOfEmployees) {
    Boss::numberOfEmployees = numberOfEmployees;
}

double Boss::calculateSalary() const {
    return Employee::calculateSalary() * 1.15;
}


