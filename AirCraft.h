#ifndef AirCraft_H
#define AirCraft_H
#include <iostream>
#include <string>
using namespace std;

class AirCraft{
    public:
        string type;                 // the type of AirCraft
        int weight;                // the weight of AirCraft
        int service; 
        int speed;

        AirCraft();
        AirCraft(string t, int w, int l) ;  // creates an Aircraft of type t, weight w, and length-in-service l
                        // the years (length) in service l; takes only non-negative values
        string get_type();
        int get_weight();
        int get_service();

        void set_service(int s);
        void set_weight(int number);
        void set_type(string new_type);

        virtual int get_speed() = 0;


};
#endif