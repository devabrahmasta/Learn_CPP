#include <iostream>
using namespace std;

int main(){
    char unit;
    double temp;

    cout << "========== temperature conversion ==========\n" 
        << "F = Fahrenheit\n" 
        << "C = Celcius\n" << "Ingin mengonversikan dari apa?\t: ";
    cin >> unit;

    if(unit =='F' || unit == 'f'){
        cout << "Masukkan nilai Celcius\t: ";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Hasil dari konversi adalah : "<< temp << " F\n";  
    }
    if(unit == 'C' || unit == 'c'){
        cout << "Masukkan nilai Fahrenheit\t: ";
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "Hasil dari konversi adalah : "<< temp << " C\n";  
    }
    else{
        cout << "please enter only C or F ";
    }
    cout<<"========================================";
    
    
    return 0;
}