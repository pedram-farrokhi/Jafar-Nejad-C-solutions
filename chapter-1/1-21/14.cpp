


#include <iostream>
using namespace std;

int main() 
{
    double monthlySalary = 750000;
    double increasePercent = 12.5;
    double monthlyIncrease = (monthlySalary * increasePercent) / 100;
    double yearlyIncreasePerPerson = monthlyIncrease * 12;
    double totalYearlyIncrease = yearlyIncreasePerPerson * 2;
    cout << "Total yearly increase in company's cost: " << totalYearlyIncrease << " Rials" << endl;
    return 0;
}
