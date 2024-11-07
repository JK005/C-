#include<iostream>
using namespace std;

int main() {
    int count = 1 , number = 0 ;
    cout << "Enter your number: ";
    cin >> number;

    while (count <= 12)
    {
        cout << number << " x " << count << " = " << number * count<< endl;
        count++ ;
    }
    
    return 0;
}