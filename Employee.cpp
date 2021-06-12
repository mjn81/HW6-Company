

#include "Employee.h"

Employee::Employee(std::string id, std::string name, Address add, int hw, int sph, int wtd, int wd)
: Person(id , name , add) {
    hourWork = hw;
    salaryPerHour = sph;
    workToDo = wtd;
    workDone = wd;
}

Employee::Employee(const Employee &cp) : Person(cp) {
    hourWork = cp.hourWork;
    salaryPerHour = cp.salaryPerHour;
    workToDo = cp.workToDo;
    workDone = cp.workDone;
}

Employee &Employee::operator=(const Employee &e){
    id = e.id;
    name = e.name;
    address = e.address;
    hourWork = e.hourWork;
    salaryPerHour = e.salaryPerHour;
    workToDo = e.workToDo;
    workDone = e.workDone;
    return *this;
}

int Employee::getHourWork() const {
    return hourWork;
}

void Employee::setHourWork(int hourWork) {
    Employee::hourWork = hourWork;
}

int Employee::getSalaryPerHour() const {
    return salaryPerHour;
}

void Employee::setSalaryPerHour(int salaryPerHour) {
    Employee::salaryPerHour = salaryPerHour;
}

int Employee::getWorkToDo() const {
    return workToDo;
}

void Employee::setWorkToDo(int workToDo) {
    Employee::workToDo = workToDo;
}

int Employee::getWorkDone() const {
    return workDone;
}

void Employee::setWorkDone(int workDone) {
    Employee::workDone = workDone;
}


