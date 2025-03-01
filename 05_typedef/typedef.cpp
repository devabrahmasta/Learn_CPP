#include <iostream>
#include <vector> 

// typedef= itu membantu keterbacaan dan mengurangi typo
//typedef std::vector<std::pair::<std::string, int>> pairlist_t;
//typedef std::string text_t; 

using text_t = std::string; //mungkiin lebih enak pake using
using number_t = int;

int main() {

    text_t name = "bro "; //gaperlu ngetik panjang" cukup typedefnya aja
    number_t age = 20;

    std::cout << name << '\n';
    std::cout << age << std::endl;
    
    return 0;
}