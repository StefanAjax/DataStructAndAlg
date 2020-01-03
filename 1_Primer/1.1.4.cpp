#include <iostream>
#include <string>
using std::string;

int lokal = 5;

namespace myglobals {
    int time = 0;
    string truth = "I will always love you!";
    }

int main(){

    const double    PI = 3.14159265;
    const int       CUT_OFF[] = {90, 80, 70, 60};
    const int       N_DAYS = 7;
    const int       N_HOURS = 24*N_DAYS;

    typedef char* BufferPtr;
    typedef double Coordinate;

    BufferPtr p;
    Coordinate x, y;

    char U = 'h';
    p = &U;
    
    std::cout << *p << std::endl;

    if(1){

    }

    lokal = 6;

    std::cout << myglobals::truth << std::endl;

}

