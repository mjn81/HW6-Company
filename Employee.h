
#ifndef HW6_2_EMPLOYEE_H
#define HW6_2_EMPLOYEE_H

#include <iostream>
#include "Person.h"

class Employee : public Person{

    friend std::ostream &operator<<(std::ostream &os, const Employee &employee){
        os << static_cast<const Person &>(employee) << " hourWork: " << employee.hourWork << " salaryPerHour: "
           << employee.salaryPerHour << " workToDo: " << employee.workToDo << " workDone: " << employee.workDone;
        return os;
    }

    friend std::istream &operator>>(std::istream &in , Employee &employee){
        in>> static_cast<Person&>(employee) >>employee.hourWork>>employee.salaryPerHour
        >>employee.workToDo>>employee.workDone;
        return in;
    }


protected:
    int hourWork , salaryPerHour , workToDo , workDone;
public:
    Employee() = default;

    Employee(std::string id , std::string name , Address add , int hw , int sph , int wtd , int wd);

    Employee(const Employee &cp);

    Employee &operator=(const Employee&e);

    int getHourWork() const;

    void setHourWork(int hourWork);

    int getSalaryPerHour() const;

    void setSalaryPerHour(int salaryPerHour);

    int getWorkToDo() const;

    void setWorkToDo(int workToDo);

    int getWorkDone() const;

    void setWorkDone(int workDone);

    bool validate() override;

    virtual double calculateSalary() const;

    double efficiency() const;

};


#endif //HW6_2_EMPLOYEE_H
