//برنامه ای بنویسید که مقدار ایکس را از ورودی بخواند و عبارت زیر را محاسبه کند 
//Write a program that reads the value of x from the input and calculates the following expression

#include <iostream>
using namespace std;

int main() {
    double x, y;
    cout << "Enter value of x: ";
    cin >> x;
    y = 1 / ((x*x) + x + 3);
    cout << "The value of y is: " << y << std::endl;
    return 0;
}
