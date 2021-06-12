
#ifndef HW6_2_COMPANY_H
#define HW6_2_COMPANY_H

#include "Employee.h"
#include "Boss.h"

class Company {

    friend std::ostream &operator<<(std::ostream &out , const Company& cp){
        out<<*(cp.boss);

        return out;
    }

private:
    int budget;
    Employee **employees;
    Boss *boss;
public:

    Company(int bu ,const Boss &b , Employee** emp);

    Company(const Company& cp);

    ~Company();

    int getBudget() const;

    void setBudget(int budget);

    Employee **getEmployees() const;

    void setEmployees(Employee **employees);

    Boss *getBoss() const;

    void setBoss(Boss *boss);

    Employee &maxEfficiency();


};


#endif //HW6_2_COMPANY_H
