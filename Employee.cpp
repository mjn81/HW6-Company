

#include "Employee.h"

using namespace std;

Employee::Employee(string id, string name, Address add, int hw, int sph, int wtd, int wd)
        : Person(id, name, add) {
    hourWork = hw;
    salaryPerHour = sph;
    workToDo = wtd;
    workDone = wd;
    if (!validate()) {
        cout << "invalid id" << endl;
        exit(-1);
    }
}

Employee::Employee(const Employee &cp) : Person(cp) {
    hourWork = cp.hourWork;
    salaryPerHour = cp.salaryPerHour;
    workToDo = cp.workToDo;
    workDone = cp.workDone;
}

Employee &Employee::operator=(const Employee &e) {
    Person::operator=(e);
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

bool Employee::validate() {
    if (id[2] != '*') // if the 3rd char is * -> false
        return false;
    return Person::validate();
}

double Employee::calculateSalary() const {
    double salary = salaryPerHour * hourWork * ((double) workDone / workToDo);
    return salary;
}

double Employee::efficiency() const {
    return (((double) workDone / workToDo) * 100) / hourWork;
}



