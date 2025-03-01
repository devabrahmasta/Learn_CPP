#include <iostream>

//namespace = provides a sollution for preventing  name conflicts
//            in large projects. each entitiy needs a unique name. 
//            a namespace allows for identically named entities 
//            as long as the newspaces are different 

namespace first{ 
    int x = 1;
}
namespace second{ 
    int x = 2;
}

int main () {

    int x = 3;

    std::cout << first::x; //:: disini berfungsi sebagai ruanglingkup

    return 0;
}