#include <iostream>
#include "Employee.h"
#include "Boss.h"
#include "Company.h"
using namespace std;

int main() {

    Boss *boss = new Boss("94*ab13237", "Ali Mehrabi" ,*(new Address("Iran", "Tehran", "Enghelab")), 5, 100000, 20, 25,
                         10);

    auto **employee = new Employee *[boss->getNumberOfEmployees()];
    employee[0] = new Employee( "93*r11111","Reza Moradi", *(new Address("Iran", "Shiraz", "Fattah")), 5, 85000, 18 , 50);
    employee[1] = new Employee( "90*m11111","Mehran Asadi", *(new Address("Iran", "Shiraz", "Fattah")), 9, 100000, 20,
                               8);
    employee[2] = new Employee("93*v12112","Ahmad Ahmadi",  *(new Address("Iran", "Shiraz", "Fattah")), 6, 70000, 30,
                               15);
    employee[3] = new Employee("91*x21220","Ghorban Rezaie",  *(new Address("Iran", "Shiraz", "Fattah")), 7, 50000, 8,
                               5);
    employee[4] = new Employee("88*qq93227","Masoud Rahmati",  *(new Address("Iran", "Shiraz", "Fattah")), 11, 55000, 6,
                               6);
    employee[5] = new Employee( "85*r97320", "Kaveh Moshiri" ,*(new Address("Iran", "Shiraz", "Fattah")), 10, 110000, 14,
                               12);
    employee[6] = new Employee( "98*ad97320","Bahram Sedighi", *(new Address("Iran", "Shiraz", "Fattah")), 4, 30000, 10,
                               2);
    employee[7] = new Employee( "99*rt11320","Reza Shiri", *(new Address("Iran", "Shiraz", "Fattah")), 3, 60000, 12,
                               11);
    employee[8] = new Employee( "94*a01203","Amirhosein Momen", *(new Address("Iran", "Shiraz", "Fattah")), 8, 150000,
                               25, 19);
    employee[9] = new Employee( "87*ox19280", "Mohammad Rad",  *(new Address("Iran", "Shiraz", "Fattah")), 2, 40000, 30,
                               25);
    Company company(300000 , *boss, employee);
    company.gift();
    cout << company << endl<<endl <<endl<<*company.maxEfficiency() << endl << company.isEnoughBudget();


    return 0;
}
