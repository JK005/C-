#include<iostream>
 using namespace std;

int main() {
    string name = "Jukkrit" ; // string ตัวแปลชุดข้อความ
    const float SCORE = 80.5; // เก็บทศนิยม 
    // const = ชนิดข้อมูลค่าคงที่ ไม่สามารถประกาศเปลี่ยนค่าได้
    int age = 20; // ตัวเลขจำนวนเต็ม
    bool pass = true; // true(1) = สอบผ่าน / false(0) = สอบไม่ผ่าน
    char grade = 'A' ;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "score: " << SCORE << endl;
    cout << "Pass: " << pass << endl;
    cout << "grade: " << grade << endl;

    return 0;
}