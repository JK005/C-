#include <iostream>
using namespace std;

//TEST 1: หาผลรวมตัวเลข (5 จำนวน) for รู้จำนวนที่แน่นอน
//TEST 2: หาผลรวมตัวเลข (ไม่จำกัดจำนวน) while ไม่รู้จำนวนที่แน่ชัด

int main() {
    int number, sum = 0 ;
    
    for(int count = 1; count <= 10; count++){
        if(count == 5) break;
        cout << "Enter your number: "<< count << " = ";
        cin >> number;
        sum = sum + number ; // หาผลรวม
    }
    cout << "Summation: " << sum << endl;


    while (true) // ไม่ทราบจำนวนที่แน่นอน จึงใส่ค่าในเงื่อนไขเป็นจริง เสมอ!!
    {
        cout << "Enter your number: ";
        cin >> number;
        if(number <= 0)break;
        // cout << "Your number: " << number << endl;
        sum += number;
    }
    cout << "Sum = "<< sum << endl;

    return 0;
}