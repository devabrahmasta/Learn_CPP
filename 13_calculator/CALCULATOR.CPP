#include <iostream>
using namespace std;

int main(){
    char op;
    double num1;
    double num2;
    double result;

    cout << "===================== CALCULATOR =====================\n\n";
    
    cout << "Enter either (+  -  *  /): ";
    cin >> op;

    cout << "Enter #1: ";
    cin >> num1;  
    
    cout << "Enter #2: ";
    cin >> num2;

    switch(op){
        case '+':
            cout << "The operation is: " << num1 << " + " << num2 << '\n';
            result = num1 + num2; 
            cout << "The result is: " << result << '\n';
            break;
        case '-':
            cout << "The operation is: " << num1 << " - "<< num2 << '\n';
            result = num1 - num2; 
            cout << "The result is: "<< result << '\n';
            break;
        case '*':
            cout << "The operation is: " << num1 << " * "<< num2 << '\n';
            result = num1 * num2; 
            cout << "The result is: "<< result << '\n';
            break;
        case '/':
            cout << "The operation is: " << num1 << " / "<< num2 << '\n';
            result = num1 / num2; 
            cout << "The result is: "<< result << '\n';
            break;
        default :
            cout << "Please enter this operation (+ - * /)"<< '\n';
            break;
    }
cout << '\n';
cout << "===================================================="; 
    
    
    
    
    
}