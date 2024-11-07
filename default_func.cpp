#include <iostream>
using namespace std;

// Default Function คือ ฟังค์ชั่นที่กำหนดค่าเริ่มต้นของ Parameter ไว้อยู่แล้ว
void showData(string name , string address = "bangkok") {
    cout << "student name: " << name << endl;
    cout << "Adress: " << address << endl;
    cout << "-----------------" << endl;
}

int main() {

    // Run the function
    showData("Jukkrit");
    showData("jack");
    showData("bas", "Rayong");

    return 0;
}