//
// Created by Webhouse on 6/13/2021.
//

#include "Company.h"


Company::Company(int bu, const Boss &b, Employee **emp) : budget(bu) {
    boss = new Boss(b);
    employees = new Employee *[boss->getNumberOfEmployees()];
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        employees[i] = new Employee(*emp[i]);
    }
}

Company::Company(const Company &cp) {
    budget =cp.budget;
    boss = new Boss(*cp.boss);
    employees = new Employee *[boss->getNumberOfEmployees()];
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        employees[i] = new Employee(*cp.employees[i]);
    }
}

Company::~Company() {
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        delete employees[i];
    }
    delete boss;
    delete employees;
}
