#include <iostream>
using namespace std;

int main(){
    // && = check if two conditions are true 
    // || check if at least one of two condition is true
    // !  = reserves the lpgical state of its operand

    int temp;
    bool sunny = false;

    cout << "enter the temperature : ";
    cin >> temp;

    if(temp > 0 && temp <=30 ){
        cout << "the temperature is good";

    } else
        cout << "the temperature is bad";
  
    if(sunny){
        cout << " its sunny outside";

    } else
        cout << "its cloudy outside";
}