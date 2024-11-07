#include <iostream>
using namespace std;

int main() {
    // หาผลรวมและค่าเฉลี่ยตัวเลข 3 จำนวน
    int number[3], total ;
    int count = sizeof(number) / sizeof(number[0]);
    for(int i=0; i<count; i++){
        // 0-2
        cout << "Enter Your number "<< i+1 <<": ";
        cin >> number[i];
        total = total + number[i];
    }
    cout << "Total: " << total << endl;
    cout << "Avg: " << total / count << endl;
    cout << "End Program";
   return 0;
}