#include <iostream>
using namespace std;

// ฟังค์ชั่นแบบรับและส่งค่า

/* EX: 1 */
string checknumber(int number/* รับArgument 5 เข้ามาในพาราเมเตอร์ number */) {
    // เงื่อนไขในฟังค์ชั่น
    if(number %2 == 0){
        return "Even Number"; // return ส่งค่า string ออก
    } else {
        return "Odd Number"; // return ส่งค่า string ออก
    }
}


/* EX: 2 */
char calculeteGrade(int score) {
    if(score <= 50) {
        return 'A';
    } else {
        return 'F';
    }
}


/* EX: 3  คำนวณเลขยกกำลัง */
int power(int base, int n/* รอรับค่า Argument จากในฟังค์ชั่น main() */) {
// base = 2 , n = 5, result= 2x2x2x2x2
    int sum = 1; // เก็บผลการคูณของ sum & base 
    for(int i = 1; i<=n; i++) {
        sum *= base;
    }
    return sum ;
}

int main() {

        /* EX: 1 */
    // รับค่า string ด้วยตัวแปรเดียวกัน
    string result = checknumber(5 /* ส่งค่าArgumentให้พาราเมเตอร์ number */);
    cout << "Result: " << result << endl;
    // แสดงค่าresult ที่ให้ค่าจากฟังค์ชั้น checknumber


        /* EX: 2 */
    // คะแนนสอบ -> ได้เกรด 50 ผ่าน = A, น้อยกว่า = F
    char grade = calculeteGrade(40);
    cout << "Your Grade: " << grade << endl;


        /* EX: 3 */
    int num =  power(2, 5);
    cout<< "Result: " << num << endl;

    return 0;
}