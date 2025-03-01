#include <iostream>
#include <cmath>        //masukkan library jangan lupa
using namespace std;

int main(){
    double a;
    double b;
    double c;

    cout << "Enter side A: ";
    cin >> a;

    cout << "Enter side B: ";
    cin >> b;

    a = pow(a, 2);  //kuadratin dulu
    b = pow(b, 2);  //sama juga
    c = sqrt(a+b);  //baru ditambah trus diakarin

    cout << "Side C is: " << c;

    return 0;
}