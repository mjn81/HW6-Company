
#ifndef HW6_2_COMPANY_H
#define HW6_2_COMPANY_H

#include "Employee.h"
#include "Boss.h"

class Company {

    friend std::ostream &operator<<(std::ostream &out , const Company& cp){
        out<<*(cp.boss);
        for (int i = 0; i < cp.boss->getNumberOfEmployees(); ++i) {
            out << *(cp.employees[i]) << std::endl << cp.employees[i]->efficiency() << std::endl << std::endl;
        }
        return out;
    }

    friend std::istream &operator>>(std::istream &in , const Company& cp){


        return in;
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

    Employee *maxEfficiency();

    double averageEfficiency();

    void changeBoss();

};


#endif //HW6_2_COMPANY_H
