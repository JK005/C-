#include <iostream>
using namespace std;

int main() {

    // Array 2D
    // อันแรกคือ [จำนวนแถว] Row และ อันสองคือ [จำนวนColume] Colume

    int score[3][2] = {
    //    0   1
    /*0*/{50,60},
    /*1*/{69,20},
    /*2*/{90,100}
    };
    
    //การเปลี่ยนค่า index ใน Array2
    score[0][1] = 80 ;

    // การเข้าถึงอาเรย์
    cout << score[0][0] << endl;
    cout << score[0][1] << endl;

    char letters[2][4] = {
    //    0   1   2   3
   /*0*/{'A','B','C','D'},
   /*1*/{'E','F','G','H'} 
   };
   
    letters[1][2] = 'Z';
    cout << letters[1][2] << endl;

    return 0;
}