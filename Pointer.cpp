#include <iostream>
using namespace std;

/* พอยน์เตอร์(Pointer) คือตัวแปรที่ใช้เก็บตำแหน่งที่อยู๋
ของตัวแปรที่สนใจ หรือค่าแอดเดรส(Address)หน่วยความจำ
ซึ่งมีประโยชน์อย่างมากสำหรับการเขียนโปรแกรมจัดการหน่วยความจำ */

int main() {

    // Ex.
    int number = 10;
    // * คือตำแหน่งแอดเดรสในหน่วยความจำที่พอยเตอร์ชี้อยู่
    int* p1 = &number;// & คือ ค่าแอดเดรสของตัวแปร
    cout << "Address: " << &number << endl;
    // ตัวแปร p1 คือ ตัวแปร pointer ที่ชี้ไปที่แอดเดรสของตัวแปรที่เป็นรูปแบบ int
    

    // กำหนดค่าใหม่ ให้ตัวแปร number ผ่าน Address of number
    *p1 = 500;


    // cout << "Value: " << number << endl;
    cout << "Pointer address: "<< p1 << endl;
    cout << "Value in pointer address: "<< *p1 << endl; // ระบุ * เป็นการดึงเอาค่าที่เก็บในแอดเดรสนั้นมาแสงผล

    return 0;
}

// เพิ่มเติม Pointer จะเก็บแค่เลขแอดเดรสที่เป็นเลขฐาน 16 เท่านั้น