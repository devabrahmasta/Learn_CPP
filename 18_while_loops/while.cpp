#include <iostream>
using namespace std;

int main(){
    string name;

    while(name.empty()){         // biar berulang sampe mau input nama
        cout << "Enter your name\t: ";
        cin>>name;  
    }

    // cout<< "hello "<< name;

    return 0;
}