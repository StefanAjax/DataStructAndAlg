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

    enum Day {MON, TUE, WED, THU, FRI, SAT, SUN};
    
    std::cout << WED << std::endl;
    Day today = MON;
    std::cout << MON << std::endl;

    string s = "to be";
    string t = "not " + s;
    string u = s + " or " + t;
    std::cout << u << std::endl;
    std::cout << u.size() << std::endl;

    enum MealType { NO_PREF, REGULAR, LOW_FAT, VEGETARIAN };

    //c-style struct

    struct Passenger {
        string      name;
        MealType    mealPref;
        bool        isFreqFlyer;
        string      freqFlyerNo;
    };

    Passenger pass = { "Stefan Ajax", REGULAR, true, "293145" };

    std::cout << pass.mealPref << std::endl;

    pass.name = "Stefan Ajax Lindau";

    std::cout << pass.name << std::endl;

    Passenger *p;
    p = new Passenger;
    p->name = "Gabriella";
    (*p).mealPref = VEGETARIAN;
    p->isFreqFlyer = false;
    (*p).freqFlyerNo = "030";
    
    std::cout << p->name << std::endl;
    std::cout << (*p).isFreqFlyer << std::endl;

    delete p;

    //std::cout << p->name << std::endl;    ger segmentation fault pga delete p

}