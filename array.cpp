#include <iostream>
using namespace std;

int main() {

    //Create Array
    int score[] = {80, 70, 60, 50, 40, 30, 20, 10, 5, 1, 0};

    // การใช้ For loop ในการอ้างอิงสมาชิกในอาเรย์
    // * i ย่อมาจาก index สามารถใช้คำสั่ง i แทนคำสั่ง index ได้
    for (int i = 0; i < 5 ; i++) {
        cout << "All Index: " << score[i] << endl; }

    //เปลี่ยนแปลงค่าสมาชิก หรือ elament
    // score[0] = 10;

    // อ้างอิงตำแหน่ง index
    // cout << "index 0: " << score[0] << endl;

    return 0;
}


// Sizeof() นับจำนวนว่าชนิดตัวแปรมีกี่บิต
    // cout << sizeof(bool) << endl;
    // cout << sizeof(int) << endl;
    // cout << sizeof(float) << endl;
    // cout << sizeof(double) <<endl;
    // cout << sizeof(long) << endl;
    // cout << sizeof(char) << endl;