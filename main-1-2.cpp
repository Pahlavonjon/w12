#include <iostream>
#include <string>
#include "AirCraft.h"
#include "Helicopter.h"
using namespace std;
int main(void){
    Helicopter Apache(80);

    Apache.get_craftID();
    Apache.get_numBirds();
    Apache.get_service();
    Apache.get_speed();
    Apache.get_type();
    Apache.get_weight();
}