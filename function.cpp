#include <iostream>
using namespace std;

// void function ฟังค์ชั่นปกติ คือ ไม่มีค่าอะไรส่งเข้าและไม่ส่งค่าออก
void displayNumber() {
    for (int i =1 ; i <=3; i++ ){
        cout << i << endl;
    }
}
void sayHi() {
    cout << "I'm Jukkrit" << endl;
}

int main() {    

    // การเรียกใช้ฟังค์ชั่น Outputออกหน้าจอทันทีที่รันคำสั่ง
    displayNumber();
    sayHi();

    // ถ้าอยากเรียกใช้ตัวฟังค์ชั่นหลายรอบ สามารถใช้ loop ร่วมได้
    for(int i= 1; i <= 3; i++){
        sayHi();
    } 
    

    return 0;
}