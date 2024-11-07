#include<iostream>
using namespace std;

int main(){
    
    // Nested Loop
    for(int i = 2; i <= 3; i++){
        cout << "Table = " << i << endl;
        for(int j= 1; j<=12; j++){
            cout << i << " x " << j << " = " << i*j << endl;
        }
    }

    return 0;
}