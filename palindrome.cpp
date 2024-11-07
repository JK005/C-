#include <iostream>
#include <string> // สำหรับใช้ string ในการเก็บข้อความ
using namespace std;

int main(){
    string str, reversed_str;

    // รับค่าจากผู้ใช้
    cout << "กรอกคำหรือตัวเลข: ";
    cin >> str;
    
    // ทำการย้อนสตริงหรือข้อความที่กรอกเข้ามา
    reversed_str = string(str.rbegin(), str.rend());
    /* ใช้คำสั่ง string(ชื่อตัวแปรที่ต้องกลับคำ.rbegin(), 
    ชื่อตัวแปรที่ต้องกลับคำ.rend()) 
    เพื่อกลับข้อความในตัวแปร str แล้วเก็บใน reversedStr */

    // ตรวจสอบว่า str ยังอ่านเหมือนกับ reversedStr หรือไม่
    if(str == reversed_str){
        cout << str << " is palindrome" << endl;
    } else {
        cout << str << " is not palindrome" << endl;
    }

    return 0;
}

// สำคัญ ต้องจำ: .rbegin() , .rend() ต้องใช้คู่กัน