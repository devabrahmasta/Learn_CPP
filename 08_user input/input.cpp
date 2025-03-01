#include <iostream> 
using namespace std;
        // cout << (operatornya kurang dari)
        // cin >> (operatornya itu lebih dari)
int main() {
    string name;
    int age;

    cout << "Berapa umurmu : ";
    cin >> age;

    cout << "Siapa namamu : ";
    getline(cin >> ws, name);   //getline fungsinya biar user bisa input spasi 
                                // >> ws itu ditambah biar kita bisa buat garis baru

    cout << "hello " << name << '\n';
    cout << "umurmu adalah " << age << " tahun";

    return 0;

}