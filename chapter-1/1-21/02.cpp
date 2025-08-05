//برنامه ای بنویسید که یک عدد صحیح را از ورودی بخواند و مشخص نماید زوج است یا فرد ؟ 
//Write a program that reads an integer from the input and determines whether it is even or odd.

#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << " is " << (num % 2 == 0 ? "even" : "odd") << endl;
    return 0;
}
