#include <iostream>
#include <string>
#include "AirCrafts.h"
#include "Helicopter.h"
using namespace std;
int main(void){
    AirCrafts sort_aircrafts();


    Helicopter** hel_array;
    for (int k = 0; k < 4; k++){
        hel_array[k] = new Helicopter(30);
    }
    sort_aircrafts.sort(hel_array,4);
}