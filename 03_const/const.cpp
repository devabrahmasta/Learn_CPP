#include <iostream>

int main() { 
    //the const keyword specifies tht a variable's value is consstant 
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    const double PI = 3.14159; 
    //kalau disini berisi pi (di edit paksa) bisa keganti, tapi kalau ditambahkan const pi tetap ga keganti
    const double radius = 10;
    const double circumference = 2*PI*radius;

    std::cout << circumference << "cm";

    
    return 0;
}