#include <iostream>

using namespace std;
                   
    //  if statement = jika dia true, maka dilakukan
    //                 jika dia false makan dia diem
                        
int main(){

    int age;

    cout << "input your age: " ;
    cin >> age;

    if(age >= 18){
        cout << "Welcome to the site!" ;
    }
    else if(age <= -0){
        cout << "Sorry you haven't born yet!" ;
    }
    else if(age >=100){
        cout << "You're too old to enter this site!! ";
    }
    else{
        cout << "Your not enough to enter this site";
    }


    return 0;
}