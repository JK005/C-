#include<iostream>
using namespace std;

int main() {

    int a = 5 , b = 5;
    cout << "a: "<< a << endl;
    cout << "Prefix: " << ++a << endl; // เพิ่ม 1 ค่าแล้วนำไปใช้งาน
    cout << "Prefix: " << --a << endl; // ลด 1 ค่าแล้วนำไปใช้งาน
    cout << "current: " << a << endl; // ดูค่าล่าสุดของตัวแปร a

    cout << "b: " << b << endl;
    cout << "Postfix: " << b++ << endl; // นำไปใช้ก่อนแล้วค่อยเพิ่ม 1 ค่าภายหลัง
    cout << "current: " << b << endl;
    cout << "Postfix: " << b-- << endl; // นำไปใช้ก่อนแล้วค่อยลด 1 ค่าภายหลัง
    cout << "current: " << b << endl;



    // ตัวดำเนินการทางคณิตศาสตร์
    // int a = 10 , b = 3;
    // cout << "A: " << a << " B: " << b << endl;
    // cout << "A + B: "<< a + b << endl; // บวก
    // cout << "A - B: " << a - b << endl;// ลบ
    // cout << "A x B: " << a * b << endl;// คูณ
    // cout << "A หาร B: " << a / b << endl;// หาร
    // cout << "A % B: " << a % b << endl; // หารเอาเศษ
    return 0 ;
}