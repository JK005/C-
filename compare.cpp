#include<iostream>
using namespace std;

// ตัวดำเนินการเปรียบเทียบ ผลการเปรียบเทียบ คือ True(1) หรือ False(0)
int main() {
    int number1 = 50, number2 = 100;
    bool result = number1 != number2;
    cout << "Result: " << result << endl;
    // < น้อยกว่า <= น้อยกว่าหรือเท่ากับ
    // > มากกว่า >= มากกว่าหรือเท่ากับ
    // == เท่ากัน != ไม่เท่ากัน
    return 0;
}


// *เพิ่มเติม*  ลำดับความสำคัญของตัวดำเนินการ เมื่อมาอยู่ในโปรแกรมเดียวกัน
// ว่าตัวไหนจะทำงานก่อนหรือหลัง ตามลำดับ

                                //ลำดับการทำงาน
// 1    :: , ()
// 2    ++ , --                     ซ้ายไปขวา
// 3    * , / , %                   ซ้ายไปขวา
// 4    + , -                       ซ้ายไปขวา
// 5    < , <= , > , >=             ซ้ายไปขวา
// 6    == , !=                     ซ้ายไปขวา
// 7    && (and)        
// 8    || (or)
// 9    = , += , -= , *= , /= , %=  ขวาไปซ้าย