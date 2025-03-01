#include <iostream>
using namespace std;

int main(){
    int num;

    do {         // biar berulang sampe mau input number positive
        cout << "Enter positive number\t: ";
        cin>>num;  
    } while(num < 0);

    cout<< "your number is  "<< num;

    return 0;
}