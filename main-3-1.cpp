#include <iostream>
#include <string>
#include "AirFleet.h"
#include "AirCraft.h"
using namespace std;
int main(void){
    AirFleet Royal_Airforce();

    AirCraft** Royal_Airforce_ARRAY_COPY = Royal_Airforce.get_aircraft();
    cout << "\n\n The aicrafts in the array: \n\n";
    for (int k = 0; k < 5; k++){
        cout << Royal_Airforce_ARRAY_COPY[k]->get_weight()<<"\n\n";
    }
    
    return 0;

}