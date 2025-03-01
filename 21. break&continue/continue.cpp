#include <iostream>

using namespace std;

// break = break out of a loop
// continue = skip current iteration

int main(){
    for (int i= 1; i <= 20; i++){
        if(i == 10) // klo di print 10 nya bakal di skip
            continue;
        cout << i << '\n';

        if(i == 12)
            break;
    }
}