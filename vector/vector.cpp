#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1 = {1, 2, 3};

    cout << v1[0] << endl;
    cout << v1[1] << endl;
    cout << v1[2] << endl;

    cout << v1.front() << endl;
    cout << v1.back() << endl;
    
    cout << v1.size() << endl;     // untuk mengetahui jumlah element yang sudah ada
    cout << v1.capacity() << endl; // untuk mengetahui kapasitas ruang yang sudah dialokasikan (meskipun belum dipakai).
    
    //normal 
    for (int i = 0; i <= v1.size() - 1; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;

    //menambahkan bagian belakang dengan angka 9
    v1.push_back(9);
    v1.push_back(9);
    v1.push_back(9);
    
    //setelah ditambah
    for (int i = 0; i <= v1.size() -1; i++)
    {
        cout << v1[i] << " ";
    }
    cout << endl;
    
    //menghilangkan bagian belakang    
    v1.pop_back();
    v1.pop_back();
    //menghapus indeks ke-0 + 1 = indeks ke-1
    v1.erase(v1.begin()+1);
    //menghapus range indeks
    v1.erase(v1.begin()+1, v1.end());

    //setelah dihilangkan
    for (int i = 0; i <= v1.size() -1; i++)
    {
        cout << v1[i] << " ";
    }

    //kita bikin capacity jadi fit
    v1.shrink_to_fit();

    cout << endl;
    cout << v1.size() << endl;    
    cout << v1.capacity() << endl; 


    
}