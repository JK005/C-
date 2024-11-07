#include<iostream>
using namespace std;

int main() {

    //Nested-if คำนวณส่วนลด
    int muney;
    cout << "Enter your muney: ";
    cin >> muney;
    cout << "Muney: " << muney << endl;

    if (muney >=15000)/* if หลัก จำนวนเงินมากกว่าหรือเท่ากับ 15000 */ 
    {
        cout << "You have discount";
        if (muney == 15000) { // if ย่อย
            cout << ": 10% ";
        } else if(muney == 20000) {
            cout << ": 20%";
        } else if(muney == 30000) {
            cout << ": 30%";
        } else {
            cout << ": 50%";
        }
    } else {
        cout << "You don't have discount";
    }

    return 0;
}