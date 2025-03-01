#include <iostream>
#include <cmath>            // disini biaar kita bisa menambah library untuk fungsi
using namespace std;

int main(){
    double x = 3.5;
    double y = 4;
    double z;

    z = max(x, y); //untuk membandingkan x atau y yang lebih besar
    z = min(x, y); //untuk membandingkan yang lebih
    z = pow(2, 4); // ini sama kayak 2 pangkat 4
    z = sqrt(256); //ini sama kayak akar dari...
    z = abs(-500); // ini sama kayak mutlak (absolute)
    z = round(x); // dibulatkan
    z = ceil(x); // ini dibulatkan ke atas (ceiling)
    z = floor(x); //ini dibulatkan ke bawah (floor)

    //kalau mau tau lebih banyak cari (cmath c++)


    cout << z;
    return 0;
}