#include <iostream>
#include <string>
#include "AirFleet.h"
#include "AirCraft.h"
using namespace std;
    
    
    AirFleet::AirFleet(){
        for (int k = 0; k < 5; k++){
            AirCraft_array[k] = new Airplane(20);

            AirCraft_array[k] = new Helicopter(10000);

            AirCraft_array[k] = new Helicopter(5000);

            AirCraft_array[k] = new Helicopter(100);

            AirCraft_array[k] = new Airplane(15);

        }
    }                          
        /* creates an air fleet containing pointers to  5 AirCraft objects as an array; 
        the first and the last elements of the array are pointers to AirPlane objects, 
        the rest of the elements are Helicopters
        */
        AirCraft** AirFleet::get_aircraft(){
            return this->AirCraft_array;
        }