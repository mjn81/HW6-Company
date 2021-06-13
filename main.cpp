#include <iostream>

#include "Company.h"

using namespace std;

int main() {

    Boss *boss = new Boss("94*ab13237", "Ali Mehrabi", *(new Address("Iran", "Tehran", "Enghelab")), 5, 100000, 20, 25,
                          10);

    auto **employee = new Employee *[boss->getNumberOfEmployees()];
    employee[0] = new Employee("93*r11111", "Ahmad Moradi", *(new Address("Iran", "Shiraz", "Fattah")), 5, 85000, 18,
                               50);
    employee[1] = new Employee("93*m11111", "Mehran Ahamdi", *(new Address("Iran", "Shiraz", "Fattah")), 9, 100000, 20,
                               8);
    employee[2] = new Employee("93*v12112", "Ahmad Najafi", *(new Address("Iran", "Shiraz", "Fattah")), 6, 70000, 30,
                               15);
    employee[3] = new Employee("91*x21220", "Paria Rezaie", *(new Address("Iran", "Shiraz", "Fattah")), 7, 50000, 8,
                               5);
    employee[4] = new Employee("88*qq93227", "Masoud Khodagholi", *(new Address("Iran", "Shiraz", "Fattah")), 11, 55000,
                               6,
                               6);
    employee[5] = new Employee("85*r97320", "Hosein Ghadirzadeh", *(new Address("Iran", "Shiraz", "Fattah")), 10,
                               110000, 14,
                               12);
    employee[6] = new Employee("98*ad97320", "Bahram Sadeghi", *(new Address("Iran", "Shiraz", "Fattah")), 4, 30000, 10,
                               2);
    employee[7] = new Employee("99*rt11320", "Reza Shiri", *(new Address("Iran", "Shiraz", "Fattah")), 3, 60000, 12,
                               11);
    employee[8] = new Employee("94*a01203", "Amirhosein Moayedinia", *(new Address("Iran", "Shiraz", "Fattah")), 8,
                               150000,
                               25, 19);
    employee[9] = new Employee("87*ox19280", "Mohammad Rezai", *(new Address("Iran", "Shiraz", "Fattah")), 2, 40000, 30,
                               25);
    Company company(370000, *boss, employee);
    company.gift();
    cout << "gift : " << endl;
    cout << company << endl << endl;
    company.payForService();
    cout << " pay for service : " << endl << endl;
    cout << company << endl << endl
         << " --------------------------------------------------------------------------------- \n\n";
    cout << " compare before and after bossChange : \n\n ";
    cout << company << endl << " Future Boss Salary : " << company.getEmployees()[7]->calculateSalary() << endl
         << " Boss salary : " << company.getBoss()->calculateSalary() << endl << endl;
    company.changeBoss();
    cout << " changeBoss : \n\n";
    cout << company << endl << " Boss Salary : " << boss->calculateSalary() << "\n Previous Boss salary : "
         << company.getEmployees()[7]->calculateSalary() << endl << endl;
    cout << " isEnoughBudget : " << boolalpha << company.isEnoughBudget() << "\n\n AverageEfficiency : "
         << company.averageEfficiency();
    company.writeFile();
    return 0;
}
