//برنامه زیر چه اشکالی دارد ؟ سعی کنید آن را تایپ کنید و اجرا کنید تا به اشکای آن پی ببرید
//What is wrong with the following program? Try typing it and running it to find out what's wrong.

/*

//wrong code

#include <iostream>
main(); <--- (using namespace std ; + int + del (;) )
{
    cout << "keep looking!"; 
    cout << "you\'ll find it";
    return 0;
}
*/

//correct code

#include <iostream>
using namespace std;
int main()
{
    cout << "keep looking!"; 
    cout << "you\'ll find it";
    return 0;
}
