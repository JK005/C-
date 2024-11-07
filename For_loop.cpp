#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter Your number: ";
        cin >> number ;
    for(int count = 1; count<= number ; count++){
        if (count % 2 == 0) {
            cout << count << endl;
        }
    }
    cout << "End Program";

    return 0;
}