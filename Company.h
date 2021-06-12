
#ifndef HW6_2_COMPANY_H
#define HW6_2_COMPANY_H

#include "Employee.h"
#include "Boss.h"

class Company {
private:
    int budget;
    Employee **employees;
    Boss *boss;
public:

    Company(int bu ,const Boss &b , Employee** emp);

    Company(const Company& cp);

    ~Company();

};


#endif //HW6_2_COMPANY_H
