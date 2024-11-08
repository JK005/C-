#include <iostream>
using namespace std;

int main() {

    // Array 2 มิติ
    char letters[2][4] = {
        {'A','B','C','D'},
        {'E','F','G','H'}
    };

    for (int row = 0; row < 2; row++){
        cout << "Row: " << row << endl; // ทำงานที่ลูปนอกก่อน 1 ครั้ง
        for(int col = 0; col < 4; col++){ // จากนั้นเข้ามาทำงานที่ลูปในจนจบ
            cout <<letters[row][col]<< endl; // แล้วค่อยกลับขึ้นไปทำงานที่ลูปนอกอีกครั้ง
        }
    }

    return 0;
}

/* ลูปด้านนอกจะทำงานที่แถว (row) 0 ก่อน และจะแสดงข้อความ "Row: 0"
    จากนั้นลูปด้านในจะวนค่าตั้งแต่ col = 0 ถึง col = 3 เพื่อแสดงตัวอักษรจากคอลัมน์แรกถึงคอลัมน์สุดท้ายในแถว 0 (จะแสดง 'A', 'B', 'C', 'D')
    เมื่อแสดงค่าทั้งหมดในแถว 0 แล้ว ลูปด้านนอกจะทำงานอีกครั้งโดย row = 1 และจะแสดงข้อความ "Row: 1"
    ลูปด้านในจะทำงานอีกครั้งเพื่อแสดงตัวอักษรในแถว 1 (จะแสดง 'E', 'F', 'G', 'H') */