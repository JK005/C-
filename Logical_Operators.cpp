#include<iostream>
#include<string>

using namespace std;

//ตัวดำเนินการทางตรรกศาสตร์
int main() {
    // เพศ(male, female), อายุ(integer)
    // ชาย, อายุ 20+
    string gender;

    // input
    cout << "Enter your gender: ";
    cin >> gender;

    //output
    cout << "----Description----" << endl;
    cout << "Your Gender: " << gender << endl;

    // condition(เงื่อนไข) เพศชาย และ อายุ 20+ => ture
    bool condition1 = gender == "male";

    // and => หรือ => true
    if (!(gender == "male")) {
        cout << "Pass Interview" << endl;
    }else {
        cout << "Not Pass" << endl;
    }



    return 0;
}