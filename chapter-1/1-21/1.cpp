// برنامه ای بنویسید که دو مقدار  صحیح ایکس و ایگرگ را از ورودی بخواند و و مشخص کند ایکس مضربی از ایگرگ هست یا خیر  ؟ 
// Write a program that reads two integers x and γ from the input and determines whether x is a multiple of γ ? 

#include <iostream>
using namespace std;

int main() 
{
    int x, y;
    cout << "Enter x and y: ";
    cin >> x >> y; //Takes 2 numbers (x, y)
    cout << x << " is " << ((y != 0 && x % y == 0) ? "" : "NOT ") << "a multiple of " << y << endl;
    
    return 0;
}
