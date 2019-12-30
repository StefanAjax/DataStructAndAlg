#include <cstdlib>
#include <iostream>
#include <string>
using std::string;


int main(){
    
    /*
    char ch = 'Q';
    void* np = &ch;
    std::cout << np;
    std::cout << std::endl;
    */

    // Testar segmentation fault

    /*
    int test[5];
    for (int i = 0; i<10000; i++){
        std::cout << test[i] << std::endl;    
    }
    */

    char c[] = {'x', 'y', 'z', 'r'};
   
    char* cp0 = &c[0];
    char* cp1 = &c[1];
    char* cp2 = &c[2];
    char* cp3 = &c[3];
    char* cp4 = &c[4];
    char* cp5 = &c[5];
    char* cp6 = &c[6];

    std::cout << "cp0 is: " << cp0 << std::endl;
    std::cout << "cp1 is: " << cp1 << std::endl;
    std::cout << "cp2 is: " << cp2 << std::endl;
    std::cout << "cp3 is: " << cp3 << std::endl;
    std::cout << "cp4 is: " << cp4 << std::endl;
    std::cout << "cp5 is: " << cp5 << std::endl;
    std::cout << "cp6 is: " << cp6 << std::endl;
}