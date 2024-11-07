#include<iostream>
using namespace std;

int main() {
    int N = 10;
    int A[10]; // ประกาศอาเรย์ขนาด 10
    
    // วนรอบรับข้อมูลใส่ลงในอาเรย์
    for (int R = 0; R < N; R++) {
        cout << "Enter value for A[" << R << "]: ";
        cin >> A[R]; // รับข้อมูลจากผู้ใช้ใส่ลงในอาเรย์ A ตำแหน่ง R
    }
    
    // แสดงค่าของอาเรย์
    cout << "Values in the array are: ";
    for (int R = 0; R < N; R++) {
        cout << A[R] << " "; // พิมพ์ค่าของแต่ละตำแหน่งในอาเรย์
    }
    
    return 0;
}