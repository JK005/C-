#include <iostream>
using namespace std;
/* Function Overloading
    การสร้างฟังค์ชั่นที่มีชื่อเหมือนกันแต่สามารถรับพารามิเตอร์
    จำนวนต่างกัน พร้อมคืนค่าที่แตกต่างกันได้ */

void add(int num1 , int num2) {
    cout << num1 + num2 << endl;
}

void add(double num1 , double num2){
    cout << num1 + num2 << endl;
}

void add(int num1 , int num2 , int num3) {
    cout << num1 + num2 + num3 << endl;
}

int main() {
    
    /* จำนวนของ Argument == Parameterของฟังค์ชั่นใด 
    หรือชนิดข้อมูลของ Argument & Parameter เหมือนกัน แสดงว่าเรียกใช้ฟังค์ชั่นนั้นอยู่*/
    add(10.1 , 20.2);

    return 0;
}