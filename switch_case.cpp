#include <iostream>
using namespace std;

int main() {
    // int service;
    char confirm;
    // cout << "Enter service number(1,2): ";
    // cin >> service ;
    
    // switch (service) {
    //     case 1:
    //         cout << "Create New Bank Account";
    //         break;
    //     case 2:
    //         cout << "Withdraw and Deposite";
    //         break;
    //     default :
    //         cout << "In valid Choice";
    //         break;
    // }
    cout << "Do you want to exit program (y/n): ";
    cin >> confirm;

    switch (confirm)
    {
    case 'y': case 'Y' :
        cout << "Exit Program";
        break;
    case 'n': case 'N':
        cout << "Cancel";
        break;
    
    default:
        cout << "Unknown";
        break;
    }

    return 0;
}