//شرکتی به هر یک از دو نفر از متخصصین خود، ماهانه ۷۵۰٬۰۰۰ ریال پرداخت می‌کند.این شرکت تصمیم دارد ۱۳٫۵٪ درصد به حقوق هر کدام از آن‌ها اضافه کند.برنامه‌ای 
//بنویسید که محاسبه کند در صورت این افزایش حقوق، در طول یک سال چه مقدار به هزینه‌ی سالانه‌ی شرکت اضافه خواهد شد.

//A company pays each of its two specialists 750,000 rials per month. The company plans
//to add 13.5% to each of their salaries. Write a program that calculates how much this
//salary increase will add to the company's annual costs over the course of a year.

#include <iostream>
using namespace std;

int main() 
{
    double monthlySalary = 750000;
    double increasePercent = 13.5;
    double monthlyIncrease = (monthlySalary * increasePercent) / 100;
    double yearlyIncreasePerPerson = monthlyIncrease * 12;
    double totalYearlyIncrease = yearlyIncreasePerPerson * 2;
    cout << "Total yearly increase in company's cost: " << totalYearlyIncrease << " Rials" << endl;
    return 0;
}
