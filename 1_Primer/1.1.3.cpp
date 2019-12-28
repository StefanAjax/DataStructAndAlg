#include <cstdlib>
#include <iostream>

int main(){
    char ch = 'Q';
    char* p = &ch;
    std::cout << *p;
    std::cout << std::endl;
    *p = 'Z';
    std::cout << ch;
    std::cout << std::endl;
}