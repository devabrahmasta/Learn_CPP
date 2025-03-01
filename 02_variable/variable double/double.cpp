#include <iostream>

// dibawah ini semua adalah deklarasi

int main(){ 
    
    // integer (bilangan bulat/ whole number)
    int age = 25;
    int year = 2024;
    int days = 7.5;

    //double (bilangan desimal)
    double price = 10.9999;
    double gpa = 4.0;
    double temperature = 25.1;

    // char ( singel character)
    char grade = 'A';
    char initial = 'B';

    // boolean (true or false)
    bool student = true; //ini bisa dipakai untuk terdaftar dalam kelas
    bool power = false; //jika daya mati
    bool forsale = false; 

    //string (teks kalimat)
    std::string name = "brodi";
    std::string laptop = "lenovo LOQ";
    std::string day = "thursday";
    std::string address = "12345 Kost ini";


    std::cout << "hello " << name << std::endl;
    std::cout << "You are " << age << " years old " << '\n'; // disini berarti bisa enter walau beda (endl dan \n)
    std::cout << "your address is " << address;


    return 0;
}