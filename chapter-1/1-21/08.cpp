//
//

#include <iostream>
using namespace std;

int main() {
    int x = 8, m = 6;
    int y = x * 2 < m + 4 ? 4 * m : 8 * m;
    cout << y << std::endl;
    return 0;
}
