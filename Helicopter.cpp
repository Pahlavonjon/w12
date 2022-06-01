#include <iostream>
#include <string>
#include "AirCraft.h"
#include "Airplane.h"
#include "Helicopter.h"
using namespace std;

    int Helicopter::numBirds = 0;

    Helicopter::Helicopter(){}

    Helicopter::Helicopter(int w):AirCraft::AirCraft("Helicopter",w,0){
        this->weight = w;
        this->craftID = numBirds;
        Helicopter::numBirds++;
    }     // creates a Helicopter with weight w
                      // calls the parent class constructor with type==, weight==w
                      // and length of service, service==0
         // unique craft id attribute
        
        int Helicopter::get_craftID(){
            return this->craftID;
        }
        void Helicopter::set_craftID(int new_number){
            this->craftID = new_number;
        }

        int Helicopter::get_numBirds(){
            return numBirds;
        }
        void Helicopter::set_numBirds(int new_number){
            Helicopter::numBirds = new_number;
        }

        int Helicopter::get_speed(){
            if (this->weight < 135){
                return 140;
            }
            else if (this->weight > 135){
                return 120;
            }
            return 0;
        }