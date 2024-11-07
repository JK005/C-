#include <iostream>
using namespace std;

int main() {

    int x = 100, y = 50;
    x += y; // x = x + y; บวก
    x -= y; // x = x - y; ลบ
    x *= y; // x = x * y; คูณ
    x /= y; // x = x / y; หาร
    x %= y; // x = x % y; หารเศษ
    cout << "X = " << x << endl;
    return 0;
}