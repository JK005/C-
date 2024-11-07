#include <iostream>
using namespace std;

int main() {

    //คำนวญจำนวนสมาชิก
    // sizeof(ArrayName) / sizeof(ชนิดข้อมูลที่เก็บในArray)
    int score[] = {80, 70, 60, 50, 40, 30, 20, 10, 5, 1, 0};
    int count = sizeof(score) / sizeof(int); // SupScript in Array / Sizeof integer(4)
    cout << "Element Count: " << count << endl;
    for(int i = 0; i < count; i++) {
        cout << "Element index"<< i << " : "<< score[i] << endl;
    }
    // cout << "Sizeof integer: "<< sizeof(int) << endl;
    // cout << "total: "<< sizeof(score) << endl;
    // cout << "Elements count: "<< sizeof(score)/sizeof(int) << endl;

    char grade[] = {'A', 'B', 'C', 'D', 'F'}; //char = 1 byte
    int count = sizeof(grade) / sizeof(char);
    for(int i = 0; i < count; i++){
        cout << "All Grade: "<< grade[i] << endl;
    }

    return 0;
}

// ตารางแสดงขนาดเก็บข้อมูล
    /* ชนิดข้อมูล             ขนาด(Byte)
       boolean                  1
       int                      4
       long                     4
       float                    4
       double                   8
       char                     1 */
// Example: cout << sizeof(bool) << endl;