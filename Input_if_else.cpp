#include<iostream>
using namespace std;

int main(){

    // เก็บคะแนนสอบของวิชาคอมพิวเตอร์ (ชื่อนักเรียน , คะแนนสอบ)
    string name ;
    float score;
    // Input
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter score(1-100): ";
    cin >> score;
    cout << "----Description----" << endl;

    // process
    string status;
    bool condition = score >= 80 && score <= 100;
    if (condition) {
        status = "A" ;
    } else if(condition = score >= 70 && score <= 79)  {
        status = "B" ;
    } else if(condition = score >= 60 && score <= 69) {
        status = "C" ;
    } else if(condition = score >= 50 && score <= 59) {
        status = "D" ;
    } else if(condition = score <= 49 && score <= 0) {
        status = "F" ;
    } else {
        status = "Error" ;
    }
    
    // Ternary operator ? : (if else แบบลดรูป)
    //status = (score>=50) ?  "Pass Exam" : "Not Pass";

    // Output
    cout << "Hello: " << name << endl;
    cout << "Score: " << score << endl;
    cout << "Grade: " << status << endl;
    return 0;
}