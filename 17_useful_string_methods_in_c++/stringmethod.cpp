#include <iostream>
using namespace std;

int main(){

    string name;

    //name.length() = untuk mengetahui seberapa panjang kata yg ada
    //name.empty() = untuk mengetahui apakah yg diinput itu kosong
    //name.clear() = mengosongkana nama
    //name.append("isi kata") = untuk menambahkan kata yg diisi setelah nama (kek template gt)
    //name.at(0) = jika kamu masukkan 0 maka hanya huruf pertama yang akan di cout
    //name.insert(0, "@") = maka yang keluar itu, sebelum huruf pertama ditambahkan "@"
    //name.find(D) = untuk mengetahui letak D ada di karakter ke berapa
    //name.erase(0, 3) = maka yg terjadi dari 0 sampai huruf ke 3 di hapus
    //get to know more?? cplusplus.com/refrence/string/string

    system("cls"); 
    cout << "enter your name : ";
    getline(cin, name);

    if(name.length() > 12){
        cout<< "Your name can't over than 12 character";
    }
    else
        cout << "welcome "<< name;

    return 0;

}