#ifndef AirFleet_H
#define AirFleet_H
#include <iostream>
#include <string>
#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"
using namespace std;

class AirFleet {
    public:
        AirCraft** AirCraft_array;
        AirFleet();                          
        /* creates an air fleet containing pointers to  5 AirCraft objects as an array; 
        the first and the last elements of the array are pointers to AirPlane objects, 
        the rest of the elements are Helicopters
        */
        AirCraft **get_aircraft();    // returns the array of pointers to the five aircraft objects
};
#endif