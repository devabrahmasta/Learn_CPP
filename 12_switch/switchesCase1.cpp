#include <iostream>
using namespace std;

int main(){
    int month;
    cout << "Please enter the month (1-12): ";
    cin >> month;

    switch(month){   //switch itu gunanya bisa biar ga cape buat if 1 per 1, jadi gabung ajaa.
        case 1:
            cout << "The month is January";
            break;      // fungsi dari break itu sendiri untuk mengakhiri case1 degnan yg lainnya
        case 2:
            cout << "The month is February";
            break;
        case 3:
            cout << "The month is March";
            break;
        case 4:
            cout << "The month is April";
            break;
        case 5:
            cout << "The month is May";
            break;
        case 6:
            cout << "The month is June";
            break;
        case 7:
            cout << "The month is July";
            break;
        case 8:
            cout << "The month is August";
            break;
        case 9:
            cout << "The month is September";
            break;
        case 10:
            cout << "The month is October";
            break;
        case 11:
            cout << "The month is November";
            break;
        case 12:
            cout << "The month is December";
            break;
        default : //default itu fungsinya sama kayak else di if
            cout << "Please enter the month (1-12) " ;
            break;
        
    }
}