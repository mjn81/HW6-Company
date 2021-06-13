
#ifndef HW6_2_COMPANY_H
#define HW6_2_COMPANY_H

#include "Employee.h"
#include "Boss.h"

class Company {

    // IO operators

    friend std::ostream &operator<<(std::ostream &out, const Company &cp) {
        Company temp = cp;
        bool flag = true;
        while (flag) {
            flag = false;
            for (int i = 0; i < temp.boss->getNumberOfEmployees() - 1; ++i) {
                if (temp.employees[i]->getName() > temp.employees[i + 1]->getName()) {
                    std::swap(temp.employees[i], temp.employees[i + 1]);
                    flag = true;
                }
            }
        }
        flag = true;
        while (flag) {
            flag = false;
            for (int i = 0; i < temp.boss->getNumberOfEmployees() - 1; ++i) {
                if (temp.employees[i]->getId().substr(0, 2) < temp.employees[i + 1]->getId().substr(0, 2)) {
                    std::swap(temp.employees[i], temp.employees[i + 1]);
                    flag = true;
                }
            }
        }


        out << "Boss : "<<*(temp.boss) << std::endl << std::endl;
        for (int i = 0; i < temp.boss->getNumberOfEmployees(); ++i) {
            out << *(temp.employees[i]) << std::endl << temp.employees[i]->efficiency() << std::endl << std::endl;

        }
        return out;
    }

    friend std::istream &operator>>(std::istream &in, Company &cp) {
        in >> *(cp.boss);
        for (int i = 0; i < cp.boss->getNumberOfEmployees(); ++i) {
            in >> *(cp.employees[i]);
        }
        in >> cp.budget;
        return in;
    }


private:
    int budget;
    Employee **employees;
    Boss *boss;
public:

    // Constructors

    Company(int bu, const Boss &b, Employee **emp);

    Company(const Company &cp);

    // Destructors

    ~Company();

    // getters & setters

    int getBudget() const;

    void setBudget(int budget);

    Employee **getEmployees() const;

    void setEmployees(Employee **employees);

    Boss *getBoss() const;

    void setBoss(Boss *boss);

    // util funcs

    Employee *maxEfficiency();

    double averageEfficiency();

    void changeBoss();

    void gift();

    void payForService();

    bool isEnoughBudget();

    // writeFiles

    void writeFile() const;
};


#endif //HW6_2_COMPANY_H
