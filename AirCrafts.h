#ifndef AirCrafts_H
#define Aircrafts_H
#include <iostream>
#include <string>
#include "Helicopter.h"
using namespace std;
class AirCrafts{
    public:
        AirCrafts();
        static void sort(Helicopter **craft, int n);
};
#endif