//
// Created by Webhouse on 6/13/2021.
//

#include "Company.h"
using namespace std;

Company::Company(int bu, const Boss &b, Employee **emp) : budget(bu) {
    boss = new Boss(b);
    employees = new Employee *[boss->getNumberOfEmployees()];
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        employees[i] = new Employee(*emp[i]);
    }
}

Company::Company(const Company &cp) {
    budget = cp.budget;
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
    delete[] employees;
}

int Company::getBudget() const {
    return budget;
}

void Company::setBudget(int budget) {
    Company::budget = budget;
}

Employee **Company::getEmployees() const {
    return employees;
}

void Company::setEmployees(Employee **employees) {
    Company::employees = employees;
}

Boss *Company::getBoss() const {
    return boss;
}

void Company::setBoss(Boss *boss) {
    Company::boss = boss;
}

Employee *Company::maxEfficiency() {
    Employee *temp = employees[0];
    for (int i = 1; i < boss->getNumberOfEmployees(); ++i) {
        if (employees[i]->efficiency() > temp->efficiency()) {
            temp = new Employee(*employees[i]);
        }
    }
    return temp;
}

double Company::averageEfficiency() {
    double average = 0;
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        average += employees[i]->efficiency();
    }
    average /= (boss->getNumberOfEmployees());
    return average;
}

void Company::changeBoss() {
    if (boss->efficiency() < 40) {
        Employee *max = maxEfficiency();
        for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
            if (employees[i]->efficiency() == max->efficiency()) {
                Boss *bb = dynamic_cast<Boss *>(max);
                boss = bb;
                break;
            }
        }
    }
}

void Company::gift() {
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        string sal = employees[i]->getId().substr(0 , 2);
        if (sal <"90"){
            employees[i]->setHourWork((employees[i]->getHourWork()+5));
        }
        if (maxEfficiency()->efficiency() == employees[i]->efficiency()){
            employees[i]->setHourWork((employees[i]->getHourWork()+10));
        }
    }
}

void Company::payForService() {
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        if (employees[i]->getAddress().getCity() != "Tehran"){
            employees[i]->setHourWork(employees[i]->getHourWork()+7);
        }
    }
}

bool Company::isEnoughBudget() {
    double totalMoney = 0;
    for (int i = 0; i < boss->getNumberOfEmployees(); ++i) {
        totalMoney += employees[i]->calculateSalary();
    }
    if (budget< totalMoney){
        return false;
    }
    return true;
}

