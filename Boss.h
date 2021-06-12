//
// Created by Webhouse on 6/12/2021.
//

#ifndef HW6_2_BOSS_H
#define HW6_2_BOSS_H

#include <ostream>
#include "Employee.h"

class Boss : public Employee {
    friend std::ostream &operator<<(std::ostream &os, const Boss &boss){
        os << static_cast<const Employee &>(boss) << " numberOfEmployees: " << boss.numberOfEmployees;
        return os;
    }

    friend std::istream &operator>>(std::istream &in , Boss &boss){
        in>> static_cast<Employee &>(boss)>>boss.numberOfEmployees;
        return in;
    }

private:
    int numberOfEmployees;
public:

    Boss(const std::string &id, const std::string &name, const Address &add, int hw, int sph, int wtd, int wd,
         int numberOfEmployees);

    Boss(const Boss&cp);

    Boss &operator=(const Boss&boss);

    int getNumberOfEmployees() const;

    void setNumberOfEmployees(int numberOfEmployees);

    double calculateSalary() const override;
};


#endif //HW6_2_BOSS_H
