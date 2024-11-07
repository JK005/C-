#include <iostream>
using namespace std;

void number(int num1 , int num2 ,int num3 ,int num4 , int num5) {

    for(int i = 1; i <= num1; i++){
        cout << "*" ;
    }
    cout << endl;
    for(int i = 1; i <= num2; i++){
        cout << "*" ;
    }
    cout << endl;
    for(int i = 1; i <= num3; i++){
        cout << "*" ;
    }
    cout << endl;
    for(int i = 1; i <= num4; i++){
        cout << "*" ;
    }
    cout << endl;
    for(int i = 1; i <= num5; i++){
        cout << "*" ;
    }
    cout << endl;
}

int main() {

    int sum1, sum2, sum3, sum4, sum5;
    cout << "Enter five number: ";
    cin >> sum1 >> sum2 >> sum3 >> sum4 >> sum5;

    number(sum1, sum2, sum3, sum4, sum5);

    return 0;
}