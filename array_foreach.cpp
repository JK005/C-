#include <iostream>
using namespace std;

int main() {
    int score[] = {100, 50, 80, 90, 60};
    char letters[] = {'A', 'B', 'C', 'D'};
    double grades[] = {4.0, 3.8, 3.98, 3.45};

    //ForEach
    cout << "-----ForEach-----" << endl;
    // สร้างตัวแปรชั่วคราว ที่เป็นข้อมูลเดียวกัน(เท่านั้น)
    for(int item : score){
        cout << item << endl;
    }

    //ForLoop
     cout << "-----ForLoop-----" << endl;
    for (int i = 0; i < sizeof(score) / sizeof(score[0]); i++){
        cout << score[i] << endl;
    }


    // Ex: ForEach หาผลรวมของค่าทั้งหมด
    cout << "------Ex: ForEach------" << endl;
    int cart[] = {100, 200, 300, 400};
    int total = 0;
    for (int item : cart) {
        total += item;
        // total = total + item;
    }
    cout << "Total Price: " << total << endl;

    return 0;
}