#include <cstdlib>
#include <iostream>

int main(){
    char ch = 'Q';
    void* np = &ch;
    std::cout << np;
    std::cout << std::endl;
    int test[5];
    for (int i = 0; i<10000; i++){
        std::cout << test[i] << std::endl;       
    }    
}