//مثال هایی ازانواع در احکام انتساب و تبدیل انواع در عبارات محاسباتی ارائه دهید
//Give examples of types in assignment statements and type conversions in computational expressions.

//Geeksforgeeks site example
//https://www.geeksforgeeks.org/cpp/type-conversion-in-c/

//Type conversion in assignment statements

#include <iostream>
using namespace std;

int main() 
{
  return 0;
}

***
//Type conversion in computal expressions
	
#include <iostream>
using namespace std;

int main() 
{
  
    // Two variables of different type
    int i = 10;
    char c = 'A';
  
    // printing c after manually converting it
    cout << (int)c << endl;
  	
    // Adding i and c,
    int sum = i + c;
  
    // Printing sum
    cout << sum;
  	
    return 0;
}
