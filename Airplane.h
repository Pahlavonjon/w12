#ifndef Airplane_H
#define Airplane_H
#include <iostream>
#include <string>
#include "AirCraft.h"
using namespace std;
class Airplane : public Helicopter{
    public:
        Airplane();        // inherit from base class default constructor
        Airplane(int p);  // number of passengers that can be transported
                 // calls the parent class constructor with weight==15000
        int passengers;  // class attribute for passengers

        void reducePassengers(int x);  // reduce passenger list by x
        int get_passengers(); // returns the passenger attribute
};
#endif