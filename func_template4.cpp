#include <iostream>
#include <cmath>
using namespace std;

// คำนวณดอกเบี้ยทบต้น
template <typename T>
T findMaxCompound(T Amount, T interest , T years ) {
    T result;
    cout << "Year\tAmount: " << endl;
    for (int i = 0; i < years; i++) {
        result = Amount * pow((1 + interest / 100), i);
        cout << i << "\t" << result << endl;
    } 
    return result;
}

// คำนวณดอกเบี้ยคงที่
template <typename T>
T findMaxSimple(T Amount, T years ) {
    T interest = 5.0; // อัตราดอกเบี้ยคงที่ 5 %
    T result = Amount ;
    cout << "Year\tAmount: " << endl;
    for (int i = 1; i <= years; i++) {
        result += (result * interest / 100);
        cout << i << "\t" << result << endl;
    } return result;
}


int main(){
    int amount, rate, years;
    int interest;
    cout << "ํYour Amount: ";
    cin >> amount;
    cout << "Enter years: ";
    cin >> years;
    cout << "Enter rate : ";
    cin >> rate;

    // เรียกฟังก์ชันสำหรับคำนวณดอกเบี้ยทบต้น
    cout << "คำนวณดอกเบี้ยทบต้น" << endl;
    findMaxCompound( amount, rate ,  years );
    cout << "----------------------------------" << endl;
    // เรียกฟังก์ชันสำหรับคำนวณดอกเบี้ยคงที่
    cout << "คำนวณดอกเบี้ยคงที่" << endl;
    findMaxSimple(amount, years);


    return 0;
}