#include <iostream>
using namespace std;

// Create Function Parameter / ฟังค์ชั่นแบบมีพาราเมเตอร์
void sayHi(string name){
    cout << "Hello "<< name << endl;
}

void add(int num1,int num2){
    int total = num1 + num2 ;
    // ตัวแปร total สามารถเรียกใช้ได้แค่ในฟังค์ชั่นเท่านั้น (ตัวแปรที่ประกาศในฟังค์ชั่น เรียกว่า LocalVariabel)
    cout << "Total: " << total << endl;
    // cout << "Total: " << num1 + num2 << endl;
}

int main() {

    // เรียกใช้งานฟังค์ชั่น
    sayHi("Kit"); // Argiment ที่ส่งค่าให้ Parameter คือ "Kit" ที่เป็นชนิดข้อมูล String ในรูปแบบเดียวกัน

    // add(50 , 20); // Argiment  50 ส่งให้ num1 และ 20 ส่งให้ num2

    // สามารถประกาศตัวแปรชนิคข้อมูลเป็นค่า Argiment ได้ตัวอย่างดังนี้
    int value1, value2;
    cout << "Enter value1 your number: " ;
    cin >> value1;

    cout << "Enter value2 your number: " ;
    cin >> value2;

    // และเรียกใช้งานฟังค์ชั่น โดยส่งค่า Argiment เป็นชนิดข้อมูลก็สามารถทำได้
    add(value1, value2);



    return 0;
}