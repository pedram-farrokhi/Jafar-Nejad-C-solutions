//برنامه ای بنویسید که وزن کالایی را بر حسب کیلوگرم دریافت کرد و وزن آن را بر حسب گرم در خروجی چاپ کند
//Write a program that receives the weight of an item in kilograms and prints its weight in grams in the output.

#include <iostream>
using namespace std;

int main() {
    double weightInKg, weightInGrams;
    cout << "Enter the weight in kilograms: ";
    cin >> weightInKg;
    weightInGrams = weightInKg * 1000;
    cout << "The weight in grams is: " << weightInGrams << " grams" << endl;
    return 0;
}
