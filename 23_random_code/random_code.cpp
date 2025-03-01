#include <iostream>
using namespace std;

int main(){

    //psedo random = not trully random (but close)


    srand(time(NULL));

    // int num = (rand() % 6) + 1 ; // THIS IS RANDOM NUM BETWEEN 1 & 6
    int num = (rand() % 20) + 1 ; // THIS IS RANDOM NUM BETWEEN 1 & 20

    cout << num;
}