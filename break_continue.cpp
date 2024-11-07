#include <iostream>
using namespace std;

int main() {

    for(int count = 1; count <= 10; count++ ) {
         // if (count == 5) break; // ในกรณีที่มีคำสั่งเดียวใต้เงื่อนไขสามารถนำมาต่อท้าย โดยไม่ต้องอยู่ในปีกกา
         if (count == 5) continue; // กระโดดข้าม 5 ไปทำเงื่อนไขต่อไป
        cout << "Count: " << count << endl;
    }
    cout << "End Program";
    return 0;
}