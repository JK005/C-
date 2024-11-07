#include <iostream>
using namespace std;

// return function
string getAddress() {
    return "Singbury"; 
}

int getDiscount() {
    return 900; // ส่งค่าออก
}

int main() {

    // รับค่าด้วยชนิดตัวแปรเดียวกันและนำแสดง
    int amount = getDiscount();
    cout << amount << endl;

    return 0;
}