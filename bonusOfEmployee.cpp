/*
Compute the bonus of an employee.
Bonus is computed as 25% of salary.
Salary is computed as hours work times rate per hour.
*/
#include <iostream>
using namespace std;

int main()
{
    int empHours, rate;
    float salaryPerc = 0.25;

    cout << "Enter working hours: ";
    cin >> empHours;

    cout << "Enter employee rate: ";
    cin >> rate;

    int empSalary = empHours*rate;

    cout << "Employee Salary: " << empSalary << " \n";

    int empBonus = empSalary*salaryPerc;

    cout << "Employee Bonus: " << empBonus << " ";


    return 0;
}
