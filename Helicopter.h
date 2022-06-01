#ifndef Helicopter_H
#define Helicopter_H
#include <iostream>
#include <string>
#include "AirCraft.h"
using namespace std;
class Helicopter : public AirCraft{
    private:
        static int numBirds;
    public:
        Helicopter();
        Helicopter(int w);     // creates a Helicopter with weight w
                      // calls the parent class constructor with type=="Helicopter", weight==w
                      // and length of service, service==0
        int craftID;          // unique craft id attribute
        int get_craftID();
        void set_craftID(int new_number);

        int get_numBirds();
        void set_numBirds(int new_number);

        int get_speed();
};
#endif
