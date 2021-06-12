#include "Boss.h"

Boss::Boss(const std::string &id, const std::string &name, const Address &add, int hw, int sph, int wtd, int wd,
           int numberOfEmployees) : Employee(id, name, add, hw, sph, wtd, wd), numberOfEmployees(numberOfEmployees) {}

Boss::Boss(const Boss &cp) : Employee(cp) {
    numberOfEmployees = cp.numberOfEmployees;
}


