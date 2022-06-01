#include <iostream>
#include <string>
#include "AirCraft.h"
using namespace std;
int main(void){
    AirCraft Jumbo("commercial",39874,20);

    Jumbo.get_type();
    Jumbo.get_service();
    Jumbo.get_weight();
}