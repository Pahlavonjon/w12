#include <iostream>
#include <string>
#include "AirCrafts.h"
#include "Helicopter.h"
using namespace std;

AirCrafts::AirCrafts(){}

void AirCrafts::sort(Helicopter **craft, int n){
    for (int k = 0; k < n; k++){
        for (int j = 0; j < n-k-1; j++){
            if (craft[j]->get_craftID() > craft[j+1]->get_craftID()){
                Helicopter *smaller_craft = craft[j+1];
                Helicopter *bigger_craft = craft[j];

                craft[j] = smaller_craft;
                craft[j+1] = bigger_craft;
            }
        }
    }
}      // sorts the array of n Helicopter in ascending 
                                              // order base on their craftID