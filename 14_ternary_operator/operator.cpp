#include <iostream>
using namespace std;

int main(){
    // tenary operator ?:  = replacement to an if/else statement
    // condition? expression1 : expression2;

    //int number =8;
    //number >= 10 ? cout << "soo many" : cout << "a little bit";
    //                      expression1 : expression2

    // bool hungry =true;
    // cout << (hungry ? "you re hungry": "you are full");

    bool hungry;
    cout << "are you hungry? : ";
    cin >> hungry;
    
    cout << (hungry ? "you re hungry": "you are full");

    return 0;
}