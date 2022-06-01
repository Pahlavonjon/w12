#include <iostream>
#include <string>
#include "AirCraft.h"
#include "Helicopter.h"
#include "Airplane.h"
using namespace std;

    Airplane::Airplane():Helicopter::Helicopter(){}        // inherit from base class default constructor
        Airplane::Airplane(int p):Helicopter::Helicopter(1500){
            this->passengers = p;
        }  // number of passengers that can be transported
                 // calls the parent class constructor with weight==15000

        void Airplane::reducePassengers(int x){
            if (this->passengers - x > 0){
                this->passengers -= x;
            }
            else if (this->passengers - x < 0){
                passengers = 0;
            }
        }  // reduce passenger list by x
        int Airplane::get_passengers(){
            return passengers;
        } // returns the passenger attribute