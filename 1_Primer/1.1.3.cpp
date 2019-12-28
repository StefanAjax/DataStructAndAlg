#include <cstdlib>
#include <iostream>

int main(){
    char ch = 'Q';
    void* np = &ch;
    //char* p = &ch;
    //std::cout << *p;
    //std::cout << std::endl;
    //*p = 'Z';
    std::cout << np;
    std::cout << std::endl;
    int test[5];
    for (int i = 0; i<10000; i++){
        std::cout << test[i] << std::endl;       
    }
    
}